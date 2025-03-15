#include <GL/glut.h>
static int elbow = 0, hand = 0, finger1 = 0, finger2 = 0, finger3 = 0, finger4 = 0, finger5 = 0;

void init(void) {
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_FLAT);
}

void display(void) {
    glClear (GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    
    // Siku
    glTranslatef (0.0, 0.0, 0.0);
    glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0);
    glTranslatef (1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.75, 0.4);
    glutWireCube (1.0);
    glPopMatrix();
    
    // Telapak Tangan
    glTranslatef (1.0, 0.0, 0.0);
    glRotatef ((GLfloat) hand, 0.0, 0.0, 1.0);
    glTranslatef (0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.0, 1.0, 0.4);
    glutWireCube (1.0);
    glPopMatrix();
    
    // Jari-Jari
    
    // Jari1 (Ibu jari)
    glPushMatrix();
    glTranslatef (0.2, 0.65, 0.2);
    glRotatef ((GLfloat) finger1, 1.0, 1.0, 0.0);
    glTranslatef (0.2, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.7, 0.25, 0.2);
    glutWireCube (1.0);
    glPopMatrix();
    glPopMatrix();
    
    // Jari2
    glPushMatrix();
    glTranslatef (0.65, 0.4, 0.0);
    glRotatef ((GLfloat) finger2, 0.0, 1.0, 0.0);
    glTranslatef (0.2, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.8, 0.25, 0.2);
    glutWireCube (1.0);
    glPopMatrix();
    glPopMatrix();
    
    // Jari3
    glPushMatrix();
    glTranslatef (0.65, 0.125, 0.0);
    glRotatef ((GLfloat) finger3, 0.0, 1.0, 0.0);
    glTranslatef (0.2, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.8, 0.25, 0.2);
    glutWireCube (1.0);
    glPopMatrix();
    glPopMatrix();
    
    // Jari4
    glPushMatrix();
    glTranslatef (0.65, -0.125, 0.0);
    glRotatef ((GLfloat) finger4, 0.0, 1.0, 0.0);
    glTranslatef (0.2, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.8, 0.25, 0.2);
    glutWireCube (1.0);
    glPopMatrix();
    glPopMatrix();
    
    // Jari5
    glPushMatrix();
    glTranslatef (0.65, -0.4, 0.0);
    glRotatef ((GLfloat) finger5, 0.0, 1.0, 0.0);
    glTranslatef (0.2, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.8, 0.25, 0.2);
    glutWireCube (1.0);
    glPopMatrix();
    glPopMatrix();
    
    glPopMatrix();
    glutSwapBuffers();
}

void reshape (int w, int h) {
    glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ();
    gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef (0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 'e': elbow = (elbow + 5) % 360; glutPostRedisplay(); break;
        case 'E': elbow = (elbow - 5) % 360; glutPostRedisplay(); break;
        case 'h': hand = (hand + 5) % 360; glutPostRedisplay(); break;
        case 'H': hand = (hand - 5) % 360; glutPostRedisplay(); break;
        case '1': finger1 = (finger1 + 5) % 360; glutPostRedisplay(); break;
        case '!': finger1 = (finger1 - 5) % 360; glutPostRedisplay(); break;
        case '2': finger2 = (finger2 + 5) % 360; glutPostRedisplay(); break;
        case '@': finger2 = (finger2 - 5) % 360; glutPostRedisplay(); break;
        case '3': finger3 = (finger3 + 5) % 360; glutPostRedisplay(); break;
        case '#': finger3 = (finger3 - 5) % 360; glutPostRedisplay(); break;
        case '4': finger4 = (finger4 + 5) % 360; glutPostRedisplay(); break;
        case '$': finger4 = (finger4 - 5) % 360; glutPostRedisplay(); break;
        case '5': finger5 = (finger5 + 5) % 360; glutPostRedisplay(); break;
        case '%': finger5 = (finger5 - 5) % 360; glutPostRedisplay(); break;
        case 27: exit(0); break;
        default: break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (700, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow (argv[0]);
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
