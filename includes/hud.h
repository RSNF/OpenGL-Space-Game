coordinate quadHP[4] = {
    {-2.0, 24},
    {-1.0, 24},
    {-1.0, 23},
    {-2.0, 23}
};

void drawHUD() {

    if (vidas == 1) {
        glBegin(GL_QUADS);
            glVertex2f(quadHP[0].x + 1.5, quadHP[0].y);
            glVertex2f(quadHP[1].x + 1.5, quadHP[1].y);
            glVertex2f(quadHP[2].x + 1.5, quadHP[2].y);
            glVertex2f(quadHP[3].x + 1.5, quadHP[3].y);
        glEnd();
    }

    if (vidas == 2) {
        glBegin(GL_QUADS);
            glVertex2f(quadHP[0].x + 0.5, quadHP[0].y);
            glVertex2f(quadHP[1].x + 0.5, quadHP[1].y);
            glVertex2f(quadHP[2].x + 0.5, quadHP[2].y);
            glVertex2f(quadHP[3].x + 0.5, quadHP[3].y);
        glEnd();

        glBegin(GL_QUADS);
            glVertex2f(quadHP[0].x + 2.5, quadHP[0].y);
            glVertex2f(quadHP[1].x + 2.5, quadHP[1].y);
            glVertex2f(quadHP[2].x + 2.5, quadHP[2].y);
            glVertex2f(quadHP[3].x + 2.5, quadHP[3].y);
        glEnd();
    }

    if (vidas == 3) {
        glBegin(GL_QUADS);
            glVertex2f(quadHP[0].x, quadHP[0].y);
            glVertex2f(quadHP[1].x, quadHP[1].y);
            glVertex2f(quadHP[2].x, quadHP[2].y);
            glVertex2f(quadHP[3].x, quadHP[3].y);
        glEnd();
        
        glBegin(GL_QUADS);
            glVertex2f(quadHP[0].x + 1.5, quadHP[0].y);
            glVertex2f(quadHP[1].x + 1.5, quadHP[1].y);
            glVertex2f(quadHP[2].x + 1.5, quadHP[2].y);
            glVertex2f(quadHP[3].x + 1.5, quadHP[3].y);
        glEnd();

        glBegin(GL_QUADS);
            glVertex2f(quadHP[0].x + 3.0, quadHP[0].y);
            glVertex2f(quadHP[1].x + 3.0, quadHP[1].y);
            glVertex2f(quadHP[2].x + 3.0, quadHP[2].y);
            glVertex2f(quadHP[3].x + 3.0, quadHP[3].y);
        glEnd();
    }
}

void drawGameOver() {

    string s = "Voce Perdeu...";

    glColor3f(1, 1, 1);

    glBegin(GL_QUADS);
        glVertex2f(-10, 2.5);
        glVertex2f(10, 2.5);
        glVertex2f(10, -2.5);
        glVertex2f(-10, -2.5);
    glEnd();

    glColor3f(1, 0, 0);

    glRasterPos2i(-s.size()/2 + 2, -0.25);

    for (string::iterator i = s.begin(); i != s.end(); i++) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *i);
    }
}

void drawWin() {

    string s = "Voce Ganhou!";

    glColor3f(1, 1, 1);

    glBegin(GL_QUADS);
        glVertex2f(-10, 2.5);
        glVertex2f(10, 2.5);
        glVertex2f(10, -2.5);
        glVertex2f(-10, -2.5);
    glEnd();

    glColor3f(1, 0, 0);

    glRasterPos2i(-s.size()/2 + 2, -0.25);

    for (string::iterator i = s.begin(); i != s.end(); i++) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *i);
    }
}