#pragma once
#include "PowerupBase.h"

class PowerupUp : public PowerupBase
{
public:
    PowerupUp(sf::RenderWindow* window, Paddle* paddle, Ball* ball);
    ~PowerupUp();

    std::pair<POWERUPS, float> applyEffect() override;
};

