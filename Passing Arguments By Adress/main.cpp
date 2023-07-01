#include <iostream>
#define Pi 3.1415926

using namespace std;

int Area(double Radius,double& Result);

int main() {
    double Result=0;
    double Radius=0;
    cout<<"Please Enter Radius For Circle: \n";
    cin>>Radius;
    Area(Radius,Result);
    cout<<"The Circle Area is: \n";
    cout<<Result;
}

int Area(double Radius,double& Result){
    Result = Pi*Radius*Radius;
    return 0;
}