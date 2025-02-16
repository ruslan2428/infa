#include "animals.h"

void tiger::say() {
    cout << "Rrrrrr" << endl;
}

void giraffe::say()  {
    Animals::say();
}

void OurElephant::say() {
    cout << "UUUUUUU"<< endl;
}

void bear::say()  {
    cout << "arrrrr"<< endl;
}


void rabbit::say()  {
    cout << "ui ui"<< endl;
}
