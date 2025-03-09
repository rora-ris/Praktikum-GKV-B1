#include <GL/glut.h>

void SegiEmpat(float x, float y, float r, float g, float b){
	glLineWidth(5.0f);
	glBegin(GL_LINES);
	glColor3f(r, g, b); // Warna
	
	// Gambar Persegi dari Garis
	glVertex3f(x, y, 0.0);
	glVertex3f(x, -y, 0.0);
	glVertex3f(-x, y, 0.0);
	glVertex3f(-x, -y, 0.0);
	glVertex3f(y, x, 0.0);
	glVertex3f(-y, x, 0.0);
	glVertex3f(y, -x, 0.0);
	glVertex3f(-y, -x, 0.0);
	
	glEnd();
}

void SegiEmpatPenuh(float x, float y, float r, float g, float b){
	glColor3f(r, g, b); // Warna
    glRectf(-x, y, x, -y); // Gambar persegi
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    SegiEmpat(0.6f, 0.6f, 1.0f, 0.0f, 0.0f); // Persegi 1 : Merah
    SegiEmpat(0.5f, 0.5f, 0.0f, 1.0f, 0.0f); // Persegi 2 : Hijau
    SegiEmpat(0.4f, 0.4f, 0.0f, 0.0f, 1.0f); // Persegi 3 : Biru
    SegiEmpat(0.3f, 0.3f, 1.0f, 1.0f, 0.0f); // Persegi 4 : Kuning
    SegiEmpat(0.2f, 0.2f, 1.0f, 0.0f, 1.0f); // Persegi 5 : Magenta
    SegiEmpat(0.1f, 0.1f, 0.0f, 1.0f, 1.0f); // persegi 6 : Cyan

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("SegiEmpat");
    glutDisplayFunc(display);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // BG Hitam
    glutMainLoop();
    return 0;
}
