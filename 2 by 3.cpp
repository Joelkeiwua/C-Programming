// C++ Program to Store value entered by user in
// three dimensional array and display it.
#include <iostream>
using namespace std;
int main() {
 // This array can store upto 18 elements (2x3x3)
 int test[2][3][3] = {
 {
 {1, 2},
 {3, 4},
 {5, 6}
 },
{
 {7, 8},
 {9, 10},
 {11, 12}
 },
 {
 {13, 14},
 {15, 16},
 {17, 18}
 }
 };
 // Displaying the values with proper index.
 for (int i = 0; i < 2; ++i) {
 for (int j = 0; j < 3; ++j) {
 for (int k = 0; k < 3; ++k) {
 cout << "test[" << i << "][" << j << "][" << k << "] = " << test[i][j][k]
<< endl;
 }
 }
 }
 return 0;
}
