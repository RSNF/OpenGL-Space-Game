boundingBox boxBico = {
    {-1.0, -32.0},
    {1.0, -32.0},
    {-1.0, -34.0},
    {1.0, -34.0}
};

boundingBox boxCorpo = {
    {-1.0, -34.0},
    {1.0, -34.0},
    {-1.0, -39.0},
    {1.0, -39.0}
};

boundingBox boxAsaEsquerda = {
    {-2.5, -37.0},
    {-1.0, -37.0},
    {-2.5, -39.0},
    {-1.0, -39.0}
};

boundingBox boxAsaDireita = {
    {1.0, -37.0},
    {2.5, -37.0},
    {1.0, -39.0},
    {2.5, -39.0}
};

coordinate bico[3] = {
    {-1.0, -34.0},
    {0.0, -32.0},
    {1.0, -34.0}
};

coordinate corpo[4] = {
    {-1.0, -39.0},
    {1.0, -39.0},
    {1.0, -34.0},
    {-1.0, -34.0}
};

coordinate asaEsquerda[3] = {
    {-1.0, -39.0},
    {-2.5, -39.0},
    {-1.0, -37.0}
};

coordinate asaDireita[3] = {
    {1.0, -39.0},
    {2.5, -39.0},
    {1.0, -37.0}
};

rgbValues coresFoguete[4] = {
    {0, 1, 0},
    {0, 0, 1},
    {1, 0, 0},
    {1, 0, 0}
};

int vidas = 3;
bool isColidindo = false;
bool noPlaneta = false;

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
        glColor3f(coresFoguete[0].r, coresFoguete[0].g, coresFoguete[0].b);
        glVertex2f(bico[0].x, bico[0].y);
        glVertex2f(bico[1].x, bico[1].y);
        glVertex2f(bico[2].x, bico[2].y);
    glEnd();
}

void Corpo() {
    glBegin(GL_QUADS);
        glColor3f(coresFoguete[1].r, coresFoguete[1].g, coresFoguete[1].b);
        glVertex2f(corpo[0].x, corpo[0].y);
        glVertex2f(corpo[1].x, corpo[1].y);
        glVertex2f(corpo[2].x, corpo[2].y);
        glVertex2f(corpo[3].x, corpo[3].y);
    glEnd();
}

void AsaEsquerda() {
    glBegin(GL_TRIANGLES);
        glColor3f(coresFoguete[2].r, coresFoguete[2].g, coresFoguete[2].b);
        glVertex2f(asaEsquerda[0].x, asaEsquerda[0].y);
        glVertex2f(asaEsquerda[1].x, asaEsquerda[1].y);
        glVertex2f(asaEsquerda[2].x, asaEsquerda[2].y);
    glEnd();
}

void AsaDireita() {
    glBegin(GL_TRIANGLES);
        glColor3f(coresFoguete[3].r, coresFoguete[3].g, coresFoguete[3].b);
        glVertex2f(asaDireita[0].x, asaDireita[0].y);
        glVertex2f(asaDireita[1].x, asaDireita[1].y);
        glVertex2f(asaDireita[2].x, asaDireita[2].y);
    glEnd();
}

void restartPosition() {

    bico[0] = {-1.0, -34.0};
    bico[1] = {0.0, -32.0};
    bico[2] = {1.0, -34.0};

    corpo[0] = {-1.0, -39.0};
    corpo[1] = {1.0, -39.0};
    corpo[2] = {1.0, -34.0};
    corpo[3] = {-1.0, -34.0};

    asaEsquerda[0] = {-1.0, -39.0};
    asaEsquerda[1] = {-2.5, -39.0};
    asaEsquerda[2] = {-1.0, -37.0};

    asaDireita[0] = {1.0, -39.0};
    asaDireita[1] = {2.5, -39.0};
    asaDireita[2] = {1.0, -37.0};

    boxBico.topLeft = {-1.0, -32.0};
    boxBico.topRight = {1.0, -32.0};
    boxBico.bottomLeft = {-1.0, -34.0};
    boxBico.bottomRight = {1.0, -34.0};

    boxCorpo.topLeft = {-1.0, -34.0};
    boxCorpo.topRight = {1.0, -34.0};
    boxCorpo.bottomLeft = {-1.0, -39.0};
    boxCorpo.bottomRight = {1.0, -39.0};

    boxAsaEsquerda.topLeft = {-2.5, -37.0};
    boxAsaEsquerda.topRight = {-1.0, -37.0};
    boxAsaEsquerda.bottomLeft = {-2.5, -39.0};
    boxAsaEsquerda.bottomRight = {-1.0, -39.0};

    boxAsaDireita.topLeft = {1.0, -37.0};
    boxAsaDireita.topRight = {2.5, -37.0};
    boxAsaDireita.bottomLeft = {1.0, -39.0};
    boxAsaDireita.bottomRight = {2.5, -39.0};
}