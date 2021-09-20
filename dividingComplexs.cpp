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

void division(int numerator[], int denominator[])
{
    
    int num[] = {numerator[0], numerator[1]};
    int den[] = {denominator[0], denominator[1]};
    int cod[] = {denominator[0], -denominator[1]};

    float resNumReal = (numerator[0] * cod[0]) - (numerator[1] * cod[1]);
    float resNumImag = (numerator[0] * cod[1]) + (numerator[1] * cod[0]);
    
    float resDenReal = (denominator[0] * cod[0]) - (denominator[1] * cod[1]);
    float resDenImag = (denominator[0] * cod[1]) + (denominator[1] * cod[0]);

    cout << endl;

    if (resNumImag >= 0)
        cout << resNumReal / resDenReal << " + " << resNumImag / resDenReal << "i";
    else
        cout << resNumReal / resDenReal << " - " << fabs(resNumImag / resDenReal) << "i";
}

int main()
{
    int numerator[2], denominator[2];

    cout << "Enter Real part of divident: ";
    cin >> numerator[0];
    cout << "Enter Imaginary part of divident: ";
    cin >> numerator[1];

    cout << "Enter Real part of divisor: ";
    cin >> denominator[0];
    cout << "Enter Imaginary part of divisor: ";
    cin >> denominator[1];

    division(numerator, denominator);
    
    return 0;
}