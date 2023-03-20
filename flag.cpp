#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (0, 107, 61);
glBegin(GL_QUADS);
glVertex2i(0, 0);
glVertex2i(1000, 0);
glVertex2i(1000, 200);
glVertex2i(0, 200);
glEnd();

glColor3ub (255, 210, 15);
glBegin(GL_QUADS);
glVertex2i(0, 200);
glVertex2i(1000, 200);
glVertex2i(1000, 400);
glVertex2i(0, 400);
glEnd();

glColor3ub (207, 9, 33);
glBegin(GL_QUADS);
glVertex2i(0, 400);
glVertex2i(1000, 400);
glVertex2i(1000, 600);
glVertex2i(0, 600);
glEnd();

glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(500, 400);
glVertex2i(425, 200);
glVertex2i(500, 250);
glVertex2i(575, 200);
glEnd();

glColor3ub (0, 0, 0);
glBegin(GL_TRIANGLES);
glVertex2i(400, 335);
glVertex2i(500, 250);
glVertex2i(600, 335);
glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1000.0, 0.0, 600.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1000, 600);
glutInitWindowPosition (100, 150);
glutCreateWindow ("Flag");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
