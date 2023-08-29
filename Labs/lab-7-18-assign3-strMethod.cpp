#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>
using namespace std;
int main() {
char firstName[5];
char lastName[5];

cout<<"enter your first name : ";
cin>>firstName;


cout<<"enter your last name : ";
cin>>lastName;

if(strcmp(firstName, lastName) == 0){
    cout<<"the 2 are identical";
}else{
cout<<"the 2 are diffrent";
}


    return 0;
}


