#include "instruments.h"

void Instrument::describe() {
    cout << "Instrument Name: " << name << endl;
    cout << "Type: " << type << endl;
}

void Instrument::complexity() {
    cout << "Practise makes perfect" << endl;
}

Guitar::Guitar(string n) {
    name = n;
    type = "String";
}
void Guitar::describe() {
    cout << "Guitar: " << endl;
    Instrument::describe();
}
void Guitar::complexity() {
    cout << "Worth the effort" << endl;
}

Piano::Piano(string n) {
    name = n;
    type = "Keyboard";
}
void Piano::describe() {
    cout << "Piano: " << endl;
    Instrument::describe();
}
void Piano::complexity() {
    cout << "Beethoven in the making" << endl;
}

Drum::Drum(string n) {
    name = n;
    type = "Percussion";
}
void Drum::describe() {
    cout << "Drum: " << endl;
    Instrument::describe();
}
void Drum::complexity() {
    cout << "Hmm lots of practise" << endl;
}

Violin::Violin(string n) {
    name = n;
    type = "String";
}
void Violin::describe() {
    cout << "Violin: " << endl;
    Instrument::describe();
}
void Violin::complexity() {
    cout << "impossible" << endl;
}

