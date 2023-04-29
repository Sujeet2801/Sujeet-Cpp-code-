#include<iostream>
using namespace std;

class Animals{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout << "Speaking" << endl;
    }

};

class dog: public Animals{


};

class germansherpad: public dog{

};

int main(){

    germansherpad g;
    g.speak();

    return 0;
}