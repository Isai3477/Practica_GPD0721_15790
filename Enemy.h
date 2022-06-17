#pragma once
#include "GameObject.h"
#include "Image.h"
#include "Vector2.h"
#include <vector>
#include "Bullet.h"
#include "Spawner.h"

class Enemy :
    public GameObject
{
private:
    Image enemy;
    float vel;
    bool Colision(int posEnemyX, int posEnemyY, int enemyWidth, int enenmyHeight);
   

public:
    void Init(int x_, int y_);
    void Draw();  
    void Update(Vector2 playerPosition);
    int GetWidth();
    int GetHeigth();
    bool CheckColisions(std::vector <Bullet*> bullets);
    int health = 10;
    void DeleteEn();
};

