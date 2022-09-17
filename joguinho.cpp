#include <stdlib.h>
#include <GL/glut.h>
#include "includes/types.h"
#include "includes/Star.h"
#include "includes/Foguete.h"
#include "includes/controllers/movement.h"

void init();
void drawGame();

int main(int argc, char **argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Desafio dos obstaculos");
    init();

    glutDisplayFunc(drawGame);
    glutKeyboardFunc(keyEvent);
    glutSpecialFunc(keyEventSpecial);

    glutMainLoop();

    return 0;
}

void init() {

    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-20.0, 20.0, -20.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
}

void drawGame() {

    glClear(GL_COLOR_BUFFER_BIT);
    Star().drawStar();
    Foguete().drawFoguete();
    glFlush();
}