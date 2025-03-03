#include "astandgal.h"
#include <iostream>

Asteroid::Asteroid(const std::string& asteroidName) : name(asteroidName) {}

std::string Asteroid::getName() const {
    return name;
}

Galaxy::Galaxy(const std::string& galaxyName) : name(galaxyName) {}

std::string Galaxy::getName() const {
    return name;
}

void Galaxy::receiveAsteroid(const Asteroid& asteroid) {
    asteroids.push_back(asteroid);
    std::cout << "Galaxy " << name << " has received asteroid " << asteroid.getName() << "!" << std::endl;
}
