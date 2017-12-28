#include <iostream>
#include <conio.h>

using namespace std;

float c,f;

int main()
{
  cout<<"This program converts Fahrenheit to Celsius\n"<<endl;
  cin >> f;
  c = (f-32)/1.8;
  cout<<"The value of Fahrenheit is '"<<f<<"' This converts to '"<<c<<"' Celsius";
  getch();
  return 0;
}
