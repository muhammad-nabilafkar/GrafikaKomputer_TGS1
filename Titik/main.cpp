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
    glutCreateWindow("Titik");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
void draw(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);

    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-13.0, 13.0);
    glVertex2f(13.0, 13.0);
    glVertex2f(13.0, -13.0);
    glVertex2f(-13.0, -13.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glPointSize(10);
    glBegin(GL_POINTS);

    glColor3f(0.8, 0.0, 0.1);   //merah
    glVertex2f(-6.0, 3.0);

    glColor3f(0.2, 0.9, 0.0);   //hijau
    glVertex2f(1.0, -8.0);

    glColor3f(0.1, 0.0, 0.8);   //biru
    glVertex2f(1.0, 7.0);

    glColor3f(0.8, 0.9, 0.0);   //kuning
    glVertex2f(7.0, -4.0);

    glColor3f(0.7, 0.0, 0.7);   //ungu
    glVertex2f(0.0, 0.0);

    glColor3f(0.0, 0.8, 0.8);   //cyan
    glVertex2f(5.0, 9.0);

    glEnd();
    glFlush();
}
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    gluOrtho2D(-20, 20, -20, 20);
}
