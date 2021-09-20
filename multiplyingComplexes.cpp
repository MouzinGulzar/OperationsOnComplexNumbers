#include <iostream>
#include <math.h>
using namespace std;

void multiplication(int real[], int imag[])
{
    int resReal = 0, resImag = 0;

    resReal = (real[0] * real [1]) - (imag[0] * imag[1]);
    resImag = (real[0] * imag[1]) + (imag[0] * real[1]);

    cout << endl;

    if (resImag >= 0)
        cout << "Sum: " << resReal << " + " << resImag << "i";
    else
        cout << "Sum: " << resReal << " - " << abs(resImag) << "i";   
}
    
int main()
{
    int real[2], imag[2];

    cout << "Enter Real part of 1st complex number: ";
    cin >> real[0];
    cout << "Enter Imaginary part of 1st complex number: ";
    cin >> imag[0];

    cout << "Enter Real part of 2nd complex number: ";
    cin >> real[1];
    cout << "Enter Imaginary part of 2nd complex number: ";
    cin >> imag[1];

    multiplication(real, imag);
    
    return 0;
}