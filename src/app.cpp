// practicing some imperative C++
// see README for instructions
#include <iostream>
#include <string>
using namespace std;

bool isPrime(int x);
int closestPrime(int x);
/** You should put in a main for testing, but then comment it out for submission.
 * The test.cpp file will include the main in your submission. You do not edit the test.cpp
 * file. The only file to edit is app.cpp**/

// int main()
// {
//     // int a, b;
//     int a = 0;
//     int b = 0;
//     cin >> a;
//     cin >> b;
//     cout << "a: " << a << " b: " << b;
//     if (isPrime(a)) {
//         cout << a << " is prime.";
//     } else {
//         cout << b << " is not prime. Closest prime is " << closestPrime(b);
//     }
//     return 0;
// }

bool isPrime(int x)
{
    if (x<=1) return false;
    if (x==2) return true;
    if (x%2==0) return false;
    for (int i=3; i*i<=x; i+=2) {
        if (x%i==0) {
            return false;
        }
    }
    return true;
}

int closestPrime(int x)
{ // From my understanding, from the given example potentially, closest is NEXT closest? Not including previous
    if (x <= 2)
        return 2;
    int i = x;
    while (true)
    {
        if (isPrime(i))
        {
            return i;
        }
        else
        {
            i++;
        }
    }
    return 1;
}