#include <iostream>
using namespace std;
int main()
{
int n, first, fourth, sum;
 n = 12345;
 first = n/10000; //first digit
 n = n%100;
 fourth = n/10; //fourth digit
 sum = first + fourth;
 cout << "sum of first and fourth digit is: " << sum << endl;
 return 0;
}