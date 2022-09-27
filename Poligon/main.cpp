#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void draw(void);
void init(void);

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 50);
    glutCreateWindow("Poligon");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
void draw(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);

    glVertex2f(-8.0, -13.0);
    glVertex2f(-2.0, 15.0);
    glVertex2f(-10.5, -2.0);
    glVertex2f(-1.0, 9.0);
    glVertex2f(9.0, 7.5);
    glVertex2f(5.0, 5.0);
    glVertex2f(7.5, 1.0);
    glVertex2f(5.0, -5.0);
    glVertex2f(14.0, -7.5);

    glEnd();
    glFlush();
}
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    gluOrtho2D(-20, 20, -20, 20);
}
