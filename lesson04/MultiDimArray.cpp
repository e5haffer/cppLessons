#include <iostream>
using namespace std;

int main(){
  // syntax is TYPE arrayName[Rows][Cols]
  // the single foward slash \ is for wrap-around lines
  int ThreeRowsThreeCols[3][3] =  \
  {{-501,206,2011},{989,101,206},{303,456,596}};

  cout << "Row 0: " << ThreeRowsThreeCols[0][0] << " " \
                    << ThreeRowsThreeCols[0][1] << " " \
                    << ThreeRowsThreeCols[0][2] << endl;

  cout << "Row 1: " << ThreeRowsThreeCols[1][0] << " " \
                    << ThreeRowsThreeCols[1][1] << " " \
                    << ThreeRowsThreeCols[1][2] << endl;

  cout << "Row 2: " << ThreeRowsThreeCols[2][0] << " " \
                    << ThreeRowsThreeCols[2][1] << " " \
                    << ThreeRowsThreeCols[2][2] << endl;

  return 0;
}
