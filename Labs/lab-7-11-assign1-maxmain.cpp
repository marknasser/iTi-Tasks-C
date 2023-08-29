#include <iostream>
using namespace std;
int main() {
int a, b, c,d,e,max=-32768, min=32767;



    cout<<"Enter num1:";
    cin>>a;

    cout<<"Enter num2:";
    cin>>b;

    cout<<"Enter num3:";
    cin>>c;

    cout<<"Enter num4:";
    cin>>d;

    cout<<"Enter num5:";
    cin>>e;


    if (a>max) {max=a;}
    if (b>max) {max=b;}
    if (c>max) {max=c;}
    if (d>max) {max=d;}
    if (e>max) {max=e;}

    if (a<min) {min=a;}
    if (b<min) {min=b;}
    if (c<min) {min=c;}
    if (d<min) {min=d;}
    if (e<min) {min=e;}

    cout<<"max:"<<max<<"min:"<<min;



    return 0;
}
