#include "Application.h"
#include "utilities.h"
#include <cassert>

Game::Game() :
    AppState(GameState),
    land(nullptr),
	player(nullptr)
{}
void Game::reset()
{
    newGame();
}
void Game::newGame(int n_players,Land::Landtype land_t)
{

    world.clear();
    land = static_cast<Land*>(world.addObj(WorldObject::LandType));
    land->genHeightMap(land_t);
    Tank* pTank = static_cast<Tank*>(world.addObj(WorldObject::TankType));
    this->player = new Player(pTank);
    int x = rand() % (windowWidth - 20) + 10;
    pTank->setPosition(sf::Vector2f(x,windowHeight-getLandHeight(x)-10));
    pTank->setPlayer(this->player);
    world.play();
}

void Game::draw(sf::RenderWindow &window)
{
    world.drawAll(window);
}
//обновление событий
void Game::update(float dt)
{
	world.stepAll(dt);
}
void Game::passEvent(sf::Event Event)
{
	if(Event.type == sf::Event::KeyPressed)
	{
		switch(Event.key.code)
		{
		case sf::Keyboard::Left:
			this->player->moveTank(-1);
			break;
		case sf::Keyboard::Right:
			this->player->moveTank(1);
			break;
		}
	}
}
