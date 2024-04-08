#include "Player.h"

Player::Player()
{
	health = 100;
	speed = 200;

	if (!tex.loadFromFile("gfx/mario.png"))
	{
		std::cout << "File not found\n";
	}
	setTexture(&tex);
	setSize(sf::Vector2f(100, 100));
	setMass(100.f);
	setTag("Player");
}

void Player::handleInput(float dt)
{
	velocity.x = 0.f;

	if (input->isKeyDown(sf::Keyboard::A))
	{
		velocity.x = -speed;
	}
	if (input->isKeyDown(sf::Keyboard::D))
	{
		velocity.x = speed;
	}
	if (input->isKeyDown(sf::Keyboard::Space) && canJump)
	{
		Jump(200.f);
	}

	
}
