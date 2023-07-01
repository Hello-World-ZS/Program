#include <iostream>
#include <string>

using namespace std;

int main() {
    char repeat='y';
    Stat1:
        cout<<"Hello World! \n";
        cout<<"repeat again? \n";
        cout<<"Enter char y/n: \n";
        cin>>repeat;
    if(repeat=='y'){
         goto Stat1;
    }
    else{cout<<"GoodBye!";}
}
