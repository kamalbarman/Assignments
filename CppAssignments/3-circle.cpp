#include <iostream>

using namespace std;

class circle{
    
    float radius;
    public:
    void getdata(){
        cout<<"enter radius of circle ";
        cin>>radius;
    }
        float area(){
            return 3.14*radius*radius;
        }
        float parameter(){
            return 2*3.14*radius;
        }
    
};

int main(){
    circle c1;
    c1.getdata();
    cout<<"radius of circle "<<c1.area()<<endl;
    cout<<"perimeter of circle "<<c1.parameter()<<endl;
    return 0;
}