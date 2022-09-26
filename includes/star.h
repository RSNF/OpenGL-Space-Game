#include <random>
#include <math.h>

boundingBox boxStars[10];

coordinate points[30] = {
    {0, 1},
    {-0.33, 0},
    {0, -0.5},
    {0, 1},
    {0.33, 0},
    {0, -0.5},
    {1.5, 0},
    {0.33, 0},
    {0, -0.5},
    {1.5, 0},
    {0.57, -0.73},
    {0, -0.5},
    {1, -2},
    {0.57, -0.73},
    {0, -0.5},
    {1, -2},
    {0, -1.2},
    {0, -0.5},
    {-1, -2},
    {0, -1.2},
    {0, -0.5},
    {-1, -2},
    {-0.57, -0.73},
    {0, -0.5},
    {-1.5, 0},
    {-0.57, -0.73},
    {0, -0.5},
    {-1.5, 0},
    {-0.33, 0},
    {0, -0.5}
};

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_real_distribution<float> distrib(0.0, 1.0);
rgbValues coresEstrela = {distrib(gen), distrib(gen), distrib(gen)};

coordinate posEstrelas[10];

bool flagPos = false;

void drawStar(float x, float y) {


    for (int i = 0; i < 30; i = i + 3) {

        glPushMatrix();

        glColor3f(distrib(gen), distrib(gen), distrib(gen));

        glBegin(GL_TRIANGLES);
            glVertex2f(points[i].x + x, points[i].y + y);
            glVertex2f(points[i+1].x + x, points[i+1].y + y);
            glVertex2f(points[i+2].x + x, points[i+2].y + y);
        glEnd();
        
        glPopMatrix();
    }
}

void drawStars() {

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribX(-45, 45);
    std::uniform_int_distribution<int> distribY(-30, 30);

    int x;
    int y;

    if (!flagPos) {

        for (int i = 0; i < 10; i++) {

            x = distribX(gen);
            y = distribY(gen);

            posEstrelas[i].x = x;
            posEstrelas[i].y = y;

            boxStars[i].topLeft = {-1.5f + x, 1.0f + y};
            boxStars[i].topRight = {1.5f + x, 1.0f + y};
            boxStars[i].bottomLeft = {-1.5f + x, -2.0f + y};
            boxStars[i].bottomRight = {1.5f + x, -2.0f + y};

            drawStar(x, y);
        }

        flagPos = true;
    } else {

        for (int i = 0; i < 10; i++) {
            drawStar(posEstrelas[i].x, posEstrelas[i].y);
        }
    }
}