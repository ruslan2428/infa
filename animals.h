#include <iostream>

using namespace std;

class Animals {
protected:
    bool predator;
    int populationCount;
    int aggressionLevel;
public:
    Animals(): predator(false), populationCount(0), aggressionLevel(0){}
    virtual void say(){
    cout << "(silence)" << endl;
    }
    bool hasPredator() {
        return predator;
    }

    int getPopulation() {
        return populationCount;
    }

    int getAggression() {
        return aggressionLevel;
    }

};

class tiger: public Animals{
public:
    tiger(){
    aggressionLevel = 10;
    predator = true;
    populationCount = 100;
    }
    void say();
};
class giraffe: public Animals{
public:
    giraffe(){
    aggressionLevel = 2;
    predator = false;
    populationCount = 25;
    }
    void say();
};

class OurElephant: public Animals{
public:
    OurElephant(){
    aggressionLevel = 1;
    predator = false;
    populationCount = 50;
    }
    void say();
};

class bear: public Animals{
public:
    bear(){
    aggressionLevel = 7;
    predator = true;
    populationCount = 75;
    }
    void say();
};

class rabbit: public Animals{
public:
    rabbit(){
    aggressionLevel = 0;
    predator = false;
    populationCount = 1000;
    }
    void say();
};
