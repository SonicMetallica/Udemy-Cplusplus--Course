
#include <iostream>
using namespace std;

int main()
{
    
    int pin = 123;
    cout << "Please enter the pin for your credit card" << endl;
    cin >> pin;
    
    if (pin == 123)
    {
        cout << "Valid pin." << endl;
    }
    else
    {
        cout << "Invalid pin" << endl;
        exit(0);
    }
    

    int money = 0;
    cout << "Please enter the amount of money you want to withdraw." << endl;
    cin >> money;
   
    if (money <= 10000)
    {
        cout << "You can withdraw " << money << " dollars." << endl;
    }
    else if (money >= 10000)
    {
        cout << "The creditcard isn't accepted." << endl;
    }
    return 0;
}
