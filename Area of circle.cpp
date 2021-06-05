/*
C++ program to find the area of a circle using class and object

Input Format

3

Constraints

-

Output Format

Area of circle is:28.26

Sample Input 0

3
Sample Output 0

Area of circle is:28.26
Sample Input 1

5
Sample Output 1

Area of circle is:78.5

*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Test 
{
    public:
    float r, area;
    void input()
    {
        cin >> r;

    }

    void findArea()
    {
        area = 3.14 * r * r;
    }

    void display() 
    {
        cout << "Area of circle is:" << area;
    }
};

int main() 
{

    Test obj;

    obj.input();
    obj.findArea();
    obj.display();

    return 0;
}