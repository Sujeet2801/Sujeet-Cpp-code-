#include<iostream>
using namespace std;

float area(float radius){
    float result = 3.14 * radius * radius;
    return result;
}

float circumference(float radius){
    float result = 2 * 3.14 * radius;
    return result;
}

int main(){

    int radius;
    cout<<"Enter the value of radius = ";
    cin>>radius;

    cout<<"Area of circle is = "<<area(radius)<<endl;
    cout<<"Circumference of circle is = "<<circumference(radius)<<endl;


    return 0;
}