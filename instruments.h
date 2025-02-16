#include <iostream>
#include <string>
using namespace std;

class Instrument {
protected:
    string name;
    string type;
public:
    Instrument() : name(""), type("") {}

    virtual void describe();
    virtual void complexity();
};

class Guitar : public Instrument {
public:
    Guitar(string n);
    void describe();
    void complexity();
};

class Piano : public Instrument {
public:
    Piano(string n);
    void describe();
    void complexity();
};

class Drum : public Instrument {
public:
    Drum(string n);
    void describe();
    void complexity();
};

class Violin : public Instrument {
public:
    Violin(string n);
    void describe();
    void complexity();
};
