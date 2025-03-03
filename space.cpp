#include "space.h"
#include <iostream>

Planet::Planet(const std::string& planetName) : name(planetName) {}

std::string Planet::getName() const {
    return name;
}

Star::Star(const std::string& starName) : name(starName) {}

std::string Star::getName() const {
    return name;
}

Spaceship::Spaceship(const std::string& shipName) : name(shipName) {}

std::string Spaceship::getName() const {
    return name;
}

Spaceport::Rocket::Rocket(const std::string& rocketName) : name(rocketName) {}

void Spaceport::Rocket::launchToPlanet(const Planet& planet) const {
    std::cout << "Rocket " << name << " arrived on the planet " << planet.getName() << "!" << std::endl;
}

void Planet::impactByAsteroid(const std::string& asteroidName) const {
    std::cout << "Planet " << name << " has been impacted by asteroid " << asteroidName << "!" << std::endl;
}
