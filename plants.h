#include <iostream>
#include <string>
using namespace std;

class Plants {
protected:
    bool flowering;
    float height; // in m
    float growthRate; // in m per year
public:
    Plants() : flowering(false), height(0.0), growthRate(0.0) {}

    virtual void describe() {
        cout << (flowering ? "a flowering plant." : "not a flowering plant.") << endl;
        cout << "Height: " << height << " meters." << endl;
        cout << "Growth Rate: " << growthRate << " meters per year." << endl;
    }
    bool isFlowering() {
        return flowering;
    }
    float getHeight() {
        return height;
    }
    float getGrowthRate() {
        return growthRate;
    }
};

class Rose : public Plants {
public:
    Rose() {
        flowering = true;
        height = 1.2;
        growthRate = 0.5;
    }
    void describe();
};

class Oak : public Plants {
public:
    Oak() {
        flowering = false;
        height = 20.0;
        growthRate = 0.3;
    }
    void describe();
};

class Sunflower : public Plants {
public:
    Sunflower() {
        flowering = true;
        height = 1.5;
        growthRate = 0.8;
    }
    void describe();
};

class Cactus : public Plants {
public:
    Cactus() {
        flowering = true;
        height = 1.0;
        growthRate = 0.1;
    }
    void describe();
};

class Fern : public Plants {
public:
    Fern() {
        flowering = false;
        height = 0.5;
        growthRate = 0.2;
    }
    void describe();
};

