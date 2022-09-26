/**
 * Definição dos tipos criados e usados no código
 * A struct coordinate séria a coordenada ou ponto no plano cartesiano do OpenGl
 * A struct rgbValues é utilizada para guardar valores para vermelho, verde e azul de algum objeto
 * E a struct de boundingBox é utilizada para conter os dados da hitbox dos objetos do jogo
 */

struct coordinate {
    float x;
    float y;
};

struct rgbValues {
    float r;
    float g;
    float b;
};

struct boundingBox {
    coordinate topLeft;
    coordinate topRight;
    coordinate bottomLeft;
    coordinate bottomRight;
};