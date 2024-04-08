#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameState.h"
#include "Framework/World.h"
#include "Framework/TileManager.h"
#include <string>
#include <iostream>
#include "Player.h"


class Level : public BaseLevel{
public:
	Level(sf::RenderWindow* hwnd, Input* in, GameState* gs, World* w);
	~Level();

	void handleInput(float dt) override;
	void update(float dt) override;
	void render();
	void moveView(float dt);
	void EditMode(float dt, sf::Vector2f viewSize);
	void DrawEditModeText();
	void InitialiseTileManager();
	void adjustViewToWindowSize(unsigned int width, unsigned int height);
private:
	TileManager tileManager;
	sf::View view;
	
	sf::Text TileEditorText;
	sf::Font font;

	bool editMode;
	// Default variables for level class.
	Player player;

	sf::Text CollectableText;
};