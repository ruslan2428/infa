#include "space.h"

int main() {

    Planet earth("Jupiter");
    Planet mars("Mars");


    Spaceport::Rocket rocket("Angara A5");


    rocket.launchToPlanet(earth);
    rocket.launchToPlanet(mars);

    return 0;
}
