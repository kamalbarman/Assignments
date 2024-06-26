#include <iostream>
#include <cmath>

using namespace std;

class Point
{
private:
    double xordinate;
    double yordinate;

public:
    Point() : xordinate(0), yordinate(0) {}

    Point(double x) : xordinate(x), yordinate(0) {}

    Point(double x, double y) : xordinate(x), yordinate(y) {}

    double dist() const
    {
        return sqrt(xordinate * xordinate + yordinate * yordinate);
    }

    double slope() const
    {
        if (xordinate == 0)
        {
            throw overflow_error("Slope is undefined (vertical line).");
        }
        return yordinate / xordinate;
    }

    friend double distanceBetweenPoints(const Point &p1, const Point &p2);
};

double distanceBetweenPoints(const Point &p1, const Point &p2)
{
    double dx = p1.xordinate - p2.xordinate;
    double dy = p1.yordinate - p2.yordinate;
    return sqrt(dx * dx + dy * dy);
}

int main()
{
    double x1, y1, x2, y2;

    cout << "Enter coordinates for point 1 (x y): ";
    cin >> x1 >> y1;
    Point p1(x1, y1);

    cout << "Enter coordinates for point 2 (x y): ";
    cin >> x2 >> y2;
    Point p2(x2, y2);

    cout << "Distance of p1 from origin: " << p1.dist() << endl;
    cout << "Distance of p2 from origin: " << p2.dist() << endl;

    try
    {
        cout << "Slope of line from origin to p2: " << p2.slope() << endl;
    }
    catch (const overflow_error &e)
    {
        cerr << e.what() << endl;
    }

    cout << "Distance between p1 and p2: " << distanceBetweenPoints(p1, p2) << endl;

    return 0;
}
