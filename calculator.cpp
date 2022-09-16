#include<iostream>
using namespace std;

void sum(int a, int b);
void square(int c);
void cube(int y);
void subtract(int c, int d);
void remainder(int m ,int n);
void divide(int a, int b);
void reverse(int n);
void factorial(int n);

int main()
{
int a,b,c,d;
int y;
int m, n;
sum(a,b); // сложение
subtract(c,d); // вычитание
square(c); // возведение в квадрат
cube(y); // возведение в куб
remainder(m,n); // нахождение остатка
divide(a,b); // деление
reverse(n); // реверс числа
factorial(n); // факториал
  
return 0;
 }

void sum(int a, int b) // функция сложения
{
 int sum = a+b; // присваиваем переменной операцию сложения
 cout << "sum is" << sum; // вывод полученного ответа
}
void square(int c) // функция возведения в квадрат
{
 int square = c*c; // присваиваем переменной операцию возведения в квадрат
 cout << "square is" << square; // вывод полученного ответа
}
void cube(int y) // функция возведения в куб
{
 int cube = y*y*y; // присваиваем переменной операцию возведения в куб
 cout << "cube is" << cube; // вывод полученного ответа
}
void subtract(int c, int d) // функция вычитания
{
 int subtract = c-d; // присваиваем переменной операцию вычитания
 cout<<"ans is"<<subtract; // вывод полученного ответа
}
void remainder(int m ,int n) // функция нахождения остатка
{
int rem = m%n // присваиваем переменной операцию нахождения остатка
cout<<"the remainder is "<<rem; // вывод полученного ответа
}

void divide(int a, int b) // функция деления
{
cout << "\n\n Divide two numbers and print:\n"; 
cout << "----------------------------------\n";
int a;
int b;
int resdiv;
a=30; // ввод первого делителя ( автор решил не делать ввод через клавиатуру )
b=10; // ввод второго делителя
resdiv=a/b; // присваиваем переменной операцию деления
cout << " The quotient of "<< a << " and "<<b <<" is : "<< resdiv <<"\n\n" ; // вывод полученного ответа
return 0;
}
void reverse(int n) // функция реверса чисел (меняет последовательность)
{
    int n, reverse = 0, remainder;
    printf("Enter any number: "); // ввод чисел
    scanf("%d", &n); // считывает целые числа
    while(n != 0)
    {
        remainder = n%10; // находим остаток от числа
       reverse = reverse*10 + remainder;  
        n /= 10;
    }
    printf("Reversed Number = %d", reverse); // вывод полученного ответа
    return 0;	
}
void factorial(int n) // функция нахождения факториала числа
{
	int n, i, factorial;
    factorial = 1; 
    printf("Enter an integer: "); // ввод числа
    scanf("%d",&n); // считываем целые числа
    
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist."); // условие при котором программа выдаст ошибку (если введеное число меньше нуля)
    else
    {
        for(i=1; i<=n; ++i) // нахождение факториала через цикл for 
        {
            factorial *= i;            
        }
        printf("Factorial of %d = %llu", n, factorial); // вывод полученного ответа
    }
    return 0;
}
