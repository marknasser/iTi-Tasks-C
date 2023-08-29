#include <iostream>
#include <cmath>
using namespace std;
int Power( int BaseNum, int PowerNum);
int main() {
    int BaseNum, PowerNum;
cout<<"Enter base Number:"<<endl;cin>>BaseNum;
cout<<"Enter power Number:"<<endl;cin>>PowerNum;

cout<<Power(BaseNum, PowerNum);
    return 0;
}

int Power( int BaseNum, int PowerNum){
    int Result=1;
    if(PowerNum>0){
        Result=BaseNum*pow(BaseNum, PowerNum-1);
    }
 return Result;
}
