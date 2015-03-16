#include "Scene.h"
#include "Config.h"

Scene::Scene() {
	sf::ContextSettings windowSettings;
	windowSettings.antialiasingLevel = ANTIALIASING_LEVEL;
	m_Window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT, 32), WINDOW_NAME, sf::Style::Default, windowSettings);
	m_TextureManager = SpriteManager();
	SetupObjects();
	GameLoop();
}

Scene::~Scene() {

}

void Scene::SetupObjects() {

}

void Scene::GameLoop() {
	while (m_Window.isOpen()) {
		InputEvent();
		//Draw the ant eaters
		for (auto i = m_aAntEaters.begin(); i != m_aAntEaters.end(); ++i)
		{
			i->UpdateGraphics();
			m_Window.draw(*i);
		}

		//Draw the obsticles
		for (auto i = m_aObsticles.begin(); i != m_aObsticles.end(); ++i)
		{
			m_Window.draw(*i);
		}
	}
}

void Scene::InputEvent() {
	sf::Event Event;
	while (m_Window.pollEvent(Event))
	{
		if (Event.type == sf::Event::Closed) {
			m_Window.close();
		} else if ((Event.type == sf::Event::KeyPressed)) {
			if (Event.key.code == sf::Keyboard::Escape) {
				m_Window.close();
			}
		}
	}
}