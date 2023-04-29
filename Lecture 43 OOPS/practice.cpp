#include<iostream>
using namespace std;

class rect{

    int x,y;

    public:
    rect(int a, int b){
        x = a;
        y =  b;
    }

    int area(){
        return (x*y);
    }

};


int main()
{
    rect rectangle(3,4);
    cout << rectangle.area();


    return 0;
}