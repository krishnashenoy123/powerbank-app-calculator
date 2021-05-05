#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int plan;
    double amount, times, total;
    float interest;
    cout << "Enter plan: 3/5/10/35/120/200-- ";
    cin >> plan;
    switch(plan)
    {
        case 3: interest = 0.19;
        break;
        case 5: interest = 0.3;
        break;
        case 10: interest = 0.43;
        break;
        case 35: interest = 2.5;
        break;
        case 120: interest = 13;
        break;
        case 200: interest = 28;
        break;
    }
    cout << "Amount that you want to deposit: ";
    cin >> amount;
    cout << "Enter the times that you want to keep: ";
    cin >> times;
    
    total = amount*(pow((1+interest),times));
    cout << endl << "After " << plan*times << " days: " << endl << total;
    return 0;
}
