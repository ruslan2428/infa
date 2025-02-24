#include "astandgal.h"
#include <iostream>

void Planet::impactByAsteroid(const std::string& asteroidName) const {
    std::cout << "Planet " << name << " has been impacted by asteroid " << asteroidName << "!" << std::endl;
}

void Spaceship::exploreGalaxy(const Galaxy& galaxy) const {
    std::cout << "Spaceship " << name << " is exploring the galaxy " << galaxy.getName() << "!" << std::endl;
}

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

