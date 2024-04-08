#pragma once
#include "Framework/GameObject.h"
class Player : public GameObject
{
	int health;
	float speed;
	sf::Texture tex;
	int numberOfCollectables;
public:
	Player();

	void handleInput(float dt);

	void AddCollectable(int c) { numberOfCollectables += c; }
	int getCollectableCount() { return numberOfCollectables; }

};

