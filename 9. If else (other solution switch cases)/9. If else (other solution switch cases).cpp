#include <iostream>

using namespace std;

int main()

{
    cout << "1.\tAdd record" << endl;

    cout << "2.\tDelete Record" << endl;

    cout << "3.\tView record" << endl;

    cout << "4.\tSearch Record" << endl;

    cout << "5.\tQuit Record" << endl;

    cout << "Enter your selection" << endl;

    char selection;

    cin >> selection;

    switch (selection)

    {

    case '1':

        cout << "He add an record." << endl;

        break;

    case '2':

        cout << "He delete an record." << endl;

        break;

    case '3':

        cout << "He view an record." << endl;

        break;

    case '4':

        cout << "He search an record." << endl;

        break;

    case '5':

        cout << "He quit an record." << endl;
    }

    return 0;

}
