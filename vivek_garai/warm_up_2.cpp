// 2. Equable Triangle
//     A triangle is said to be an 'Equable Triangle' if the area of the triangle is equal to its perimeter. Write a program to enter three sides of a triangle. Check and print whether the triangle is equable or not.
//     * *Example:* A right-angled triangle with sides 5, 12, and 13 has its area and perimeter both equal to 30.

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a,b,c;
    float area,perimeter;

    cout<<"Enter the three sides of the triangle: ";
    cin>>a>>b>>c;

    perimeter=a+b+c;
    int s=perimeter/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    cout<<"Perimeter: "<<perimeter<<endl;
    cout<<"Area: "<<area<<endl;

    cout<<((perimeter==area)?"":"Not ")<<"Equable Triangle"<<endl;
        
    return 0;
}