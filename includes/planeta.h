#include <math.h>

boundingBox boxPlaneta = {
    {-2, 22},
    {2, 22},
    {-2, 18},
    {2, 18}
};

void drawCircle() {
    float r = 2;
    float x = 0;
    float y = 20;

    glPushMatrix();

    glColor3f(0.1, 0.7, 1.0);
    
    glBegin(GL_TRIANGLE_FAN);
    
        glVertex2f(x, y);
        
        for(float i = 0.0f; i <= 360; i++) {
            glVertex2f(r * cos(M_PI * i / 180.0) + x, r * sin(M_PI * i / 180.0) + y);
        }
    
    glEnd();

    glPopMatrix();
}