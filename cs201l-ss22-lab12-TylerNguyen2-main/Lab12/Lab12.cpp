#include "Header.h"
#include <iostream>

using namespace std;


int main()
{
    int num, num2, arr[5];
    cout << "Enter an integer" << endl;
    cin >> num;
    cout << "\n" << num << "! = " << factorial_r(num) << "\n\n";
    cout << "fibonacci(" << num << ") = " << fibonacci_r(num) << "\n\n";
    cout << "Enter a number to check if it is a prime number" << endl;
    cin >> num2;
    if (is_prime_r(num2, 2))
        cout << num2 << " is a prime number" << "\n\n";
    else
        cout << num2 << " is not a prime number" << "\n\n";
    cout << "Next we will enter 5 values into an array" << endl;
    for (int i = 0;i < 5;i++)
    {
        cout << "Enter a value for index " << i << endl;
        cin >> arr[i];
    }
    cout << "The sum of all values is " << sum_r(arr, 5) << endl;
    cout << "The list output in reverse is" << endl;
    output_reverse_list_r(arr, 5);
    return 0;
}