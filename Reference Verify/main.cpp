#include <iostream>

using namespace std;

int main() {
    
    int Variable1 = 30;
    const int& Reference1 = Variable1;
    Variable1 =60;
    cout<<"Reference1 Value: \n";
    cout<<Reference1<<'\n';
    cout<<"Reference1 Adress: \n";
    cout<<&Reference1<<'\n';

    cout<<"Variable1 Value: \n";
    cout<<Variable1<<'\n';
    cout<<"Variable1 Adress: \n";
    cout<<&Variable1<<'\n'<<endl;
    return 0;

}
