void mouseEvent(int button, int state, int x, int y) {

    if (button == GLUT_LEFT_BUTTON) {
        if (state == GLUT_DOWN) {

            float r;
            float g;
            float b;

            for (int i = 0; i < 3; i++) {

                r = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
                g = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
                b = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

                coresFoguete[i].r = r;
                coresFoguete[i].g = g;
                coresFoguete[i].b = b;
            }

            coresFoguete[3].r = r;
            coresFoguete[3].g = g;
            coresFoguete[3].b = b;

            r = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
            g = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
            b = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

            coresEstrela.r = r;
            coresEstrela.g = g;
            coresEstrela.b = b;
        }
    }

    glutPostRedisplay();
}