
#include <iostream>
#include <stdio.h>
#include <string.h>



using namespace std;
class Student{
private:
    int id;
    char name[20];
    //char* nam2;
    static int Count;//class variable

public:
    Student(){//defalut constractor
        id =0;
        strcpy(name , "Mark");
        //name="asdasds" we can't do it
        Count++;
    }
    Student(int i){
        id =i;
        Count++;
    }

    Student(char n[20] ){
        strcpy(name , n);
        Count++;
    }

    Student(int i ,char n[20] ){
        id=i;
        strcpy(name , n);
        Count++;
    }

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
    static int GetCount(){
        return Count;
    }

};
class MathST:public Student

int Student::Count=0;




int main() {

 Student st1;
 char* ggg;

 //st1.SetId(50);
 st1.SetName("Mark");cout<< st1.getName();st1.getId();

 Student st2(50);
cout<<st2.getId();
cout<<endl;

/* ggg=st1.getName();
 cout<<ggg;*/
 cout<< st2.GetCount();
 cout<< st1.getId();
    return 0;
}
/*


assignment two


*/
