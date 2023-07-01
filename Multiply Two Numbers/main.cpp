#include <iostream>

using namespace std;

void TwoMutiply(){
    int FirstNum=0;
    int SecondNum=0;
    cout<<" Enter Two Numbers To Mutiply\n";
    cout<<" Enter The First Number \n";
    cin>>FirstNum;
    cout<<" Enter The Secoend Number \n";
    cin>>SecondNum;
    int Multiplication=FirstNum*SecondNum;
    cout<<" Multiplication Result: \n"; 
    cout<<FirstNum<<" x "<<SecondNum<<" = "<<Multiplication<<endl;
    
}

int main() {

    TwoMutiply();

}
