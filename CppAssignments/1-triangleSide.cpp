#include <iostream>

using namespace std;

class Triangle
{

public:
    int side1 = 0;
    int side2 = 0;
    int side3 = 0;

    void getdata()
    {
        cout << "enter the side parameters : ";
        cin >> side1 >> side2 >> side3;
    }

    bool Isosceles() {
        return (side1 == side2) || (side1 == side3) || (side2 == side3);
    }

    bool Equilateral() {
        return (side1 == side2) && (side2 == side3);
    }
};
int main()
{
    Triangle t1;

    t1.getdata();

    if (t1.Equilateral()) {
        cout << "Equilateral" << endl;
    } else if (t1.Isosceles()) {
        cout << "Isosceles" << endl;
    } 
  
    return 0;
}