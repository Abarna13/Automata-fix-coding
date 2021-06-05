/*
Complete the following code in C++ to calculate the area and the volume of the room.

Input Format

-

Constraints

-

Output Format

Area of Room = 1309 Volume of Room = 25132.8

Sample Output 0

Area of Room =  1309
Volume of Room =  25132.8

*/



#include <bits/stdc++.h>
using namespace std;

int main()
{
     
class Room 
{

   public:
    double length;
    double breadth;
    double height;

    double calculateArea() 
    {
        return length * breadth;
    }

    double calculateVolume() 
    {
        return length * breadth * height;
    }
};

    // create object of Room class
    Room room1;

    // assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}