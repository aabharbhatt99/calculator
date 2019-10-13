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
void remainder(int m ,int n)
{
int rem = m%n 
cout<<"the remainder is "<<rem;
}
void divide(int a, int b)
{
  cout << "\n\n Divide two numbers and print:\n";
  cout << "----------------------------------\n";
  int resdiv;
  a=30;
  b=10;
  resdiv=a/b;
  cout << " The quotient of "<< a << " and "<<b <<" is : "<< resdiv <<"\n\n" ;	
}

int main()
{
int a,b,c,d;
int y;
int m, n;
sum(a,b);
subtract(c,d);
square(c);
cube(y);
remainder(m,n);
divide(a,b);  
return 0;
}


