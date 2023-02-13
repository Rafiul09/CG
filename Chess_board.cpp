#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>



void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(1.0);
    bool f = false;
	for (int x = 0; x <=800; x+=100)
	{
		for (int y= 0; y<=800; y+=100)
		{
			if (f)
			{
				glColor3f(0.0, 0.0, 0.0);
				f=!f;
			}
			else
			{
				glColor3f(1.0, 1.0, 1.0);
				f=!f;
			}
			glBegin(GL_QUADS);
	        glVertex2i(x, y);
	        glVertex2i(x, y + 100);
	        glVertex2i(x + 100, y + 100);
	        glVertex2i(x + 100, y);
	        glEnd();
	        glFlush();

		}

	}



}


void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (800, 800);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
