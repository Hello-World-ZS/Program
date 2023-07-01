#include <iostream>
#define  Pi 3.1415926

using namespace std;

double Circumference(double radius);

double Area(double radius);

int main() {
    double Radius=0;
    cout<<"Please Enter The Radius Of Circle: \n";
    cin>>Radius;
    cout<<Area(Radius)<<"\n";
    cout<<Circumference(Radius)<<"\n"<<endl;
    return 0;
}
double Circumference(double radius){
    cout<<"The Circumference Of Circle: \n";
    double Circumference = radius*radius*Pi;
    return  Circumference;
}
double Area(double radius){
    cout<<"The Area Of Circle: \n";
    double Area =2*radius*Pi;
    return Area;
}