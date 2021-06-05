/*
write a program for arithematic operation using c++?

Input Format

500 100

Constraints

Need to write 4 functions.. Any one of the function should define outside the class.

Output Format

addition:600 subtraction:400 Multiplication:50000 division:5

Sample Input 0

500
100
Sample Output 0

addition:600
subtraction:400
Multiplication:50000
division:5
Sample Input 1

200
100
Sample Output 1

addition:300
subtraction:100
Multiplication:20000
division:2
Sample Input 2

10
4
Sample Output 2

addition:14
subtraction:6
Multiplication:40
division:2

*/


#include<iostream>

using namespace std;

int main()

{

    int Num1, Num2;
    
    cin >> Num1 >> Num2;
    
    cout << "addition:" << Num1 + Num2 << endl;

    cout << "subtraction:" << Num1 - Num2 << endl;

    cout << "Multiplication:" << Num1 * Num2 << endl;
    
    cout << "division:" << Num1 / Num2 << endl;
    
    return 0;

}