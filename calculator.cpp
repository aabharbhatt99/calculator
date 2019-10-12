#include<iostream>
using namespace std;

void sum(int a, int b)
{
 int sum = a+b;
 cout << "sum is" << sum;
}

void square(int c)
{
 int square = c*c;
 cout << "square is" << square;
}

int main()
{
int a,b,c;
sum(a,b);
 square(c);
return 0;
}
