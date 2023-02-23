// C++ program for DDA line generation
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include <bits/stdc++.h>
using namespace std;

int x_1,y_1,x_2,y_2;


void myDisplay(void)
{


/*glClear (GL_COLOR_BUFFER_BIT);
  glColor3ub (128, 128, 128);
  glPointSize(5.0);*/

   int dx = x_2 - x_1;
   int dy = y_2 - y_1;

   if(dy <= dx){
      int d = dy - (dx / 2);
      int first_pt = x_1;
      int second_pt = y_1;
      glBegin(GL_POINTS);
      glVertex2i(first_pt, second_pt);
      glEnd();
      while(first_pt < x_2){
         first_pt++;
         if(d < 0){
            d = d + dy;
         }
         else{
            d = d + (dy - dx);
            second_pt++;
         }
            glBegin(GL_POINTS);
            glVertex2i(first_pt, second_pt);
            glEnd();
      }
   }
   else if(dx < dy){
      int d = dx - (dy/2);
      int first_pt = x_1;
      int second_pt = y_1;
      glBegin(GL_POINTS);
      glVertex2i(first_pt, second_pt);
      glEnd();
      while(second_pt < y_2){
         second_pt++;
         if(d < 0){
            d = d + dx;
         }
         else{
            d += (dx - dy);
            first_pt++;
         }
          glBegin(GL_POINTS);
          glVertex2i(first_pt, second_pt);
          glEnd();
      }
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




int main(int argc, char** argv)
{
    cout<<"enter starting cordinate\n";
    cin>>x_1>>y_1;
    cout<<"enter ending cordinate\n";
    cin>>x_2>>y_2;



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

