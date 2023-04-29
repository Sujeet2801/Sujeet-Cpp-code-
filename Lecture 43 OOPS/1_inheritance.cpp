#include<iostream>
using namespace std;

//parent class
class Human {

    public:

    string name;
    int age;
    int height;
    int weight;

    public:
    int getAge(){
        return this -> age;
    }

    void setWeight(int w){
        this -> weight = w;
    }

};

// child class
class Male: public Human{

    public:

    string color;

    void sleep(){
        cout << "Male Sleeping" << endl;
    }

};


int main(){

    Male object;
    object.age = 10;

    cout << object.age << endl;
    cout << object.height << endl;
    cout << object.weight << endl;
    cout << object.color << endl;

    object.setWeight(84);
    cout << object.weight << endl;
    object.sleep();

    return 0;
}