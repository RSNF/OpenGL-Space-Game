/*
 * Definição da função de colisão e da função que desenha os bounding boxes
 * A função checkCollision vai estar checando se os eixos X e Y ambos se sobrepõe
 * Ao acontecer a sobreposição de ambos aconteceu a colisão, esse tipo de colisão é chamado de AABB
 * Caso aconteça a sobreposição de ambos, isso quer dizer que eixoX e eixoY são true, o que faz a condição logo abaixo verdadeira
 * A variável isColidindo é definida em foguete.h, mas é usada aqui para definir que está acontecendo a colisão e depois é usada em movement.h
 * A função também devolve a operação lógica E das duas variáveis que será usada também em movement.h para checar se o foguete colidiu com o planeta
 */

bool checkCollision(boundingBox boxOne, boundingBox boxTwo) {

    bool eixoX;
    bool eixoY;

    eixoX = boxOne.bottomLeft.x + (boxOne.bottomRight.x - boxOne.bottomLeft.x) > boxTwo.bottomLeft.x && boxTwo.bottomLeft.x + (boxTwo.bottomRight.x - boxTwo.bottomLeft.x) > boxOne.bottomLeft.x;
    eixoY = boxOne.bottomLeft.y + (boxOne.topLeft.y - boxOne.bottomLeft.y) > boxTwo.bottomLeft.y && boxTwo.bottomLeft.y + (boxTwo.topLeft.y - boxTwo.bottomLeft.y) > boxOne.bottomLeft.y;

    if (eixoX && eixoY) {
        isColidindo = true;
    }

    return eixoX && eixoY;
}

void drawWireBox() {

    glPushMatrix();

    glColor3f(1, 0, 0);

    for (int i = 0; i < 10; i++) {

        glBegin(GL_LINE_LOOP);
            glVertex2f(boxStars[i].topLeft.x, boxStars[i].topLeft.y);
            glVertex2f(boxStars[i].topRight.x, boxStars[i].topRight.y);
            glVertex2f(boxStars[i].bottomRight.x, boxStars[i].bottomRight.y);
            glVertex2f(boxStars[i].bottomLeft.x, boxStars[i].bottomLeft.y);
        glEnd();
    }

    glBegin(GL_LINE_LOOP);
        glVertex2f(boxPlaneta.topLeft.x, boxPlaneta.topLeft.y);
        glVertex2f(boxPlaneta.topRight.x, boxPlaneta.topRight.y);
        glVertex2f(boxPlaneta.bottomRight.x, boxPlaneta.bottomRight.y);
        glVertex2f(boxPlaneta.bottomLeft.x, boxPlaneta.bottomLeft.y);
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
}