#include <iostream>
#include <cmath>
using namespace std;
int main() {

 int Size,row= 1,col;

do {
 cout<<"Please enter an odd number but not 1:";
 cin>>Size;
 col=(Size+1)/2;
}while (Size % 2 == 0 || Size==1);


cout<<"num1__"<<"row:"<<row<<"_col:"<<col<<endl;

for ( int num=2; num<=Size*Size; num++){
  if((num-1)%Size!=0){//there is a reminder
       row--;
       col--;
       if(row<1){row=Size;}
       if(col<1){col=Size;}
    }
    else{// no reminder
        row++;
        if(row>Size){row=1;}
    }
cout<<"num"<< num<<"__row:"<<row<<"_col:"<<col<<endl;

}
    return 0;
}
