
#include <iostream>

using namespace std;

int main() {
    int Size, sum=0;
    int *ptr;
    cout<<"how many nums do you have ?";
    cin>>Size;

    ptr = new int[Size];

    if(ptr){
        for(int i=0; i<Size; i++){
        int input;
        cout<<"enter number"<<(i+1)<<" = ";
        cin>> input;
        *(ptr+i)= input;
        sum+=input;
}
cout<<"the sum is = "<<sum;
        delete ptr;
    }else{
        cout<<"some thing went wrong try again !";
    }






    return 0;
}
/*
assignment one
-dynamic size array as an inputs
-input the elements
-the total is(sum)



assignment two


*/
