#include "AntEater.h"

AntEater::AntEater()
{
	m_GameObjectType = AntEaterGO;
}

AntEater::AntEater(sf::Texture texture)
{
	g_Sprite.setTexture(texture);
}

AntEater::~AntEater()
{

}