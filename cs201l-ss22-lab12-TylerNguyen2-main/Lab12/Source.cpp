#include "Header.h"
#include <iostream>

using namespace std;


long factorial_r(long value)
{
    if (value == 0)
        return 1;
    else if (value == 1)
        return 1;
    else
        return value * factorial_r(value - 1);
}
int fibonacci_r(int n)
{
    if (n <= 1)
        return n;
    else
        return (fibonacci_r(n - 1) + fibonacci_r(n - 2));

}
bool is_prime_r(int value, int n)
{
    if (value <= 2)
        return true;
    if (value % n == 0)
        return false;
    if (n * n > value)
        return true;
    return is_prime_r(value, n + 1);
}
int sum_r(int list[], int list_size)
{
    if (list_size <= 0)
        return 0;
    return (list[list_size - 1] + sum_r(list, list_size - 1));
}
void output_reverse_list_r(int list[], int list_size)
{
    if (list_size == 0)
        return;
    cout << list[list_size - 1] << " ";

    output_reverse_list_r(list, list_size - 1);

}