#include<iostream>
using namespace std;

int process(int amount, float interest)
{
    amount += amount*interest;
    return amount;
}

int main()
{
    int plan, amount, times;
    float interest;
    cout << "Enter plan: 5/10/35/120/200-- ";
    cin >> plan;
    switch(plan)
    {
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
    for(int i=0; i<times; i++)
    {
        amount = process(amount, interest); 
    }
    cout << endl << "After " << plan*times << " days: " << endl << amount;
    return 0;
}
