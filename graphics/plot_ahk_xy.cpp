// https://www.khronos.org/registry/OpenGL-Refpages/gl2.1/xhtml/glOrtho.xml
// g++ plotDB.cpp -lglut -lGL -o plotDB.o
#include <iostream>
#include <cmath>
#include <stdio.h>
#include "GL/glut.h"
#include "GL/gl.h"
using namespace std;
void plot2Dpoint(float x,float y, float red, float green, float blue){
  glColor3f(red, green, blue);
    glVertex2f(x, y);
}

void drawPoints()
{
    float x,y; // x,y where orginally integer
    float h,k;
    float red = 1.0,green = 0 ,blue = 0.0;
    //glClearColor(red,green,blue,alpha);
    glClearColor(0.4, 0.4, 0.4, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    //void glOrtho(GLdouble left,  GLdouble right,
    //GLdouble bottom,  GLdouble top,
    //GLdouble nearVal,  GLdouble farVal);
    // >>>2*3.141592 = 9.42477600000000001
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
    h = -1.0; k = -1.0;
    glPointSize(3.0);
    glBegin(GL_POINTS);// points
    // create the equation y = 5  
    //plot x
    for (x = -10; x <= 10; x= x+0.1){
      h = x;  k = 5; 
      plot2Dpoint(h,k,0,0,1);
      //plot2Dpoint(h,k,red,green,blue);
    }//end x (y = 5)
    
    //plot y
    for (y = -10; y <= 10; y= y+10){
      h = 0;  k = y; plot2Dpoint(h,k,0,1,0);
    }//end x

    //plot
    for (x = -400; x <= 400; x++){
      h = x;
      k = (float)(-3*((x - 4)*(x - 4))-5);
        cout<<"points "<<h<<" "<<k<<endl;
        plot2Dpoint(h,k,1,1,0);
      if (green > 1)green = 0;
    }//end j

    for (x = -10; x <= 10; x++){
      h = x;
      k = (float)((x*x*x)-(x*x) + (4*x) + 5);
        cout<<"points "<<h<<" "<<k<<endl;
        plot2Dpoint(h,k,0,1,0);
      if (green > 1)green = 0;
    }//end j

    glEnd();//end points

    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL -800x800");
    glutDisplayFunc(drawPoints);
    glutMainLoop();
    return 0;
}
