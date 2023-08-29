#include<iostream>
using namespace std;

class Admain{
    static int Count;
public:
  static auto GetMeAnAdmine(){
       if(Count<1){
               cout<<"the Admine number "<<Count + 1<<" has been created sucessfully\n";
           return Admain();
       }else{
       cout<<"u have to pay for more than "<<Count <<" Admine objects";
       }
    }

    static int GetMeTheC(){
        return Count;
    }
private:
   Admain(){
       Count++;
   }
};
int Admain::Count = 0;

int main(){



cout<< Admain::GetMeTheC() <<endl; //print the count
Admain::GetMeAnAdmine(); //create
cout<< Admain::GetMeTheC() <<endl;
Admain::GetMeAnAdmine();


return 0;
}
