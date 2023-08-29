#include <iostream>
#include <cmath>
using namespace std;
int main() {
 float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;



    cout<<"PLease entar an odd number but more than 1:";
    cin>>a;

    cout<<"Enter num2:";
    cin>>b;

    cout<<"Enter num3:";
    cin>>c;

    discriminant = pow(b,2) - 4*a*c;
   cout<<discriminant;

    if(discriminant >0){


     x2 = (-b + sqrt(discriminant)) / (2*a);
     x1 = (-b - sqrt(discriminant)) / (2*a);

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;}


    if(discriminant ==0){
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;}



    if(discriminant <0){
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);

        cout << "results are different."  << endl;
        cout << "x1 = "<< "realPart=" << realPart << "   "  << "imaginary="<< imaginaryPart << endl;
        cout << "x2 = "<< "realPart=" << realPart << "   "  << "imaginary="<< imaginaryPart << endl;}





    return 0;
}
