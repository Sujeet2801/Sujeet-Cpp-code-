#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity--> "<<v.capacity()<<" ";
    cout<<"Size-->"<<v.size()<<endl;

    v.push_back(4);
    cout<<"Capacity--> "<<v.capacity()<<" ";
    cout<<"Size-->"<<v.size()<<endl;

    v.push_back(5);
    cout<<"Capacity--> "<<v.capacity()<<" ";
    cout<<"Size-->"<<v.size()<<endl;

    cout<<"Element at index 2--> " << v.at(2)<<endl;

    cout<<"Front--> "<<v.front()<<endl;
    cout<<"Last--> "<<v.back()<<endl;

    cout<<"Before pop--> ";

    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop--> ";

    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}