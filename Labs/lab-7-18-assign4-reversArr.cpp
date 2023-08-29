#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>
using namespace std;
int main() {
char str[5];

char arr[5]={'a','a','a','a','a'};
cout<<arr<<"\n";
cout<<"enter a word : ";
cin>>str;

cout<<"the reversed word is :";
for(int i=4; i>=0; i--){
    cout<<str[i];
}


    return 0;
}


