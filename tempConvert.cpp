#include <iostream>
using namespace std;

//A simple program to convert a weekly temperature forecast from Farenheit to Celcius

int main()
{
    double tempC[7] = {};
    double tempF[7] = {};

    cout << "Enter 7 values for the weekly forecast in Farenheit, separated by a space:  ";

    for (int i = 0; i < 7; i++)
    {
        cin >> tempF[i];
        tempC[i] = (tempF[i]-32)*(0.56);     //(5/9) = approx 0.56
    }

    cout << "You entered the following temperatures (in Farenheit):  ";
    for (int i = 0; i < 7; i++)
    {
        cout << tempF[i] << " ";
    }

    cout << "\nYour temperatures in Celcius are:  ";
    for (int i = 0; i < 7; i++)
    {
        cout << tempC[i] << " ";
    }

    cout << "To convert any one of your temperatures back to Farenheit, multiply that value by 1.8 then add 32. ";    

    return 0;
}