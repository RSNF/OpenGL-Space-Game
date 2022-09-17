class Star {
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
    boundingBox box = {
        {-1.5, 1},
        {1.5, 1},
        {-1.5, -2},
        {1.5, -2},
    };
    public:
        void drawStar() {

            glColor3f(1, 1, 0);

            for (int i = 0; i < 30; i = i + 3) {

                glBegin(GL_TRIANGLES);
                    glVertex2f(points[i].x, points[i].y);
                    glVertex2f(points[i+1].x, points[i+1].y);
                    glVertex2f(points[i+2].x, points[i+2].y);
                glEnd();
            }
        }
};