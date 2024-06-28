#include <iostream>

using namespace std;

class Counter
{
private:
    static int count;

public:
    Counter()
    {
        ++count;
    }

    ~Counter()
    {
        --count;
    }

    static int getCount()
    {
        return count;
    }
};

int Counter::count = 0;

int main()
{
    cout << "Initial count: " << Counter::getCount() << endl;

    Counter obj1;
    cout << "Count after creating obj1: " << Counter::getCount() << endl;

    Counter obj2;
    cout << "Count after creating obj2: " << Counter::getCount() << endl;

    {
        Counter obj3;
        cout << "Count after creating obj3: " << Counter::getCount() << endl;
    }

    cout << "Count after obj3 is destroyed: " << Counter::getCount() << endl;

    return 0;
}
