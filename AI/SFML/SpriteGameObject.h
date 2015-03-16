#ifndef SPRITE_GAMEOBJECT_H
#define SPRITE_GAMEOBJECT_H

#include "GameObject.h"
#include <SFML/Graphics.hpp>

class  SpriteGameObject : public GameObject, public sf::Drawable
{
public:
	sf::Texture g_texture; //!< Sprite texture
	sf::Sprite g_Sprite; //!< Sprite of the game object
	SpriteGameObject();
	~SpriteGameObject();
	virtual void UpdateGraphics() = 0; //!< Override function to update the graphics of the object
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const; //!< Draw the AntEater
};


#endif