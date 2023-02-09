#include <iostream>
#include <string>

using namespace std;

class MyClass {       
  public:             
    int myNum;        
    string myString;  
};

int main() {
  MyClass mystruct;  


  mystruct.myNum = 15;
  mystruct.myString = "Some text";

  cout << mystruct.myNum << "\n"; 
  cout << mystruct.myString; 
  return 0;
}
