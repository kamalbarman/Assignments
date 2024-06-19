#include <iostream>

using namespace std;

class Triangle{

    public:
         int side1=0;
         int side2=0;
         int side3=0;
    
    void getdata(){
        cout <<"enter the side parameters";
        cin >> side1 >> side2 >> side3;
    }

    void calcu(){
        if (side1 == side2 && side2 == side3)
        {
           cout << "It is an equilateral triangle." << endl;
        }else if (side1 == side2 || side1 == side3 || side2 == side3){
             cout << "It is an isosceles triangle." << endl;
        }else{
            cout << "it is a scalene triangle" << endl;
        }
        
    }
   
};
int main(){
    Triangle t1;

    t1.getdata();
    t1.calcu();
}