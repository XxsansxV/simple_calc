#include <iostream>
using namespace std;//lightens stuff(less lines)
int main() {
  double number1, number2;
  string operationtor;//variable setup
  cout << "enter first number" << endl;
  cin >> number1;
  cout << "enter operator(/,*,+,-,**)" << endl;
  cin >> operationtor;
  cout << "enter second number" << endl;
  cin >> number2;
  double result;
  string invalidstate = "j";
  if(operationtor=="+"){
    result = number1+number2;
    cout << result << endl;}
  else if (operationtor=="-"){
    result = number1-number2;
    cout << result << endl;}
  else if (operationtor=="*"){
    result = number1*number2;
    cout << result << endl;}
  else if (operationtor=="/"){
    result = number1/number2;
    cout << result << endl;}
  else if (operationtor=="**"){
    result = number1*number1*number2;
    cout << result << endl;}
  else {
    cout << "invalid";
    invalidstate="imvalid";}
  if (invalidstate!="imvalid"){
  cout << "press r to see result again" << endl;
  string keyinput;
  cin >> keyinput;
  if (keyinput=="r") {
     cout << result << endl;
   }
  }
}