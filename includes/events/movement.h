/*
 * Declaração de funções de movimento e eventos 
 * As funções moveY e moveX movem todos os bounding boxes e foguete incrementando ou decrementando dos vertices y ou x
 * Essas duas funções são chamadas apenas se as teclas definidas no switch forem apertadas
 * Caso o bounding box do foguete esteja batendo em alguma das bordas da tela a função que vai para respectiva direção não será chamada
 * O evento de movimento também checa se houve colisão (dano) ou se o foguete atingiu o objetivo (planeta)
 * Isso é feito a partir de operações lógica usando as variáveis isColidindo e noPlaneta
 */

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

float moveStep = 1.0;

void keyEvent(unsigned char key, int x, int y) {

    switch (key) {
        case 'w':
            if (boxBico.topLeft.y < 50) {
                moveY(moveStep);
            }
            break;
        case 's':
            if (boxCorpo.bottomLeft.y > -50) {
                moveY(-moveStep);
            }
            break;
        case 'a':
            if (boxAsaEsquerda.bottomLeft.x > -50) {
                moveX(-moveStep);
            }
            break;
        case 'd':
            if (boxAsaDireita.bottomRight.x < 50) {
                moveX(moveStep);
            }
            break;
        default:
            return;
    }

    for (int i = 0; i < 10; i++) {
        isColidindo = false;
        checkCollision(boxStars[i], boxBico);
        checkCollision(boxStars[i], boxCorpo);
        checkCollision(boxStars[i], boxAsaEsquerda);
        checkCollision(boxStars[i], boxAsaDireita);

        if (isColidindo) {
            vidas--;

            restartPosition();

            break;
        } 
    }

    noPlaneta = noPlaneta || checkCollision(boxPlaneta, boxBico);
    noPlaneta = noPlaneta || checkCollision(boxPlaneta, boxCorpo);
    noPlaneta = noPlaneta || checkCollision(boxPlaneta, boxAsaEsquerda);
    noPlaneta = noPlaneta || checkCollision(boxPlaneta, boxAsaDireita);

    glutPostRedisplay();
}

void keyEventSpecial(int key, int x, int y) {

    if (vidas == 0) {
        return;
    }

    switch (key) {
        case GLUT_KEY_UP:
            if (boxBico.topLeft.y < 50) {
                moveY(moveStep);
            }
            break;
        case GLUT_KEY_DOWN:
            if (boxCorpo.bottomLeft.y > -50) {
                moveY(-moveStep);
            }
            break;
        case GLUT_KEY_LEFT:
            if (boxAsaEsquerda.bottomLeft.x > -50) {
                moveX(-moveStep);
            }
            break;
        case GLUT_KEY_RIGHT:
            if (boxAsaDireita.bottomRight.x < 50) {
                moveX(moveStep);
            }
            break;
        default:
            return;
    }

    for (int i = 0; i < 10; i++) {
        isColidindo = false;
        checkCollision(boxStars[i], boxBico);
        checkCollision(boxStars[i], boxCorpo);
        checkCollision(boxStars[i], boxAsaEsquerda);
        checkCollision(boxStars[i], boxAsaDireita);

        if (isColidindo) {
            vidas--;

            restartPosition();
            
            break;
        } 
    }

    noPlaneta = noPlaneta || checkCollision(boxPlaneta, boxBico);
    noPlaneta = noPlaneta || checkCollision(boxPlaneta, boxCorpo);
    noPlaneta = noPlaneta || checkCollision(boxPlaneta, boxAsaEsquerda);
    noPlaneta = noPlaneta || checkCollision(boxPlaneta, boxAsaDireita);

    glutPostRedisplay();
}