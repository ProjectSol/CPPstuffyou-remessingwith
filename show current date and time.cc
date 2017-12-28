#include <iostream>
#include <stdio.h>
#include <string>
#include <time.h>

const std::string ShowCurrentDateTime(){
  time_t now = time(0);
  struct tm tstruct;
  char buf[80];
  tstruct = *localtime(&now);
  strftime(buf,sizeof(buf),"%Y-%m-%d.%X", &tstruct);
  return buf;
}

int main()
{
  std::cout<<"ShowCurrentDateTime()="<<ShowCurrentDateTime()<<std::endl;
  getchar();
  return 0;
}
