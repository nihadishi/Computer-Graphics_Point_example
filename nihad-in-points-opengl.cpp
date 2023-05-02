#include <windows.h> 
#include <gl/Gl.h>
#include <gl/glut.h>
void myInit(void)
{
glClearColor(0.2,0.2,0.2,0.0); 
glLineWidth(10.0); 
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1000.0, 0.0, 600.0);
}
void myDisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT); 
glColor3f(0.5,0.6,0.7);

glBegin(GL_LINE_STRIP); //N
glVertex2i(50,50);
glVertex2i(50,150);
glVertex2i(100,50);
glVertex2i(100,150);
glEnd();

glBegin(GL_LINE_STRIP); //I
glVertex2i(150,50);
glVertex2i(150,150);
glEnd();

glBegin(GL_LINE_STRIP); //H
glVertex2i(200,50);
glVertex2i(200,150);
glVertex2i(200,100);
glVertex2i(250,100);
glVertex2i(250,150);
glVertex2i(250,50);
glEnd();

glBegin(GL_LINE_STRIP); //A
glVertex2i(300,50);
glVertex2i(325,150);
glVertex2i(350,50);

glEnd();

glBegin(GL_LINE_STRIP); //A
glVertex2i(313,100);
glVertex2i(337,100);

glEnd();



glBegin(GL_LINE_STRIP); //D
glVertex2i(400,150);
glVertex2i(400,50);
glVertex2i(430,50);
glVertex2i(450,60);
glVertex2i(450,140);
glVertex2i(430,150);
glVertex2i(400,150);
glEnd();
glFlush(); 
}

int main(int argc, char** argv)
{
glutInit(&argc, argv); 
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
glutInitWindowSize(1080,720); 
glutInitWindowPosition(0,0); 
glutCreateWindow("Name of Nihad");
glutDisplayFunc(myDisplay); 
myInit();
glutMainLoop(); 
return 0;
}