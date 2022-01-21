#include <iostream>
#include <cmath> //To include function log10(number)
using namespace std;
int count_digits(int number)
{
    double count = 0;
    for (int i = 1; i <= number; i++)
    {
        count += log10(i);
    }
    return (floor(count) + 1);
}

int main()
{
    cout << count_digits(5) << endl;

    return 0;
}