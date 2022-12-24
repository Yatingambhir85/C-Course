#include <iostream>
using namespace std;

int main(){
  int m;
  cout << "Enter marks: ";
  cin >> m;

  if (m>=90){
    cout << "A+ Grade";

  }
  else if(90>m && m>=80){
    cout << "A Grade";
  }
  else if(m<80 && m>=70){
    cout << "B Grade";
  }
  else if(m<70 && m>=60){
    cout << "C Grade";
  }
  else {
    cout << "Fail";
  }

  return 0;


}
