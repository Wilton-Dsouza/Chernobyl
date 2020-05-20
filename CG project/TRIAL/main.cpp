#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857

void myInit (void)
{
    // making background color black as first
    // 3 arguments all are 0.0
    glClearColor(0.0,0.0,0.0,1.0);

    // making picture color green (in RGB mode), as middle argument is 1.0

    // breadth of picture boundary is 1 pixel
    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // setting window dimension in X- and Y- direction
    gluOrtho2D(0, 1000, 0, 1000);
}

void display()
{
    float theta;
    glBegin(GL_LINE_LOOP);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,1.0,0.0);
        glVertex2f(500+200*cos(theta),500+200*sin(theta));
    }
    glEnd();
    glFlush();
}
int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // giving window size in X- and Y- direction
    glutInitWindowSize(1366,648);
    glutInitWindowPosition(0,0);

    // Giving name to window
    glutCreateWindow("Scene 5");
    myInit();

    glutDisplayFunc(display);
    glutMainLoop();
}
