#include <iostream>

using namespace std;

class student
{
private:
  int studentID;
  string studentName;
public:
  student(int id, string name)
  {
    studentID = id;
    studentName = name;
  }

  display()
  {
    cout<<"StudentID: "<<studentID<<endl;
    cout<<"StudentName: "<<studentName<<endl;
  }

};

int main()
  {
    student stud1(1, "TestStudent");
    student stud2(2, "Stephan");
    student stud3(3, "Mary");
    stud1.display();
    stud2.display();
    stud3.display();
    getchar();
    return 1;
  }
