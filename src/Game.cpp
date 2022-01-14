#include "Game.h"

//Private Functions
void Game::initVariables() {
    this -> window = nullptr;

}

void Game::initWindow() {
    this -> videoMode.height = 1000;
    this -> videoMode.width = 1000;
    this -> window = new sf::RenderWindow(this->videoMode, "My First Game", sf::Style::Titlebar | sf::Style::Close);
    this -> window->setFramerateLimit(60);
}

void Game:: initEnemies() {
    //this->enemy.setPosition();
    this-> enemy.setSize(sf::Vector2f(100.f, 100.f));
    this->enemy.setFillColor(sf::Color::Cyan);
    this->enemy.setOutlineColor(sf::Color::Green);
    this->enemy.setOutlineThickness(1.f);

};

//Constructors and Destructors
Game::Game(){
    this -> initVariables();
    this -> initWindow();
    this->initEnemies();

};

Game::~Game() {
    delete this -> window;
};


//Accessors
bool Game::running() const {
    return this->window->isOpen();
}

//Functions

void Game::pollEvents() {
    //Event Polling
    while(this -> window -> pollEvent(this -> ev)) {
        switch (this -> ev.type) {
            case sf::Event::Closed:
            this -> window -> close();
            break;

            case sf::Event::KeyPressed:
            if (this -> ev.key.code == sf::Keyboard::Escape)
            this -> window -> close();
            break;

            default:
            break;
        }
    }
}

void Game::update() {
    this -> pollEvents();

}

void Game::render() {

    /*
        @return void
        -clear old frame
        -render objects
        -display frame in window
        Renders the game object
    */
    this -> window -> clear();

    //Draw Game
    this -> window -> draw(this->enemy);

    this -> window -> display();
}
