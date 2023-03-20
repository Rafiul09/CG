#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (0, 0,205);
glBegin(GL_QUADS);
glVertex2i(0, 0);
glVertex2i(1020, 0);
glVertex2i(1020, 512);
glVertex2i(0, 512);
glEnd();

glColor3ub (255, 255, 255);
glBegin(GL_QUADS);
glVertex2i(0, 256);
glVertex2i(0, 512);
glVertex2i(512, 512);
glVertex2i(512, 256);



/*glVertex2i(0, 480);
glVertex2i(0, 512);
glVertex2i(64, 512);
glVertex2i(212, 492);
glVertex2i(104, 492);*/


glEnd();
glColor3ub (0, 0,205);
glBegin(GL_TRIANGLES);
glVertex2i(0, 280);
glVertex2i(0, 340);
glVertex2i(108, 340);
glEnd();


glColor3ub (0, 0,205);
glBegin(GL_TRIANGLES);
glVertex2i(64, 256);
glVertex2i(212, 256);
glVertex2i(212, 336);
glEnd();

glColor3ub (0, 0,205);
glBegin(GL_TRIANGLES);
glVertex2i(296, 256);
glVertex2i(448, 256);
glVertex2i(296, 336);
glEnd();

glColor3ub (0, 0,205);
glBegin(GL_TRIANGLES);
glVertex2i(392, 340);
glVertex2i(512, 340);
glVertex2i(512, 280);
glEnd();
glColor3ub (0, 0,205);
glBegin(GL_TRIANGLES);
glVertex2i(0, 428);
glVertex2i(0, 480);
glVertex2i(108, 428);
glEnd();

glColor3ub (0, 0,205);
glBegin(GL_TRIANGLES);
glVertex2i(0, 428);
glVertex2i(0, 480);
glVertex2i(108, 428);
glEnd();

glColor3ub (0, 0,205);
glBegin(GL_TRIANGLES);
glVertex2i(0, 428);
glVertex2i(0, 480);
glVertex2i(108, 428);
glEnd();

/*
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
glEnd();*/

//glColor3ub (0, 0, 0);
/*glBegin(GL_TRIANGLES);
glVertex2i(400, 335);
glVertex2i(500, 250);
glVertex2i(600, 335);
glEnd();*/
glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1020, 0.0, 512.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1020, 512);
glutInitWindowPosition (100, 150);
glutCreateWindow ("Flag");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
