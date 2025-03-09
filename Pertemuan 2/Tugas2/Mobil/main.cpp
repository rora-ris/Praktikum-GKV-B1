#include <GL/glut.h>
#include <math.h>

#define PI 3.1415926535898

// Fungsi untuk menggambar roda
void drawWheel(float x, float y, float radius) {
    glPushMatrix();
	    glTranslatef(x, y, 0.0);  
	    glColor3f(0.0, 0.0, 0.0);  // hitam
	
	    // Lingkaran luar (ban)
	    glBegin(GL_LINE_LOOP);
	    for (int i = 0; i < 100; i++) {
	        float angle = 2 * PI * i / 100;
	        glVertex2f(radius * cos(angle), radius * sin(angle));
	    }
	    glEnd();
	
	    // Jari-jari roda
	    glBegin(GL_LINES);
	    for (int i = 0; i < 5; i++) {
	        float angle = 2 * PI * i / 5;
	        glVertex2f(0.0, 0.0);
	        glVertex2f(radius * cos(angle), radius * sin(angle));
	    }
	    glEnd();

    glPopMatrix();
}

// Fungsi untuk menggambar mobil
void drawCar() {
    // Body mobil (badan utama)
    glColor3f(0.0, 0.5, 1.0); // biru muda
	glRectf(-0.6, -0.2, 0.6, 0.1);

    // Atap mobil
    glColor3f(0.0, 0.5, 1.0);  // biru muda
    glBegin(GL_POLYGON);
	    glVertex2f(-0.5, 0.1);
	    glVertex2f(-0.4, 0.5);
	    glVertex2f(0.4, 0.5);
	    glVertex2f(0.5, 0.1);
    glEnd();
	
    // Jendela mobil 1
    glColor3f(1.0, 1.0, 1.0);  // putih
    glBegin(GL_POLYGON);
	    glVertex2f(-0.4, 0.15);
	    glVertex2f(-0.35, 0.45);
	    glVertex2f(-0.05, 0.45);
	    glVertex2f(-0.05, 0.15);
    glEnd();
    
    // Jendela mobil 2
    glColor3f(1.0, 1.0, 1.0);  // putih
    glBegin(GL_POLYGON);
	    glVertex2f(0.05, 0.15);
	    glVertex2f(0.05, 0.45);
	    glVertex2f(0.35, 0.45);
	    glVertex2f(0.4, 0.15);
    glEnd();

    // Roda mobil
    drawWheel(-0.4, -0.3, 0.15);  // Roda kiri
    drawWheel(0.4, -0.3, 0.15);   // Roda kanan
}

// Fungsi untuk menggambar tanah
void drawLand() {
    glColor3f(0.0, 1.0, 0.0);  // hijau
    glBegin(GL_POLYGON);
	    glVertex2f(-1.0, -1.0);  
	    glVertex2f(-1.0, 0.0);  
	    glVertex2f(1.0, 0.0);   
	    glVertex2f(1.0, -1.0);   
    glEnd();
}

// Fungsi display
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
	    drawLand();  
	    drawCar();   
    glPopMatrix();
    glFlush();
}

// Fungsi main
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Mobil 2D");
    glutDisplayFunc(display);
    glClearColor(0.0, 1.0, 1.0, 1.0);  // cyan
    glutMainLoop();
    return 0;
}
