#include <iostream>
#include <math.h>

using namespace std;

float f(float x)
{
    return (1 / x);
}

int main()
{
    float a, b;
    int n;
    float h, sum, integral;
    cout << "Input: " << endl;
    cout << "Enter initial interval: ";
    cin >> a;
    cout << endl;
    cout << "Enter final interval: ";
    cin >> b;
    cout << endl;
    cout << "Enter the number of sub-intervals: ";
    cin >> n;
    cout << endl;
    double x[n + 1], y[n + 1];

    // calculate h

    h = (b - a) / n;
    for (int i = 0; i <= n; i++)
    {
        x[i] = a + i * h;
        y[i] = f(x[i]);
    }
    for (int i = 1; i < n; i++)
    {
        sum = sum + h * y[i];
    }
    integral = h / 2.0 * (y[0] + y[n]) + sum;
    cout << "The definite integral  is " << integral << endl;
    return 0;
}

/*
Sample output 
Input: 
Enter initial interval: 1

Enter final interval: 5

Enter the number of sub-intervals: 4

The definite integral  is 1.68333
*/