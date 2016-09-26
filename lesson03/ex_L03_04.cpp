// This exercise is about int & float interaction
//    int <- floating point math(float)
// We are forcing a float into int...this truncates at decimal point(?)

#include <iostream>
using namespace std;

const float pi = 22.0/7;

int main(){
  // FORCE int TYPE HERE...
  int area = 0;
  int circ = 0;

  float radius = 0;
  cout << "Enter the radius of the circle in question: " << endl;
  cin >> radius;
  circ = 2*pi*radius;
  area = pi*(radius*radius);
  cout << "The circumference will be: " << circ << " and the area will be: " << area << endl;

  return (0);
}
