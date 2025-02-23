#include <string>
#include <vector>

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
    void exploreGalaxy(const class Galaxy& galaxy) const;
};

class Asteroid : public CosmicObject {
private:
    std::string name;
public:
    Asteroid(const std::string& asteroidName);
    std::string getName() const override;
};

class Galaxy : public CosmicObject {
private:
    std::string name;
    std::vector<Asteroid> asteroids; // Store asteroids in the galaxy
public:
    Galaxy(const std::string& galaxyName);
    std::string getName() const override;
    void receiveAsteroid(const Asteroid& asteroid);
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
