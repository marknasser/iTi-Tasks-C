#include <iostream>
using namespace std;
//functions prototypes
int Add(int x, int y);
int Sub(int x,int y);
int Multiply(int x , int y);
float Divide(float x , float y);

int main() {
    int ChossenNum;
    int A,B;
     //cout<<(1==1)<<endl;

    do{
        cout<<"1.Add"<<endl<<"2.Sub"<<endl<<"3.Multiply"<<endl<<"4.Divide"<<endl<<"5.Exit"<<endl;cin>>ChossenNum;

    if (ChossenNum>0 && ChossenNum<5){ //if ChossenNum is at the range 1-4 only
        cout<<"enter num One :";cin>>A;
        cout<<"enter num Two :";cin>>B;
    }

        switch(ChossenNum){
        case 1:
            cout<<"The sum is "<<Add(A,B)<<endl;
            break;
        case 2:
            cout<<Sub(A,B)<<endl;
            break;
        case 3:
            cout<<Multiply(A,B)<<endl;
            break;
        case 4:
            cout<<Divide(A,B)<<endl;
            break;
        };

    }while( ChossenNum != 5); // keep loop if input not 5
    return 0;
}
// function implemntion
int Add(int x, int y){return x+y;}
int Sub(int x, int y){return x-y;}
int Multiply(int x , int y){return x*y;}
float Divide(float x , float y){return x/y;}


