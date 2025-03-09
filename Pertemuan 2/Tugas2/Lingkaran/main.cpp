#include <gl/glut.h>
#include <math.h>

void Lingkaran(void){
	glClear(GL_COLOR_BUFFER_BIT);
		#define PI 3.1415926535898
		glBegin(GL_LINE_LOOP);
			GLint circle_points = 100;
			int i;
			float angle;
			for(i=0; i < circle_points; i++){
				angle = 2*PI*i/circle_points;
				glVertex2f(cos(angle), sin(angle));
			}
		glEnd();
	glFlush();
}

int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Lingkaran");
	glutDisplayFunc(Lingkaran);
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
	glutMainLoop();
	
	return 0;
}
