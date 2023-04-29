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

int main(){

    dog d;
    d.speak();
    d.age = 10;
    d.weight = 45;
    cout << d.age << endl;
    cout << d.weight << endl;

    return 0;
}