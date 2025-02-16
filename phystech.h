#include <iostream>
#include <string>

using namespace std;

class phystech {
protected:
    int age;
    string name;
public:
    phystech():  age(0), name("no_name"){}
    void drink_lit_energy(){
    cout << "Botat' " << endl;
    }

    int getage() {
        return age;
    }

    string getname() {
        return name;
    }

};


class prepy : public phystech {
public:
    prepy() : phystech() {}
    prepy(int age_, string name_) {
        this->age = age_;
        this->name = name_;
    }

    void drink_lit_energy() ;
};




class studenty: public phystech{
public:
    studenty() : phystech() {}
    studenty(int age_, string name_){
    this->age = age_;

    this->name = name_;
    }
    void drink_lit_energy();
};
