#include <iostream>

using namespace std;

class Triangle
{
private:
    int side1;
    int side2;
    int side3;

public:
    Triangle(int s1 = 0, int s2 = 0, int s3 = 0)
    {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }
    void getdata()
    {
        cout << "enter the  length of three sides :->" << endl;
        cin >> side1 >> side2 >> side3;
    }

    bool isosceles()
    {
        return (side1 == side2 || side1 == side3 || side2 == side3);
    }

    bool equilateral()
    {
        return (side1 == side2 && side1 == side3 && side2 == side3);
    }
};

int main()
{

    Triangle t1;

    t1.getdata();

    if (t1.isosceles())
    {
        cout << "the triangle is isosceles." << endl;
    }
    else
    {
        cout << "the triangle is not isosceles." << endl;
    }

    if (t1.equilateral())
    {
        cout << "the triangle is equilateral." << endl;
    }
    else
    {
        cout << "the triangle is not equilateral." << endl;
    }

    return 0;
}