#include "Obsticle.h"


Obsticle::Obsticle() 
{
	m_GameObjectType = ObsticleGO;
}

Obsticle::Obsticle(sf::Texture textureIn) 
{
	g_Sprite.setTexture(textureIn);
}

Obsticle::~Obsticle() {

}
