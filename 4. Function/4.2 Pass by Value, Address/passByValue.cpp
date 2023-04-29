#include<iostream>
using namespace std;

int main(){

    int p = 5;
    int &q = p;

    cout<<&q<<endl;
    cout<<&p<<endl;

    q++;

    cout<<p<<endl;


    return 0;
}