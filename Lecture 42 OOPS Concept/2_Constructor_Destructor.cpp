#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Hero{

    //Properties
    private:

    public:
    int health;
    char level;
    char *name;
    static int timeToComplete;


    // Constructor
    Hero(){
       cout << "Constructor Called" << endl;
        name = new char[100];
    }

    // Parameterised constructor
    Hero(int health){
        cout << "1 Paramatrised constructor Called" << endl;
        cout << "this is -> " << this << endl;
        this -> health = health;
    }

    Hero(int health, char level){
        this -> level = level;
        this -> health = health;
    }

// copy constructor //
    Hero (Hero& temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this -> name = ch;

        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print(){
        cout << "[ Name: " << this -> name << ",";
        cout << " Health: " << this -> health << ",";
        cout << " Level: " << this -> level << " ]" << endl;
    }

    // Use of getter
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    // Use of setter
    void setHealth(int h){
        health = h;
    }
   
    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        this -> name = name;
    }

    // ~Hero(){
    //     cout << "Destructor called" << endl;
    // }

};


/*
int main(){

    // object created statically
    Hero ramesh(10);
   cout << "Address of ramesh is -> " << &ramesh << endl;
    ramesh.print();

    // dynamically
    // Hero *h = new Hero(11);
    // (*h).print();

    // Hero temp(22, 'A');
    // temp.print();

    return 0;
}
*/


int main(){
    //static allocation
    //Hero  a;

    //dynamic allocation
    // Hero *h = new Hero();
    // delete h;


    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Sujeet";
    hero1.setName(name); 

    hero1.print();

    //use default copy constructor
    //Hero hero2(hero1);  //  Hero hero2 = hero1
    // hero2.print();

   // hero1.name[0] = 'A';
    // hero1.print();
    // hero2.print();



    return 0;
}


/*
// static keyword
int Hero::timeToComplete = 5;


int main(){

    cout << Hero::timeToComplete << endl; // Recommended  // :: -> scope resolution operator //

    Hero a;

    // cout << a.timeToComplete << endl;   // Not recommended

    return 0;
}*/