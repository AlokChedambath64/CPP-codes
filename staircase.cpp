#include <iostream>

using namespace std;

int main() {
  int n;
  do
  {
    cout << "Height: ";
    cin >> n;
  }
  while(n<1||n>8);
//For the rows
  for (int i=0; i<n; i++)
     {
       //For the coloums
       for (int j=n-1; j>i ; j--)
         cout << " ";
       for (int j=0; j<=i ; j++)
         cout << "#";
       cout << "\n";
     }
}
