#include <iostream>
#include<array>
#include <string.h>
#define DAYS 9;

using namespace std;

int Fac(int x);
void Reciver(int x[], int S);
void Swap(int*A,int*B);
void Swap_R(int x, int y);

int main(){
    /*variables*/
    int Num ;
    const int Num1 = 5; //constant var - should be intialized with val
    Num =6;
    cout<<"Enter base Number:\n"<<DAYS;
    cout << "changeable var:" << Num << "_____constant var:" << Num1 << "____constant var with mono or #define:" <<endl;
   /* Data Type */
   int Int = 10; //size 4
   short int Ints =10; // size 2
   long int IntL=10; // size 4
   long long int IntLL =10; // size 8

  // signed;  store positive and negative and 0
  // unsigned; sore positive only

   float fl = 10.5f + 20.5; // size 4
   double dob = 10.5 ;  // size 8

   char a = 'A'; // size 1
   auto b = "A"; // size 8

   bool is_open = true;
   bool test_one = 10 > 5; // 1 size=1
   bool test_two = 10 > 100; // 0  size=1
   bool test_3 = 100; // true = 1
   bool test_4 = -100; // true = 1
   bool test_5 = 0; // false = 0

   // ____ type alias
   //using bignum = long long int;
   typedef long long int bignum;
   bignum my_num = 100001000100;

   /* ____ type converion _____ */
   //[1]implicitly  by the compiler
   int aa;
   double bb = 20.5;
   aa = bb; // the compiler will implictly change the double value to int then assign it to the var

   char c ='C';
   int ic = 20;
   cout<<"the ASCII value of the 'C' char= "<<int(c)<<"\n";//67 the ASCII value of the 'C' char
   cout<<c + ic <<"\n";//67 + 20

   int i = 20;
   double d = 20.5;
   cout<< i + d <<"     size= "<<sizeof(i+d)<<'\n'; //40.5 the result will double

   //[2]explicitly  >> type casting  by the developer
   int g = 20;
   double h = 20.5;
   cout<< g + (int)h <<"     size= "<<sizeof(g + (int)h)<<'\n'; //40 i explicitly change the double to int at specific operation to the result type to be int
   cout<< g + int(h) <<"     size= "<<sizeof(g + int(h))<<'\n'; //40 i explicitly change the double to int at specific operation to the result type to be int

  /* ____ operations ____*/
   cout  << 10 + 10 << "\n";       // int + int = int
   cout  << 10.5 + 10.5 << "\n";   // dob + dob = dob
   cout  << 10.5f + 10.5f << "\n"; // fl + fl = fl

   cout  << 10 + 10.7f << "\n";    // int + fl = fl
   cout  << 10 + 10.7 << "\n";     // int + double = double
   cout  << 10.5f + 10.7 << "\n";  // fl + double = double

   cout  << 12 / 5 << "\n";    // int / int = int = 2
   cout  << 12 / 5.f << "\n";  // int / fl = fl = 2.4

   cout  << int(10.5f + 10.7) << "\n"; // the result will be int

   int ccc=20;
   cout<<"gggggggggggggggg\n";
   cout<< float(ccc/3)<<"\n";// int/ int =int   but the resukt will converse to float
   cout<< (float)ccc/3<<"\n";// f/ int =f   cause we converted ccc to float before the operation

   //int Ia=10; Ia = Ia + 5;   >>>>   Ia +=5;   //assignment

   // int test_in_de_1 = 100;  increment >> test_in_de_1++; decrement >> test_in_de_1--;  test_in_de_1=test_in_de_1 +/- 1;
  /* post-increment  / pre-decrement */
  int test_in_de_2=0 ,test_in_de_3=0 , test_in_de_4=0;

  int holder3 , holder4;
  cout<<test_in_de_2++ <<"\n"; // 0 >> post-increment first the value will display then it will be increased
  cout<<++test_in_de_2 <<"\n"; // 2 >> pre-increment first the value will display then it will be increased

  holder3= test_in_de_3++; // 0 >> first will assign then will increase
  holder4= ++test_in_de_4 ;// 1 >> first will increase then will assign
  //cout<<holder3 <<"\n"<<holder4 <<"\n";


   /* ternanry condition */
int age = 50;
int points = 500;

cout << (age < 40 ? "Age is okay\n":"Age is not okay\n");

cout << (age < 40 ? "Age is okay\n":(points >= 300 ? "okay points":"no age or point"));

/*__________________ array _____________*/
int numss[4]= {100, 200, 300, 400}; // array with C style type

array<int, 4> ArrNum ={100, 200,300, 400}; //  array with Class
ArrNum.front();
ArrNum.back();
ArrNum.at(1);
ArrNum.size();
ArrNum.empty();
ArrNum.back();
ArrNum.fill(10);

// Multi dimintional array
int INT[10]={55,5,5,5};
int INT_TWO[2][3];
int sss=0;
for(int row=0; row<=1; row++){
     for(int col=0; col<=2; col++){
            INT_TWO[row][col]=++sss;
            cout<< INT_TWO[row][col];
     }
     cout<<"\n";
};

char SS[2][6];
for(int row=0; row<=1; row++){
cout<<"enter your first name : ";
cin>>SS[row];
    /* for(int col=0; col<=6; col++){
            cout<<"chars : ";
            cin>>SS[row][col];
     }*/
};
for(int row=0; row<=1; row++){
     for(int col=0; col<=6; col++){
            cout<< SS[row][col];
     }
     cout<<"\n";
};

//char* ARR[]

/* passing array to function: actually we pass the address of the array and we recive it into the func as a pointer */
int ARRRR[5]={1,2,3,4,5};
cout<<sizeof(ARRRR)/sizeof(ARRRR[0])<<endl;//One way​ to find the length of an array is to divide the size of the array by the size of each element (in bytes).
Reciver(ARRRR, sizeof(ARRRR)/sizeof(ARRRR[0]));
cout<<ARRRR<<endl;


/*__________________ string ____________*/
char NN[4]={"ma"};
cout<<NN<<endl;
cout<<"<<<<<<<<<<<<"<<strlen(NN)<<endl;
cout<<"<<<<<<<<<<<<"<<sizeof(NN)/sizeof(NN[0])<<endl;



/* string */
// string length = num of array without the null char
// string size = the reserved size of string
//strcpy()  >> source size <destination length

char name_a[]="Mark";
//cout<< sizeof(name_a); //5
cout<<name_a[3]; // the result will be >>> K

cout<< "\nyou gotta\n\0 dream\n";


char Arr_0[5];
char Arr_1[5]="ma";
char Arr_2[5]="Na";

char Arr_3[15];
cout<<"___"<<strlen(Arr_1)<<endl;
/*
strcat(Arr_0,Arr_1);
cout<<"ccccc___"<<Arr_0<<endl;
cout << strcmp(Arr_1, Arr_2)<<endl;

*/
// string with class
// string is a class that provides us with a string object ( array of charchters)
// and also provides every instance that is created by it with a lot of methods the could help
//
string AAA ="\nasdasd";
cout<<AAA.length()<<" bytes"<<endl;
cout<<AAA.size()<<" bytes"<<endl;
cout<<AAA.max_size()<<endl;

cout<<AAA.max_size()<<endl;
cout<<AAA.max_size()<<endl;
cout<<AAA.max_size()<<endl;
cout<<AAA.max_size()<<endl;
cout<<Fac(10);




/*______Pointer______: is just a variable which holds an address which points to a specific location at the memory*/
cout<<"_____Pointer________\n";
int BishoyMikh = 15;
int GioEmad =30;
cout<< BishoyMikh <<"____"<< GioEmad<<"\n";

int* PtrBishoy;
PtrBishoy = &BishoyMikh;

cout<<(PtrBishoy == &BishoyMikh)<<endl;// the address of the variable and the content of the pointer
cout<<(*PtrBishoy == BishoyMikh)<<endl;//the content of the address which is holded at the pointer
//&BishoyMikh  == PtrBishoy  >> the two are adresses for the same place at memory
Swap(&BishoyMikh, &GioEmad);
cout<< BishoyMikh <<"____"<< GioEmad<<"\n";


float AARR[5]={100,200,300,400,500};
float* AAPTR =AARR; // the array name itself is address of the  first elemnt in the meemory
cout<<AAPTR[0]<<endl;
AAPTR+=1;// the pointer is increaced and decreseed by the unit (float =4) that means the current addres +4 for the next emelent at memmory
cout <<*AAPTR<<endl;
AAPTR-=1; // we have to return the pointer to the first elemnt againg
cout <<*AAPTR<<endl;
*(AAPTR+2)=7.9; // to reassign a value at the array without moving the pointer accross the elements
cout<<*(AAPTR+2)<<endl; // we can use the pointer
cout<<*(AARR+2)<<endl; // and we can use the array name as address also(pointer)

    int Sum=0;
    int ar[5];
    int* ptr;
    ptr=ar;
/*
 for(int i=0; i<=4; i++){
    cout<<"enter element num " <<i+1<<" = \n";
    //cin>>ptr[i]; // pointer as as array
    cin>>*ptr; // pointer as a pointer but we are re-pointing the pointer to multiple addresses
    ptr++;
    //at the end of the loop the pointer will be pointing to an address out of the array
 }
 */
/*
ptr=ar;// re-point the pointer to the first element at the array
 for(i=0; i<5; i++){
    //Sum+=ptr[i];
    Sum+=*ptr;
    ptr++
 }
 */ //or
 /*
 for(ptr--; ptr>=ar; ptr--){
        //or we can looping to the oposite direction
    Sum+=*ptr;
 }
*/



for(int i=0; i<5; i++){
        //we can loop using the pointer as a pointer without re-pointing
     cout<<"enter element num " <<i+1<<" = \n";
     cin>>*(ptr+i);
}
for(i=0; i<5; i++){
    Sum+=*ptr;
 }
cout<<"the sum of the numbers is : "<<Sum<<"\n";


int arr_1[5];
int arr_2[7];
int v;

int *p_1 ,*p_2, *p_3;
p_1=arr_1; p_2=&v; p_3=arr_2;

int *pttr[3];
pttr[0]=arr_1; pttr[1]=&v; pttr[2]=arr_2;


//p_1[3]=9; *(p_1+3)=9;
pttr[0][3]=9; *(pttr[0]+3)=9; *((*pttr)+3)=9;

//p_2[0]=17; *p_2 =17;
pttr[1][0]=17; *(pttr[1])=17; *(*(pttr+1))=17;

//p_3[5]=23; *(p_3+5)=23;
pttr[2][5]=23;  *(pttr[2]+5)=23; *((*(pttr+2))+5)=23;

cout<<arr_1[3]<<"   "<<v<<"   "<<arr_2[5]<<endl;

// the dynamic allocation request

float *ptrrr;
int SIZE;
cout<<"enter array size";cin>>SIZE;
ptrrr=new float[SIZE];// the request to reserve location at the heap
if(ptrrr != NULL){
        for(int n =0; n<SIZE; n++){
            cout<<"enter num "<<n+1<<" : ";
            cin>>*(ptrrr + n);
        }
        for(int n =0; n<SIZE; n++){
            cout<<*(ptrrr + n)<<" ";
        }

delete(ptrrr); // after we have finished the implementation we delete it
}




/* Reference: is an alias name of a var and it must be initialized at the point of declaraion */
int o1=10,o2=20;
int& alias1=o1; int & alias2=o2;
cout<<o1<<"    "<<o2<<endl;
Swap_R(alias1,alias2);
cout<<o1<<"    "<<o2<<endl;

    return 0;

    }//main closing

int Fac(int x){
    int Result =1;
    int Base =1;
    if(x > 1){
        // cout<<"true";
        Result+=x* Fac(x-1);
    }

   return Result;
}

void Reciver(int x[], int y){

    cout<<x<<endl;//the address because x is a pointer to the passed array
    cout<<"size of the passed array"<< sizeof(x)<<endl; // we can't get the size of the passed array within the func cause we just passed a pointer for the array to the func so it will return the size of the pointer
    for (int i=0; i<=(y-1) ;i++){
        cout<<x[i];
    }
    cout<<"   func ends\n";
}



void Swap(int*A,int*B){
    //call by address (pointer)
    int Temp;
    Temp=*A;
    *A=*B;
    *B=Temp;
cout<<"swap func executed\n";
return;
}
void Swap_R(int x, int y){
    //calling by refrence
    int Temp;
    Temp=x;
    x= y;
    y=Temp;
}
/* Languages development
high level language :
    1)linear (sequential) =assembly + enhancements  >>> branching but single file +iteration (Basic)
    2)structure >>> sepreat the program into modules (QBasic, pascal, C)>> teamwork +edit+testing
    3)OOP Based >> (c++, java, c>>property +behviors
*/

//iterpreter function .....fetch>>interprite >>exeute
//Compiled language  ..... Interperted languages
//Errors:syntax error(compiler , linker ), logical error
//pre-processor(complier directive): by which we can include libbrarys which have prototypes that can help the compiler to check & catch the syntax errors

/*varriables rules
    [1]can be num or char or under score
    [2]can't start with num and not prefeferd to start with underscore
    [3]prefered to whrite the names by Camel case & start with Capital letters & decriptive names to thier vals
*/

/* Data Types

char   =>    1   single char
int    =>    2   integer (-32768, 32767)
float  =>    4  (7 nums after comma)
double =>    8  (15 ...)

short int    2
long int     4
long double  10  (32 after comma)

unsigned int  2 (0 , 65535)
unsigned short int  2
unsigned long int   4
*/

/* statments

[1]I/P statments
[2]O/P stamtments
[3]operations
[4]control

*/

// recuirion >> bad memory usage + func call overhead
// loop >> faster + easy to implement
/* opreators
[1] mathmatical [+,-,*,/,%] *modulo % deals only with int
[2] relational
[3] logical
[4] assignment [= , += , -= , /= , %=]
[5] increment / decrement [++ , --]

-operators can be [unary - binary - trinry]
 */
 //scope :the time in which we can use the var

 /*   Recursion
 rules:
    [1] must know the Base Case >>> by witch the condition will get evaluate
    [2] the internal call should be in condition and this condition based on the "base value"

 */
/* operation can't

-assign array to array
-str1 =st2+ st3   >> we can't add
-str==stre1  >> we can't copmare
*/
