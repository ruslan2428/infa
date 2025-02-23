#include "astandgal.h"
#include <iostream>

Planet::Planet(const std::string& planetName) : name(planetName) {}

std::string Planet::getName() const {
    return name;
}

void Planet::impactByAsteroid(const std::string& asteroidName) const {
    std::cout << "Planet " << name << " has been impacted by asteroid " << asteroidName << "!" << std::endl;
}

Star::Star(const std::string& starName) : name(starName) {}

std::string Star::getName() const {
    return name;
}

Spaceship::Spaceship(const std::string& shipName) : name(shipName) {}

std::string Spaceship::getName() const {
    return name;
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

Spaceport::Rocket::Rocket(const std::string& rocketName) : name(rocketName) {}

void Spaceport::Rocket::launchToPlanet(const Planet& planet) const {
    std::cout << "Rocket " << name << " arrived on the planet " << planet.getName() << "!" << std::endl;
}
