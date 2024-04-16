#include <iostream>

using namespace std;

class Employee
{
private:
    int empno;
    char ename[20];
    float basic, hra, da;

public:
    void getdata()
    {
        cout << "enter empno : ";
        cin >> empno;
        cout << "enter ename : ";
        cin >> ename;
        cout << "enter basic,hra,da : ";
        cin >> basic >> hra >> da;
    }
    float calculate()
    {
        return basic + hra + da;
    }
    void display()
    {
        getdata();
        cout << "empno is " << empno << endl;
        cout << "ename is " << ename << endl;
        cout << "net pay is " << calculate() << endl;
    }
};
int main()
{
    Employee e1;
    e1.display();
    return 0;
}