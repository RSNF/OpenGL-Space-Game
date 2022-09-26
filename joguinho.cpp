/*
 * Universidade Estadual do Sudoeste da Bahia - UESB
 * 
 * Discentes:   Patrick Mota Pinto Silva
 *              Raimundo Santana Novaes Filho
 * 
 * Doscente:    Elienai Bittencourt Batista Mota
 */

using namespace std;

#include <iostream>
#include <stdlib.h>
#include <GL/glut.h>
#include "includes/types.h"
#include "includes/star.h"
#include "includes/foguete.h"
#include "includes/planeta.h"
#include "includes/hud.h"
#include "includes/collisions.h"
#include "includes/events/movement.h"
#include "includes/events/recolour.h"

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
    glutMouseFunc(mouseEvent);

    glutMainLoop();

    return 0;
}

void init() {

    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-50.0, 50.0, -50.0, 50.0);
    glMatrixMode(GL_MODELVIEW);
}

void drawGame() {

    glClear(GL_COLOR_BUFFER_BIT);
    
    if (vidas == 0) {
        drawGameOver();
    } else if (!noPlaneta) {
        drawStars();
        drawFoguete();
        drawHUD();
        drawWireBox();
        drawCircle();
    } else {
        drawWin();
    }

    glFlush();
}