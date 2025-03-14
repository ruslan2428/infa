#ifndef SPACE_H
#define SPACE_H

#include <string>

//forward declaration of Galaxy
//class Galaxy;

class CosmicObject {
public:
    virtual std::string getName() const = 0;
};

class Planet : public CosmicObject {
private:
    std::string name;
public:
    Planet(const std::string& planetName);
    std::string getName() const override;
    virtual ~Planet() {}
    void impactByAsteroid(const std::string& asteroidName) const;
};


class Star : public CosmicObject {
private:
    std::string name;
public:
    Star(const std::string& starName);
    std::string getName() const override;
};


class Spaceship : public CosmicObject {
private:
    std::string name;
public:
    Spaceship(const std::string& shipName);
    std::string getName() const override;
};


class Spaceport {
public:
    class Rocket {
    private:
        std::string name;
    public:
        Rocket(const std::string& rocketName);
        void launchToPlanet(const Planet& planet) const;
    };
};

#endif // SPACE_H


