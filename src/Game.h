#pragma once
#ifndef GAME_H
#define GAME_H

#include<iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

//Class that acts as the game engine.

class Game {
    private:
    //Variables
    //Window
    sf::RenderWindow* window;
    sf::VideoMode videoMode;
    sf::Event ev;

    //Game Object
    sf::RectangleShape enemy;


    //Private Functions
    void initVariables();
    void initWindow();
    void initEnemies();

    public:
    //Constructors and Destructors
    Game();
    virtual ~Game();

    //Accessors
    bool running() const;

    //Functions
    void pollEvents();
    void update();
    void render();

};

#endif
