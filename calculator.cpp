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
void cube(int y)
{
 int cube = y*y*y;
 cout << "cube is" << cube;
}
void subtract(int c, int d)
{
 int subtract = c-d;
 cout<<"ans is"<<subtract;
}
  
 int main()
{
int a,b,c,d,y;
sum(a,b);
subtract(c,d);
square(c);
cube(y);
 return 0;
}
