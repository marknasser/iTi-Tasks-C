#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>
using namespace std;
int main() {
char firstName[5];
char lastName[5];
char fulllName[15];

cout<<"enter your first name : ";
cin>>firstName;


cout<<"enter your last name : ";
cin>>lastName;

cout<<firstName<<"  "<<lastName<<endl;

strcpy(fulllName,firstName);
strcat(fulllName," ");
strcat(fulllName,lastName);
cout<<fulllName;
    return 0;
}


/* assigmnt 2
// first and last in two seperated arrays
// output the result  with concat the 2 arrays


*/

/*assignment 3



 */
