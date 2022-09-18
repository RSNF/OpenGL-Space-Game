boundingBox boxBico = {
    {-1.0, -12.0},
    {1.0, -12.0},
    {-1.0, -14.0},
    {1.0, -14.0}
};

boundingBox boxCorpo = {
    {-1.0, -14.0},
    {1.0, -14.0},
    {-1.0, -19.0},
    {1.0, -19.0}
};

boundingBox boxAsaEsquerda = {
    {-2.5, -17.0},
    {-1.0, -17.0},
    {-2.5, -19.0},
    {-1.0, -19.0}
};

boundingBox boxAsaDireita = {
    {2.5, -17.0},
    {1.0, -17.0},
    {2.5, -19.0},
    {1.0, -19.0}
};

coordinate bico[3] = {
    {-1.0, -14.0},
    {0.0, -12.0},
    {1.0, -14.0}
};

coordinate corpo[4] = {
    {-1.0, -19.0},
    {1.0, -19.0},
    {1.0, -14.0},
    {-1.0, -14.0}
};

coordinate asaEsquerda[3] = {
    {-1.0, -19.0},
    {-2.5, -19.0},
    {-1.0, -17.0}
};

coordinate asaDireita[3] = {
    {1.0, -19.0},
    {2.5, -19.0},
    {1.0, -17.0}
};

void Bico();
void Corpo();
void AsaEsquerda();
void AsaDireita();

void drawFoguete() {

    glPushMatrix();

    Bico();
    Corpo();
    AsaEsquerda();
    AsaDireita();

    glPopMatrix();
}

void Bico() {
    glBegin(GL_TRIANGLES);
        // glColor3f(0,1,0);
        glVertex2f(bico[0].x, bico[0].y);
        glVertex2f(bico[1].x, bico[1].y);
        glVertex2f(bico[2].x, bico[2].y);
    glEnd();
}

void Corpo() {
    glBegin(GL_QUADS);
        // glColor3f(0,0,1);
        glVertex2f(corpo[0].x, corpo[0].y);
        glVertex2f(corpo[1].x, corpo[1].y);
        glVertex2f(corpo[2].x, corpo[2].y);
        glVertex2f(corpo[3].x, corpo[3].y);
    glEnd();
}

void AsaEsquerda() {
    glBegin(GL_TRIANGLES);
        // glColor3f(1,0,0);
        glVertex2f(asaEsquerda[0].x, asaEsquerda[0].y);
        glVertex2f(asaEsquerda[1].x, asaEsquerda[1].y);
        glVertex2f(asaEsquerda[2].x, asaEsquerda[2].y);
    glEnd();
}

void AsaDireita() {
    glBegin(GL_TRIANGLES);
        // glColor3f(1,0,0);
        glVertex2f(asaDireita[0].x, asaDireita[0].y);
        glVertex2f(asaDireita[1].x, asaDireita[1].y);
        glVertex2f(asaDireita[2].x, asaDireita[2].y);
    glEnd();
}