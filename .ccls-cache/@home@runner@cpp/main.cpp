#include <iostream>
using namespace std;
int main() {
  int number1, number2;
  string operationtor;
  cout << "enter first number" << endl;
  cin >> number1;
  cout << "enter operator" << endl;
  cin >> operationtor;
  cout << "enter second number" << endl;
  cin >> number2;
  if(operationtor=="+"){
    cout << number1+number2;}
  else if (operationtor=="-"){
    cout << number1-number2;}
  else if (operationtor=="*"){
    cout << number1*number2;}
  else if (operationtor=="/"){
    cout << number1/number2;}
  else if (operationtor=="%"){
    cout << number1%number2;}
  else {
    cout << "invalid";
  }
}