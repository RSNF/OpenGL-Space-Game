// bool checkCollisions() {
//     bool collisionX = boxCorpo.topLeft.x
// }

void drawWireBox() {

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
}