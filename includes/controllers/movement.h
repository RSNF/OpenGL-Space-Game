void moveY(float y) {
    corpo[0].y+=y;
    corpo[1].y+=y;
    corpo[2].y+=y;
    corpo[3].y+=y;

    boxCorpo.bottomRight.y+=y;
    boxCorpo.bottomLeft.y+=y;
    boxCorpo.topRight.y+=y;
    boxCorpo.topLeft.y+=y;

    boxBico.bottomLeft.y+=y;
    boxBico.bottomRight.y+=y;
    boxBico.topLeft.y+=y;
    boxBico.topRight.y+=y;

    boxAsaEsquerda.bottomLeft.y+=y;
    boxAsaEsquerda.bottomRight.y+=y;
    boxAsaEsquerda.topLeft.y+=y;
    boxAsaEsquerda.topRight.y+=y;

    boxAsaDireita.bottomLeft.y+=y;
    boxAsaDireita.bottomRight.y+=y;
    boxAsaDireita.topLeft.y+=y;
    boxAsaDireita.topRight.y+=y;

    for (int i = 0; i < 3; i++) {
        bico[i].y = bico[i].y + y;
        asaEsquerda[i].y = asaEsquerda[i].y + y;
        asaDireita[i].y = asaDireita[i].y + y;
    }
}

void moveX(float x) {
    corpo[0].x+=x;
    corpo[1].x+=x;
    corpo[2].x+=x;
    corpo[3].x+=x;

    boxCorpo.bottomLeft.x+=x;
    boxCorpo.bottomRight.x+=x;
    boxCorpo.topRight.x+=x;
    boxCorpo.topLeft.x+=x;

    boxBico.bottomLeft.x+=x;
    boxBico.bottomRight.x+=x;
    boxBico.topLeft.x+=x;
    boxBico.topRight.x+=x;

    boxAsaEsquerda.bottomLeft.x+=x;
    boxAsaEsquerda.bottomRight.x+=x;
    boxAsaEsquerda.topLeft.x+=x;
    boxAsaEsquerda.topRight.x+=x;

    boxAsaDireita.bottomLeft.x+=x;
    boxAsaDireita.bottomRight.x+=x;
    boxAsaDireita.topLeft.x+=x;
    boxAsaDireita.topRight.x+=x;

    for (int i = 0; i < 3; i++) {
        bico[i].x = bico[i].x + x;
        asaEsquerda[i].x = asaEsquerda[i].x + x;
        asaDireita[i].x = asaDireita[i].x + x;
    }
}

void keyEvent(unsigned char key, int x, int y) {
    switch (key) {
        case 'w':
            moveY(0.5);
            break;
        case 's':
            moveY(-0.5);
            break;
        case 'a':
            moveX(-0.5);
            break;
        case 'd':
            moveX(0.5);
            break;
        default:
            break;
    }

    glutPostRedisplay();
}

void keyEventSpecial(int key, int x, int y) {
    switch (key) {
        case GLUT_KEY_UP:
            moveY(0.5);
            break;
        case GLUT_KEY_DOWN:
            moveY(-0.5);
            break;
        case GLUT_KEY_LEFT:
            moveX(-0.5);
            break;
        case GLUT_KEY_RIGHT:
            moveX(0.5);
            break;
        default:
            break;
    }

    glutPostRedisplay();
}