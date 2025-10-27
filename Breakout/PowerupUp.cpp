#include "PowerupUp.h"

PowerupUp::PowerupUp(sf::RenderWindow* window, Paddle* paddle, Ball* ball) : PowerupBase(window, paddle, ball)
{
	_sprite.setFillColor(sf::Color::Green);
}

PowerupUp::~PowerupUp()
{

}

std::pair<POWERUPS, float> PowerupUp::applyEffect()
{

	_paddle->setPosition(_window->getSize().y - 400.0f, 5);
	return {paddleup, 5.0f};
}
