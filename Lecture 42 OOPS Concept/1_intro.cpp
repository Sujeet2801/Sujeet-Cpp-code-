#include<iostream>
using namespace std;

//Intro to class and object
/*
// Creating a class
class Hero {

    // Properties of class
    int health;
    char level;
};

class hero{

    // No properties
};

int main()
{

    // Creation of object
    Hero h1;
    cout << "Size --> " << sizeof(h1) << " Byte";
    cout << endl;

    hero h2;
    cout << "Size --> " << sizeof(h2) << " Byte";

    return 0;
}
*/

// Access the properties of class
/*
class hero{

    // Properties
    public:
    int health;
    char level;

};

int main()
{
    // creation of object
    hero ramesh;

    // access the properties
    ramesh.health = 40;
    ramesh.level  = 'A';

    cout << "health is --> " << ramesh.health << endl;
    cout << "level is --> " << ramesh.level << endl;


    return 0;
}
*/

// Use of getter and setter
/*
class hero1{
    // Properties
    private:
    int health;

    public:

    // Use of getter
    int getHealth(){
        return health;
    }

    // Use of setter
    void setHealth(int h){
        health = h;
    }

};

int main()
{
    //creation of object
    hero1 ramesh;
    ramesh.setHealth(45);
    cout << "health is --> " << ramesh.getHealth() << endl;

    return 0;
}
*/

// Dynamic memory allocartion

class hero{
    public:
    int health;
    char level;

    // Use of getter
    int getHealth(){
        return health;
    }

    char getLevel(){
        return health;
    }

    // Use of setter
    void setHealth(int h){
        health = h;
    }
    void getLevel(char ch){
        level = ch;
    }
};

int main()
{
    // static allocation
    hero h1;
    h1.health = 5;
    h1.level = '1';

    cout << "health is --> " << h1.health << endl;
    cout << "level is --> " << h1.level << endl;

    // Dynamic allocation
    hero *b = new hero;
    b->setHealth(70);
    b->getLevel('A');

    cout << "health is --> " << (*b).health << endl;
    cout << "level is --> " << (*b).level << endl;

    cout << "health is --> " << b->health << endl;
    cout << "level is --> " << b->level << endl;


    return 0;
}



