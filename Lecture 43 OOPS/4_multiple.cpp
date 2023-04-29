#include<iostream>
using namespace std;

class Animals{

    public:
    int age;
    int weight;

    public:
    void bark(){
        cout << "Barking" << endl;
    }

};

class Human{

    public:
    int age;

    void speak(){
        cout << "Speaking" << endl;
    }

};

// Multiple Inheritance

class hybrid : public Animals, public Human{



};

int main(){

    hybrid h;
    h.bark();
    h.speak();

    return 0;
}