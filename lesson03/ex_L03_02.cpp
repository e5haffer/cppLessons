#include <iostream>
using namespace std;

int main(){
cout << "The size of an unsigned integer is: " << sizeof(unsigned int) << endl;
cout << "The size of an normal integer is: " << sizeof(int) << endl;
cout << "The size of a long integer is: " << sizeof(long) << endl;

cout << "A normal integer and an unsigned integer are of equal size: " << (sizeof(int) == sizeof(unsigned int)) << endl;
cout << "A normal integer is <= than a long integer: " << (sizeof(int) <= sizeof(long int)) << endl;
cout << "An unsigned integer is <= than a long integer: " << (sizeof(unsigned int) <= sizeof(long)) << endl;

return 0;
}
