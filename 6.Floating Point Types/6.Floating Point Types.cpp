#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float aValue = 76.78;
    float bValue = 56.545555555555555555435435455345435;
    float cValue = 76.79;
    float dValue = 67.50;
    double eValue = 67.9443564665465465465;
    long double fValue = 67.9443564665465465465;

    
    cout << fixed << aValue << " SIZE OF " << sizeof(aValue) << endl;
    cout << fixed << bValue << " SIZE OF " << sizeof(bValue) << endl;
    cout << fixed << cValue << " SIZE OF " << sizeof(cValue) << endl;
    cout << fixed << dValue << " SIZE OF " << sizeof(dValue) << endl;
    cout << fixed << eValue << " SIZE OF " << sizeof(eValue) << endl;
    cout << setprecision(12) << fixed << fValue << " SIZE OF  " << sizeof(fValue) << endl;
    
    
    return 0;
}
