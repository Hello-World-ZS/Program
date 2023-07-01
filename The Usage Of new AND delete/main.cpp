#include <iostream>

using namespace std;

int main() {
    int NumEntris = 0;
    cout<<"How Much Integrets You Wish To Store: \n";
    cin>>NumEntris;
    int* PointedIntegersPointer = new int [NumEntris];

    //Output The Initial PointedIntegersPointer Of Adress. 
    cout<<"The Initial PointedIntegersPointer Adress: \n";
    cout<<hex<<PointedIntegersPointer<<'\n';

    /*The Pointer Still Stay Here The Initial Position Of Arry,
    Because We Adapted The Pointer+Offset Way To Access The Variable.*/ 
    for(int i=0;i<NumEntris;i++)
        {
            cout<<"Please Enter Your Integrets That You Wish To Store Number: "<<i<<'\n';
            cin>>*(PointedIntegersPointer+i);
        }
      
    cout<<"Output The  Secoend PointedIntegersPointer Adress: \n";
    cout<<hex<<PointedIntegersPointer<<'\n';
    for(int i=0;i<NumEntris;i++)
        {
            cout<<"Your Stored "<< i<<" Elements is: \n";
            cout<<*(PointedIntegersPointer++)<<'\n';
        }

    /*Make The Pointer Back To The Initial Position Of Arry，
    Because We Adapted The Pointer++ Way To Access The Variable. 
    This Way Make The Pointer Arrived The Top Of Arry.*/

    cout<<"Output The Third PointedIntegersPointer Adress: \n";
    cout<<hex<<PointedIntegersPointer<<'\n';

    PointedIntegersPointer -= NumEntris;
    cout<<"Output The Fourth PointedIntegersPointer Adress: \n";
    cout<<hex<<PointedIntegersPointer<<'\n'<<endl;
    delete[] PointedIntegersPointer;
    return 0;
}
