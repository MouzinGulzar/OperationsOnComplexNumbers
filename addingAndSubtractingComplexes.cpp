#include <iostream>
#include <conio.h>
using namespace std;

#define MAX 999

void addition(int number, int real[], int imag[])
{
    int resReal = 0, resImag = 0;

    for (int i = 0; i < number; i++)
    {
        resReal += real[i];
        resImag += imag[i];
    }

    if (resImag >= 0)
        cout << "Sum: " << resReal << " + " << resImag << "i";
    else
        cout << "Sum: " << resReal << " - " << abs(resImag) << "i";
}

void subtraction(int number, int real[], int imag[])
{
    int resReal = real[0], resImag = imag[0];

    for (int i = 1; i < number; i++)
    {
        resReal -= real[i];
        resImag -= imag[i];
    }

    if (resImag >= 0)
        cout << "Sum: " << resReal << " + " << resImag << "i";
    else
        cout << "Sum: " << resReal << " - " << abs(resImag) << "i";
}

int main()
{

    int mode;
    cout << "What do you want to do: " << endl << "1. Addition" << endl << "2. Subtraction" << endl << "Enter mode: ";
    std::cin >> mode;

    int number;
    if (mode == 1)
        cout << "How many numbers you want to add: ";
    else if (mode == 2)
        cout << "How many numbers you want to subtract: ";
    else
        cout << "Sorry! You entered an invalid mode"; 
    
    std::cin >> number;

    int real[MAX];
    int imag[MAX];

    int i = 0;

    while(i < number)
    {
        if (i == 0)
            cout << "Enter Real part of 1st complex number: ";
        else if(i == 1)
            cout << "Enter Real part of 2nd complex number: ";
        else if(i == 2)
            cout << "Enter Real part of 3rd complex number: ";
        else
            cout << "Enter Real part of " << i + 1 <<"th complex number: ";
        
        std::cin >> real[i];
        
        if (i == 0)
            cout << "Enter Imaginary part of 1st complex number: ";
        else if(i == 1)
            cout << "Enter Imaginary part of 2st complex number: ";
        else if(i == 2)
            cout << "Enter Imaginary part of 3rd complex number: ";
        else
            cout << "Enter Imaginary part of " << i + 1 <<"th complex number: ";

        std::cin >> imag[i];

        i++;
    }

    if(mode == 1)
        addition(number, real, imag);
    else if(mode == 2)
        subtraction(number, real, imag);
    
    return 0;
}