#include <stdlib.h>
#include <GL/glut.h>
#include "includes/types.h"
#include "includes/star.h"
#include "includes/foguete.h"
#include "includes/controllers/movement.h"
#include "includes/collisions.h"

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
    gluOrtho2D(-25.0, 25.0, -25.0, 25.0);
    glMatrixMode(GL_MODELVIEW);
}

void drawGame() {

    glClear(GL_COLOR_BUFFER_BIT);
    drawStar();
    drawFoguete();
    drawWireBox();

    glFlush();
}