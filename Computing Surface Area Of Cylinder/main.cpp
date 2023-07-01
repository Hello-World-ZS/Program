#include <iostream>
#define Pi 3.1415926

using namespace std;

int SurfaceArea();

int main() {
    SurfaceArea();
    return 0;
}
int SurfaceArea(){
    double Radius=0;
    double Height=0;
    cout<<"Please Enter Radius Of Cylinder: \n";
    cin>>Radius;
    cout<<"Please Enter Height Of Cylinder: \n";
    cin>>Height;
    double SurfAceArea=2*Pi*Radius*Height+2*Pi*Radius*Radius;
    cout<<"The Surface Area: \n";
    cout<<SurfAceArea<<endl;
    return 0;
}