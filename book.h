#include <iostream>
#include <string>

using namespace std;

class library {
protected:
    int sizeb;
    string name;
public:
    library():  sizeb(0), name("no_name"){}
    void read(){
    }

    int getasize() {
        return sizeb;
    }

    string getname() {
        return name;
    }

};


class novels : public library {
public:
    novels() : library() {}
    novels(int size_, string name_) {
        this->sizeb = size_;
        this->name = name_;
    }

    void read();
};




class children_book: public library{
public:
    children_book() :  library() {}
    children_book(int size_, string name_){
    this->sizeb = size_;

    this->name = name_;
    }
    void read();
};

class detectives: public library{
public:
    detectives() :  library() {}
    detectives(int size_, string name_){
    this->sizeb = size_;

    this->name = name_;
    }
    void read();
};
