#include<GL/freeglut.h>

//Program to create an empty Widdow
void init(){
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	//Line C
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Simple Window");
}

void display()
{
	glClearColor(1.0,1.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	gluOrtho2D(0.0,500.0,0,500.0);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POINTS);
		glVertex2i(200,100);
		glVertex2i(70,20);
		glVertex2i(120,150);
		glVertex2i(200,20);
		glVertex2i(60,100);
	glEnd();
	glFlush();
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);			//Line A
	init();					//Line B
	glutDisplayFunc(display);
	glutMainLoop();
	
	return 0;
}
