#pragma once
#include "GameObject.h"
#include <vector>
#include "Enemy.h"

class Spawner
{
private:
	int widthScreen, heightScreen;
	double time;

public:
	//Aquí me marca el error de sintaxis pero ya lo revisamos y lo volvimos a hacer pero sigue saliendo el error
	std::vector<Enemy*> enemies;
	Spawner(int widthScreen, int heightScreen);
	void EnemySpawner(double deltaTime);
	void CreateEnemy();
};

