#include<iostream>

using namespace std;

class Triangle {
    private:
        int side1;
        int side2;
        int side3;
    public:
        Triangle(int s1, int s2,int s3)
	{
        side1 = s1;
        side2 = s2;
        side3 = s3;
		
	}
void getdata(){
    cout<<"enter the lengths of sides"<<endl;
    cin>>side1>>side2>>side3;
}

bool  isosceles(){
    return(side1==side2 || side1==side3 || side2==side3);
}

bool equilateral(){
    return(side1==side2 && side1==side3);
}

};
int main(){

    Triangle t1(0,0,0);

    t1.getdata();


    if (t1.isosceles()) {
        cout << "The triangle is isosceles." << endl;
    } else {
        cout << "The triangle is not isosceles." << endl;
    }

    if (t1.equilateral()) {
        cout << "The triangle is equilateral." << endl;
    } else {
        cout << "The triangle is not equilateral." << endl;
    }
  
return 0;
}