#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // GL_LINE_STRIP
    glColor3f(1.0f, 0.0f, 0.0f); // Merah
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.8f, 0.8f, 0.0f);
    glVertex3f(-0.6f, 0.6f, 0.0f);
    glVertex3f(-0.4f, 0.8f, 0.0f);
    glVertex3f(-0.2f, 0.6f, 0.0f);
    glEnd();

    // GL_LINE_LOOP
    glColor3f(0.0f, 1.0f, 0.0f); // Hijau
    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.8f, 0.4f, 0.0f);
    glVertex3f(-0.6f, 0.2f, 0.0f);
    glVertex3f(-0.4f, 0.4f, 0.0f);
    glVertex3f(-0.2f, 0.2f, 0.0f);
    glEnd();

    // GL_TRIANGLE_FAN
    glColor3f(0.0f, 0.0f, 1.0f); // Biru
    glBegin(GL_TRIANGLE_FAN);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.2f, 0.2f, 0.0f);
    glVertex3f(0.4f, 0.0f, 0.0f);
    glVertex3f(0.2f, -0.2f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glEnd();

    // GL_TRIANGLE_STRIP
    glColor3f(1.0f, 1.0f, 0.0f); // Kuning
    glBegin(GL_TRIANGLE_STRIP);
    glVertex3f(0.6f, 0.2f, 0.0f);
    glVertex3f(0.8f, 0.4f, 0.0f);
    glVertex3f(0.6f, 0.0f, 0.0f);
    glVertex3f(0.8f, -0.2f, 0.0f);
    glEnd();

    // GL_QUADS
    glColor3f(1.0f, 0.0f, 1.0f); // Magenta
    glBegin(GL_QUADS);
    glVertex3f(-0.8f, -0.4f, 0.0f);
    glVertex3f(-0.6f, -0.4f, 0.0f);
    glVertex3f(-0.6f, -0.6f, 0.0f);
    glVertex3f(-0.8f, -0.6f, 0.0f);
    glEnd();

    // GL_QUAD_STRIP
    glColor3f(0.0f, 1.0f, 1.0f); // Cyan
    glBegin(GL_QUAD_STRIP);
    glVertex3f(-0.4f, -0.4f, 0.0f);
    glVertex3f(-0.2f, -0.4f, 0.0f);
    glVertex3f(-0.4f, -0.6f, 0.0f);
    glVertex3f(-0.2f, -0.6f, 0.0f);
    glVertex3f(-0.4f, -0.8f, 0.0f);
    glVertex3f(-0.2f, -0.8f, 0.0f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Primitif OpenGL");
    glutDisplayFunc(display);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Latar belakang hitam
    glutMainLoop();
    return 0;
}
