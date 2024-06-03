// print_even_odd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int i = 1, n, even = 0, odd = 0;
    cout << "\nEnter the Ending value: ";
    cin >> n;
    cout << "\nEven numbers: ";
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << "\n" << i;
            even++;
        }
        i++;
    }
    cout << "\nOdd numbers: ";
    i = 1;
    while (i <= n)
    {
        if (i % 2 == 1)
        {
            cout << "\n" << i;
            odd++;
        }
        i++;
    }
    cout << "\nTotal even numbers: " << even;
    cout << "\nTotal odd numbers: " << odd;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
