#ifdef _APPLE_
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
    glutInitWindowSize(600, 400);
    glutInitWindowPosition(100, 50);
    glutCreateWindow("Garis");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
void draw(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-10.0, 0.0);
    glVertex2f(10.0, 0.0);

    glEnd();
    glFlush();
}
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    gluOrtho2D(-20, 20, -20, 20);
}
