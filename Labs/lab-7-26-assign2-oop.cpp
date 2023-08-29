#include <iostream>

using namespace std;

class Person //parent
{
protected:
  int id;
  char name [50];
public:
    Person(){
        id=0;
    }
    Print(){
        cout<<"ID = "<<id;
    }

};

  class Employee:public Person{
  public:
    int Salary;

  Employee(){
      Salary=10000;
  }

  Employee(int S,int i, char n[]){
      id=i;
      str
  }

  int GetId(){
     return id;
  }

  Print(){
        cout<<"\nID = "<<id;
    }
  };


  class Customer:public Person{
      char PhoneNum [12];
      Customer
  };



int main(){
    Employee Ahmed;
    cout<< Ahmed.Salary;
    cout<< Ahmed.GetId();

     Employee Mark(50);
     Mark.Print();
    return 0;
}

//Person >> parent  (id,name)
// emplee from person (salery)
//Customer from person (phone number)
