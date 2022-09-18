#include <stdlib.h>
#include <GL/glut.h>
#include "includes/types.h"
#include "includes/star.h"
#include "includes/foguete.h"
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
    gluOrtho2D(-25.0, 25.0, -25.0, 25.0);
    glMatrixMode(GL_MODELVIEW);
}

void drawGame() {

    glClear(GL_COLOR_BUFFER_BIT);
    drawStar();
    drawFoguete();

    // Desenha o Bounding Box
    glPushMatrix();

    glColor3f(1, 0, 0);

    glBegin(GL_LINE_LOOP);
        glVertex2f(box.topLeft.x, box.topLeft.y);
        glVertex2f(box.topRight.x, box.topRight.y);
        glVertex2f(box.bottomRight.x, box.bottomRight.y);
        glVertex2f(box.bottomLeft.x, box.bottomLeft.y);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glVertex2f(boxBico.topLeft.x, boxBico.topLeft.y);
        glVertex2f(boxBico.topRight.x, boxBico.topRight.y);
        glVertex2f(boxBico.bottomRight.x, boxBico.bottomRight.y);
        glVertex2f(boxBico.bottomLeft.x, boxBico.bottomLeft.y);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glVertex2f(boxCorpo.topLeft.x, boxCorpo.topLeft.y);
        glVertex2f(boxCorpo.topRight.x, boxCorpo.topRight.y);
        glVertex2f(boxCorpo.bottomRight.x, boxCorpo.bottomRight.y);
        glVertex2f(boxCorpo.bottomLeft.x, boxCorpo.bottomLeft.y);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glVertex2f(boxAsaEsquerda.topLeft.x, boxAsaEsquerda.topLeft.y);
        glVertex2f(boxAsaEsquerda.topRight.x, boxAsaEsquerda.topRight.y);
        glVertex2f(boxAsaEsquerda.bottomRight.x, boxAsaEsquerda.bottomRight.y);
        glVertex2f(boxAsaEsquerda.bottomLeft.x, boxAsaEsquerda.bottomLeft.y);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glVertex2f(boxAsaDireita.topLeft.x, boxAsaDireita.topLeft.y);
        glVertex2f(boxAsaDireita.topRight.x, boxAsaDireita.topRight.y);
        glVertex2f(boxAsaDireita.bottomRight.x, boxAsaDireita.bottomRight.y);
        glVertex2f(boxAsaDireita.bottomLeft.x, boxAsaDireita.bottomLeft.y);
    glEnd();

    glPopMatrix();
    // Desenha o Bounding Box - FIM

    glFlush();
}