
#include <iostream>
#include <stdio.h>
#include <string.h>


using namespace std;
class Student{
private:
    int id;
    char name[20];
    char* nam2;

public:
    void SetId (int x){
        id=x;
    }
    void SetName (char x[]){
      strcpy(name , x);
    }
    char* getName(){ //we return pointer
        return name;
    }

    int getId(){
        return id;
    }
};




int main() {
 Student st1,st2;
 char* ggg;

 st1.SetId(50);
 st1.SetName("Mark");
 cout<< st1.getName();
 st1.getId();

 st2.SetId(51);
 st2.SetName("Ahmed");
 st2.getName();
 st2.getId();

  cout<<endl;

 ggg=st1.getName();
 cout<<ggg;
    return 0;
}
/*


assignment two


*/
