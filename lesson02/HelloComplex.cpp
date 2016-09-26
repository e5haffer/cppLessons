// preprocessor directive that includes header 'iostream'
// note the syntax for comments
/* this is a comment
   as well spanning
   multiple lines
*/
#include <iostream>

int main(){
  /* hereafter 'cout' can be called directly rather than std::cout  */
  using namespace std;

  /* "Hello World!" with quotes inclusive is a 'string literal' */
  cout << "Hello World!" << endl;
  return 0;
}
