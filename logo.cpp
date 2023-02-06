#include <windows.h>
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(5.0);
/*glBegin(GL_LINES);
glVertex2i(0, 240);
glVertex2i(640, 240);
glVertex2i(320, 480);
glVertex2i(320, 0);
glEnd();*/

glBegin(GL_QUADS);//horn1
 glColor3f(0.0f, 1.0f, 0.0f);
glVertex2i(173, 749);
glVertex2i(173, 600);
glVertex2i(221, 600);
glVertex2i(221, 749);

glEnd();

glBegin(GL_QUADS);//horn2
 glColor3f(1.0f, 0.0f, 0.0f);
glVertex2i(324, 749);
glVertex2i(324, 703);
glVertex2i(276, 703);
glVertex2i(276, 749);

glEnd();
glBegin(GL_QUADS);//shoulder
glColor3f(0.0f, 1.0f, 1.0f);
glVertex2i(71, 500);
glColor3f(1.0f, 0.0f, 1.0f);
glVertex2i(424, 500);
glVertex2i(424, 450);
glVertex2i(71, 450);


glEnd();
glBegin(GL_QUADS);//belt
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2i(71, 400);
glVertex2i(424, 400);
glVertex2i(424, 350);
glVertex2i(71, 350);
glEnd();

glBegin(GL_QUADS);//belt
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2i(71, 400);
glVertex2i(424, 400);
glVertex2i(424, 450);
glVertex2i(71, 450);
glEnd();

glBegin(GL_QUADS);//cape below
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2i(71, 197);
glVertex2i(424, 197);
glColor3f(0.0f, 1.0f, 0.0f);
glVertex2i(424, 350);
glVertex2i(71, 350);
glEnd();
glBegin(GL_QUADS);//face
 glColor3f(1.0f, 0.0f, 0.0f);
glVertex2i(221, 703);
glVertex2i(324, 703);
glVertex2i(324, 600);
glVertex2i(221, 600);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 3.0f);
glVertex2i(173, 547);
glVertex2i(173, 600);
glVertex2i(221, 600);
glVertex2i(221, 547);

glEnd();

glBegin(GL_QUADS);//mouth
glColor3f(0.0f, 1.0f, 1.0f);
glVertex2i(221, 600);
glVertex2i(324, 600);
glVertex2i(324, 547);
glVertex2i(221, 547);


glEnd();

glBegin(GL_QUADS);//chest
glColor3f(0.0f, 1.0f, 1.0f);
glVertex2i(123, 547);
glVertex2i(376, 547);
glVertex2i(376, 400);
glVertex2i(123, 400);


glEnd();

glBegin(GL_QUADS);//logo
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(168, 500);
glVertex2i(325, 500);
glVertex2i(325, 450);
glVertex2i(168, 450);


glEnd();

glBegin(GL_QUADS);//belt
glColor3f(1.0f, 0.0f, 1.0f);
glVertex2i(123, 400);
glVertex2i(376, 400);
glVertex2i(376, 350);
glVertex2i(123, 350);


glEnd();

glBegin(GL_QUADS);//string
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2i(123, 300);
glVertex2i(376, 300);
glVertex2i(376, 350);
glVertex2i(123, 350);


glEnd();

glBegin(GL_QUADS);//vem
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2i(176, 250);
glVertex2i(325, 250);
glVertex2i(325, 350);
glVertex2i(176, 350);


glEnd();

glBegin(GL_QUADS);//LEg l
glColor3f(1.0f, 0.0f, 1.0f);
glVertex2i(176, 300);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2i(123, 300);
glVertex2i(123, 147);
glVertex2i(176, 147);


glEnd();

glBegin(GL_QUADS);//LEg ll
glColor3f(0.0f, 1.0f, 1.0f);
glVertex2i(176, 250);
glVertex2i(221, 250);
glVertex2i(221, 147);
glVertex2i(176, 147);


glEnd();

glBegin(GL_QUADS);//shoe l
glColor3f(1.0f, 0.0f, 1.0f);
glVertex2i(176, 148);
glVertex2i(123, 148);
glVertex2i(123, 96);
glVertex2i(176, 96);


glEnd();
glBegin(GL_QUADS);//shoe ll
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2i(176, 148);
glVertex2i(222, 148);
glVertex2i(222, 96);
glVertex2i(176, 96);


glEnd();

glBegin(GL_QUADS);//LEg R
glColor3f(1.0f, 0.0f, 1.0f);
glVertex2i(376, 300);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2i(325, 300);
glVertex2i(325, 147);
glVertex2i(376, 147);


glEnd();
glBegin(GL_QUADS);//LEg RR
glColor3f(1.0f, 0.0f, 1.0f);
glVertex2i(276, 250);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2i(325, 250);
glVertex2i(325, 147);
glVertex2i(276, 147);


glEnd();

glBegin(GL_QUADS);//Shoe RR
glColor3f(0.0f, 1.0f, 1.0f);
glVertex2i(376, 95);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2i(325, 95);
glVertex2i(325, 147);
glVertex2i(376, 147);


glEnd();

glBegin(GL_QUADS);//Shoe RR
glColor3f(0.0f, 1.0f, 1.0f);
glVertex2i(276, 95);
glColor3f(1.0f, 0.0f, 1.0f);
glVertex2i(325, 95);
glVertex2i(325, 147);
glVertex2i(276, 147);


glEnd();


glFlush ();
/*glBegin(GL_TRIANGLES);
glVertex2i(30, 30);
glVertex2i(290, 30);
glVertex2i(160, 210);
//glVertex2i(320, 0);
glEnd();


glBegin(GL_LINES);
glVertex2i(350, 30);
glVertex2i(350, 120);
glVertex2i(350, 120);
glVertex2i(350, 210);
glVertex2i(350, 120);
glVertex2i(610, 120);
glVertex2i(470, 120);
glEnd();

glFlush ();*/
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
//glMatrixMode(GL_PROJECTION);
//glLoadIdentity();
gluOrtho2D(0.0, 519.0, 0.0, 807.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (519, 807);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
