#include <string>
#include <vector>

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
