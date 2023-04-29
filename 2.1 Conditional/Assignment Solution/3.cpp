#include <iostream>
using namespace std;

int main()
{

    int boys = 25, girls, total = 45;
    int studentsWithA;  int girlssWithA;
    girls = total - boys;

    studentsWithA = total * 0.8;
    girlssWithA = studentsWithA - 17;

    cout<<"Girls with grade A "<<girlssWithA;
    return 0;
}