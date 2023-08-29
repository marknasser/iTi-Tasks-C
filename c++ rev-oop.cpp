#include<iostream>
#include<string.h>
   // speed/price/counter
   // accelerate / lisence
using namespace std;

  class Car{
      static int COUNT;
protected:
      int speed;
      char lisence[4];
public:
    void SetAccelerate(int x){
        speed+=x;
    }

    int GetSpeed(){
       return speed;
    }

    void SetLisence(char x[]){
        strcpy(lisence, x);
    }

    char* GetLisence(){
       return lisence;
           }


    static int GetCOUNT(){
       return COUNT;
    }

    Car(){
       COUNT++;
       speed=0;
       strcpy(lisence, "NO");
    }

};

class BMW:public Car{
    char modle[10];

public:

    BMW(){
        strcpy(modle,"Default");
    }

    BMW(char x[]){
        strcpy(modle,x);
    }

    char* GetModel(){
         return modle;
    }

    void SetAccelerate(){
        speed*=2;
    }

};

int Car::COUNT=0;

int main(){
Car car_1;

BMW car_bmw_1;
BMW car_bmw_vx("BMW_VX");

cout<<car_bmw_1.GetModel()<<endl;
cout<<car_bmw_vx.GetModel()<<endl;
cout<<Car::GetCOUNT()<<endl;


return 0;
}
