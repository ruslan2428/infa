#include "astandgal.h"
#include "space.h"

int main() {
    Planet earth("Earth");
    Star sun("Sun");
    Spaceship voyager("Voyager");
    Asteroid apophis("Apophis");
    Galaxy milkyWay("Milky Way");

    milkyWay.receiveAsteroid(apophis); // galaxy receives asteroid
    earth.impactByAsteroid(apophis.getName()); // planet impacted by asteroid

    Spaceport::Rocket falcon9("Falcon 9"); // create instance of rockey class, nested wihtin spaceport class
    falcon9.launchToPlanet(earth); // rocket launches to planet

    return 0;
}
