#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include "SpriteManager.h"
#include "AntEater.h"
#include "Obsticle.h"

enum GameState {
	Playing,
	GameOver,
};

class Scene {
private:
	sf::RenderWindow m_Window;
	SpriteManager m_TextureManager;
	std::vector<AntEater> m_aAntEaters;
	std::vector<Obsticle> m_aObsticles;

	void GameLoop();
	void InputEvent();
	void SetupObjects();
public:
	Scene();
	~Scene();
};