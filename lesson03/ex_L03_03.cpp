#include <iostream>
using namespace std;

const float pi = 22.0/7;

int main(){
  float area = 0;
  float circ = 0;
  float radius = 0;
  cout << "Enter the radius of the circle in question: " << endl;
  cin >> radius;
  circ = 2*pi*radius;
  area = pi*(radius*radius);
  cout << "The circumference will be: " << circ << " and the area will be: " << area << endl;

  return (0);
}
