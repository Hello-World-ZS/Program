#include <iostream>
#define Pi 3.1415926

using namespace std;

double Area(double Radius);

double Area(double Radius,double Height);

int main() {
    double Radius=0;
    char UserSelection = 'z';
    cout<<"Enter z For Cylinder,c For Circle: \n";
    cin>>UserSelection;
    cout<<"Please Enter Radius: \n";
    cin>>Radius;
    if(UserSelection == 'z')
    {
        double Height = 0; 
        cout<<"Please Enter Height For Cylinder: \n";
        cin>>Height;
        cout<<"The SurfaceArea Of Cylinder is : \n";
        cout<<Area(Radius,Height);
    }
    else
    {
        cout<<"The Area Of Circle is : \n";
        cout<<Area(Radius);
    }
    return 0;

}
double Area(double Radius){
    return Pi*Radius*Radius;
}

double Area(double Radius,double Height){
    return 2*Pi*Radius*Height+2*Pi*Radius*Radius;
}