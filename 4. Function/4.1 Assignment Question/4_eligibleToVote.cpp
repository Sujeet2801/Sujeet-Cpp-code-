/*#include <iostream>
using namespace std;

int eligibleToVote(int age)
{
    if (age >= 18)
    {
        cout << "Eligible To Vote" << endl;
    }
    else
    {
        cout << "Not eligible to vote" << endl;
    }
    return 0;
}

int main()
{

    int age;
    cout << "Enter the age = ";
    cin >> age;

    eligibleToVote(age);

    return 0;
}*/





#include<iostream>
using namespace std;

bool checkEligibility(int age, int limit){
    if(age >= limit){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int voting_limit = 18;
    if(checkEligibility(18, voting_limit)){
        cout<<"Yes, the current person is eligible to vote";
    }
    else{
        cout<<"No, the person is not eligible to vote";
    }

    return 0;
}