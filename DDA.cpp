// C++ program for DDA line generation
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include <bits/stdc++.h>
using namespace std;

int x01,y01,x11,y11;


void myDisplay(void)
{
   // int x0,y0,x1,y1;

glClear (GL_COLOR_BUFFER_BIT);
        glColor3ub (128, 128, 128);
		glPointSize(5.0);


    int dx = x11 - x01;
	int dy = y11 - y01;


	int step;

	if (abs(dx) > abs(dy))
		step = abs(dx);
	else
		step = abs(dy);

	// Calculate x-increment and y-increment for each step
	float x_incr = (float)dx / step;
	float y_incr = (float)dy / step;

	// Take the initial points as x and y
	float x = x01;
	float y = y01;

	for (int i = 0; i < step; i++) {



        glBegin(GL_POINTS);
        glVertex2i(x, y);
        glEnd();

		x += x_incr;
		y += y_incr;

	}

 glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}



int round(float n)
{
	if (n - (int)n < 0.5)
		return (int)n;
	return (int)(n + 1);
}



int main(int argc, char** argv)
{
cout<<"enter starting cordinate\n";
    cin>>x01>>y01;
    cout<<"enter ending cordinate\n";
    cin>>x11>>y11;

	// Function call

	glutInit(&argc, argv);

    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();

	return 0;
}

// all functions regarding to graphichs.h are commented out
// contributed by hopelessalexander
