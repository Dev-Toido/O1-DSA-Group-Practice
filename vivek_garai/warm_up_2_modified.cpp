// 2. Equable Triangle
//     A triangle is said to be an 'Equable Triangle' if the area of the triangle is equal to its perimeter. Write a program to enter three sides of a triangle. Check and print whether the triangle is equable or not.
//     * *Example:* A right-angled triangle with sides 5, 12, and 13 has its area and perimeter both equal to 30.

// Modification: Enter a number n and then find the possible combination of the sides from 1 to n for the equable triangle

#include <iostream>
#include <math.h>
using namespace std;

bool equable_tri(int a, int b, int c)
{
    float area, perimeter;
    perimeter = a + b + c;
    int s = perimeter / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    return (perimeter == area);
}
int main()
{
    int n, a, b, c;
    bool flag = false;
    cout << "Enter the value of n: ";
    cin >> n;
    for (a = 1; a <= n; a++)
    {
        for (b = 1; b <= n; b++)
        {
            for (c = 1; c <= n; c++)
            {
                if (equable_tri(a, b, c))
                {
                    cout << "Equable Triangle for sides (" << a << "," << b << "," << c << ")" << endl;
                    flag = true;
                }
            }
        }
    }
    if (!flag)
    {
        cout << "No equable trinangle in range!" << endl;
    }
    return 0;
}