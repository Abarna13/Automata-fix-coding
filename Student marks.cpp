/*
Write a C++ program to create class to get the name,register number,and total marks out of 500 and print percentage of a student from given marks

Input Format

ABY 1234 400

Constraints

-

Output Format

perc:80

Sample Input 0

ABY
1234
400
Sample Output 0

perc:80
Sample Input 1

XYZ
6789
450
Sample Output 1

perc:90

*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class student
{
    private:
        char  name[30];
        int   rollNo;
        int   total;
        float perc;
    public:
        
        void getDetails(void);
       
        void putDetails(void);
};


void student::getDetails(void){
   
    cin >> name;
    
    cin >> rollNo;
   
    cin >> total;
    
    perc=(float)total/500*100;
}


void student::putDetails(void){
    
    cout << "perc:" << perc;
}

int main()
{
    student std;        
    
    std.getDetails();
    std.putDetails();
    
    return 0;
}