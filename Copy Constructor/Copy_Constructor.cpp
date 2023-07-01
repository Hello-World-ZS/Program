#include <iostream>
#include <algorithm>
using namespace std;

 class MyBuffer
 {
 private:
 int* myNums;
 unsigned int bufLength;

 public:
 MyBuffer(unsigned int length)
 {
 bufLength = length;
 cout << "Constructor allocates "<< length << "integers" << endl;
 cout <<"zs1:"<<&bufLength<<endl;
 myNums = new int[length]; // allocate memory
 }

 MyBuffer(const MyBuffer& src) // copy constructor
 {
 cout << "Copy constructor creating deep copy" << endl;
 bufLength = src.bufLength;
 cout <<"zs2:"<<&bufLength<<endl;
 cout <<"zs3:"<<&src.bufLength<<endl;
 cout<<"zs4:"<<&src<<endl;
 cout<<"zs5:"<<this<<endl;
 myNums = new int[bufLength];
 copy(src.myNums, src.myNums + bufLength, myNums); // deep copy
 }

 ~MyBuffer()
 {
 cout << "Destructor releasing allocated memory" << endl;
 delete[] myNums; // free allocated memory
 }

 void SetValue(unsigned int index, int value)
 {
 if (index < bufLength) // check for bounds
 *(myNums + index) = value;
 }

 void DisplayBuf()
 {
 for (unsigned int counter = 0; counter < bufLength; ++counter)
 cout << *(myNums + counter) << "";

 cout << endl;
 }
 };

 void UseMyBuf(MyBuffer copyBuf)
 {
 cout << "Displaying copy of buf: "<< endl;
 copyBuf.DisplayBuf();
 cout<<"zs6:"<<&copyBuf<<endl;
 }

 int main()
 {
 cout << "How many integers would you like to store? ";
 unsigned int numsToStore = 0;
 cin >> numsToStore;

 MyBuffer buf(numsToStore);
 for (unsigned int counter = 0; counter < numsToStore; ++counter)
 {
 cout << "Enter value: ";
 int valueEntered = 0;
 cin >> valueEntered;
 buf.SetValue(counter, valueEntered);
 }

 cout << "Numbers in the buffer buf: ";
 buf.DisplayBuf();
 UseMyBuf(buf); // function receives a deep copy of buf
 cout<<"zs7:"<<&buf<<endl;
 system("pause");

 return 0; // no crash, at destruction of buf
}
