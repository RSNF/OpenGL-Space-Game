bool checkCollisions() {

    bool eixoX;
    bool eixoY;

    for (int i = 0; i < 10; i++) {
        eixoX = boxStars[i].bottomLeft.x + (boxStars[i].bottomRight.x - boxStars[i].bottomLeft.x) > boxBico.bottomLeft.x && boxBico.bottomLeft.x + (boxBico.bottomRight.x - boxBico.bottomLeft.x) > boxStars[i].bottomLeft.x;
        eixoY = boxStars[i].bottomLeft.y + (boxStars[i].topLeft.y - boxStars[i].bottomLeft.y) > boxBico.bottomLeft.y && boxBico.bottomLeft.y + (boxBico.topLeft.y - boxBico.bottomLeft.y) > boxStars[i].bottomLeft.y;
        if (eixoX && eixoY) {
            return eixoX && eixoY;
        }
    }

    for (int i = 0; i < 10; i++) {
        eixoX = boxStars[i].bottomLeft.x + (boxStars[i].bottomRight.x - boxStars[i].bottomLeft.x) > boxCorpo.bottomLeft.x && boxCorpo.bottomLeft.x + (boxCorpo.bottomRight.x - boxCorpo.bottomLeft.x) > boxStars[i].bottomLeft.x;
        eixoY = boxStars[i].bottomLeft.y + (boxStars[i].topLeft.y - boxStars[i].bottomLeft.y) > boxCorpo.bottomLeft.y && boxCorpo.bottomLeft.y + (boxCorpo.topLeft.y - boxCorpo.bottomLeft.y) > boxStars[i].bottomLeft.y;
        if (eixoX && eixoY) {
            return eixoX && eixoY;
        }
    }

    for (int i = 0; i < 10; i++) {
        eixoX = boxStars[i].bottomLeft.x + (boxStars[i].bottomRight.x - boxStars[i].bottomLeft.x) > boxAsaEsquerda.bottomLeft.x && boxAsaEsquerda.bottomLeft.x + (boxAsaEsquerda.bottomRight.x - boxAsaEsquerda.bottomLeft.x) > boxStars[i].bottomLeft.x;
        eixoY = boxStars[i].bottomLeft.y + (boxStars[i].topLeft.y - boxStars[i].bottomLeft.y) > boxAsaEsquerda.bottomLeft.y && boxAsaEsquerda.bottomLeft.y + (boxAsaEsquerda.topLeft.y - boxAsaEsquerda.bottomLeft.y) > boxStars[i].bottomLeft.y;
        if (eixoX && eixoY) {
            return eixoX && eixoY;
        }
    }

    for (int i = 0; i < 10; i++) {
        eixoX = boxStars[i].bottomLeft.x + (boxStars[i].bottomRight.x - boxStars[i].bottomLeft.x) > boxAsaDireita.bottomLeft.x && boxAsaDireita.bottomLeft.x + (boxAsaDireita.bottomRight.x - boxAsaDireita.bottomLeft.x) > boxStars[i].bottomLeft.x;
        eixoY = boxStars[i].bottomLeft.y + (boxStars[i].topLeft.y - boxStars[i].bottomLeft.y) > boxAsaDireita.bottomLeft.y && boxAsaDireita.bottomLeft.y + (boxAsaDireita.topLeft.y - boxAsaDireita.bottomLeft.y) > boxStars[i].bottomLeft.y;
        if (eixoX && eixoY) {
            return eixoX && eixoY;
        }
    }

    return eixoX && eixoY;
}

bool checkCollisionPlaneta() {

    bool eixoX;
    bool eixoY;

    eixoX = boxPlaneta.bottomLeft.x + (boxPlaneta.bottomRight.x - boxPlaneta.bottomLeft.x) > boxBico.bottomLeft.x && boxBico.bottomLeft.x + (boxBico.bottomRight.x - boxBico.bottomLeft.x) > boxPlaneta.bottomLeft.x;
    eixoY = boxPlaneta.bottomLeft.y + (boxPlaneta.topLeft.y - boxPlaneta.bottomLeft.y) > boxBico.bottomLeft.y && boxBico.bottomLeft.y + (boxBico.topLeft.y - boxBico.bottomLeft.y) > boxPlaneta.bottomLeft.y;

    if (eixoX && eixoY) {
        return true;
    }

    eixoX = boxPlaneta.bottomLeft.x + (boxPlaneta.bottomRight.x - boxPlaneta.bottomLeft.x) > boxCorpo.bottomLeft.x && boxCorpo.bottomLeft.x + (boxCorpo.bottomRight.x - boxCorpo.bottomLeft.x) > boxPlaneta.bottomLeft.x;
    eixoY = boxPlaneta.bottomLeft.y + (boxPlaneta.topLeft.y - boxPlaneta.bottomLeft.y) > boxCorpo.bottomLeft.y && boxCorpo.bottomLeft.y + (boxCorpo.topLeft.y - boxCorpo.bottomLeft.y) > boxPlaneta.bottomLeft.y;

    if (eixoX && eixoY) {
        return true;
    }

    eixoX = boxPlaneta.bottomLeft.x + (boxPlaneta.bottomRight.x - boxPlaneta.bottomLeft.x) > boxAsaEsquerda.bottomLeft.x && boxAsaEsquerda.bottomLeft.x + (boxAsaEsquerda.bottomRight.x - boxAsaEsquerda.bottomLeft.x) > boxPlaneta.bottomLeft.x;
    eixoY = boxPlaneta.bottomLeft.y + (boxPlaneta.topLeft.y - boxPlaneta.bottomLeft.y) > boxAsaEsquerda.bottomLeft.y && boxAsaEsquerda.bottomLeft.y + (boxAsaEsquerda.topLeft.y - boxAsaEsquerda.bottomLeft.y) > boxPlaneta.bottomLeft.y;

    if (eixoX && eixoY) {
        return true;
    }

    eixoX = boxPlaneta.bottomLeft.x + (boxPlaneta.bottomRight.x - boxPlaneta.bottomLeft.x) > boxAsaDireita.bottomLeft.x && boxAsaDireita.bottomLeft.x + (boxAsaDireita.bottomRight.x - boxAsaDireita.bottomLeft.x) > boxPlaneta.bottomLeft.x;
    eixoY = boxPlaneta.bottomLeft.y + (boxPlaneta.topLeft.y - boxPlaneta.bottomLeft.y) > boxAsaDireita.bottomLeft.y && boxAsaDireita.bottomLeft.y + (boxAsaDireita.topLeft.y - boxAsaDireita.bottomLeft.y) > boxPlaneta.bottomLeft.y;

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