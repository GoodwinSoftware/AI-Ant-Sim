#include "SpriteGameObject.h"

SpriteGameObject:: SpriteGameObject()
{

}

 SpriteGameObject::~ SpriteGameObject()
{

}

void SpriteGameObject::draw(sf::RenderTarget &target, sf::RenderStates states) const //!< Draw the AntEater
{
	target.draw(g_Sprite);
}