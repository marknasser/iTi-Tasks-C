#include <iostream>
using namespace std;
int main() {
int Max, Min,Total=0;
int Arr[5];

for(int i=0 ; i<5 ; i++){
    cout<<"Enter num"<<i+1<<": ";
    cin>>Arr[i];
    if(i == 0){
             Max=Arr[0];
             Min=Arr[0];
    }


    if (Arr[i]>Max) {Max=Arr[i];}
    if (Arr[i]<Min) {Min=Arr[i];}
    Total= Total +Arr[i];

};
    cout<<"max:"<<Max<<" min:"<<Min<<" Avg:"<<Total/5;



    return 0;
}
