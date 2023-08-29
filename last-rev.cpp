#include<iostream>
#include<cmath>
#include<string.h>

using namespace std;
int Add(int A, int B);
int Sub(int A, int B);
int Multiply(int A, int B);
float Divide(float A, float B);
float Power(float BaseN,float PowerN);
void Swap(int* A,int* B);

class Complex{
private:
    int Real;
    int Imag;
    static int Count;
public:
    void SetReal(int A){Real=A;}
    void SetImag(int B){Imag=B;}

    int GetReal(){ return Real;}
    int GetImag(){return Imag;}
    static int GetCount(){return Count;}

    Complex Add(Complex C);
    void Print();
    Complex(){Real=Imag=0; Count++;}
    Complex(int x){Real=Imag=x; Count++;}
    Complex(int x,int z);
    ~Complex(){Count--;};//destructor

};
Complex Complex::Add(Complex C){
    Complex Temp;
    Temp.Real=Real + C.Real;
    Temp.Imag=Imag + C.Imag;
    return Temp;
}
void Complex::Print(){
    cout<<"Real is : "<<Real<<"\n";
    cout<<"Imag is : "<<Imag<<"\n";
}

Complex::Complex(int x, int z){Real=x;Imag=z; Count++;};
int Complex::Count=0;


/*Complex Complex::Add(Complex C){
    Complex Temp;
    Temp.SetReal(Real + C.GetReal());
    Temp.SetImag(Imag + C.GetImag());
    return Temp;
}*/

class Student{
private:
    int Id;
    char Name[20];
    char *Name2;
public:
    void SetId(int A){Id=A;}
    void SetName(char A[]){strcpy(Name,A);}
    void SetName2(char A[]){
        Name2=new char[strlen(A)+1];
        if(Name2 != NULL){
            strcpy(Name2, A);
            //delete Name2; >> i can't do it i need it at Getter method
        }
        ;}

    int GetId(){return Id;}
    char* GetName(){return Name;}
    char* GetName2(){return Name2;}
};

class Person{
    static int Count;
protected:
    int Id;
    char Name[20];
public:
    int GetId(){return Id;}
    char* GetName(){return Name;}
    Person(){Id=0; strcpy(Name,{"Person"}); Count++;}
    Person(int x,char str[]){Id=x; strcpy(Name,str); Count++;}
    void Details(){cout<<"Person Details ___ id: "<<Id<<" , Name: "<<Name<<endl;}
};
int Person::Count=0;


class Employee:public Person{
private:
    int Salary;
public:
    int GetSalary(){return Salary;}
    Employee(){Salary=5000;}
    Employee(int A, char B[], int S):Person(A,B){Salary=S;}
    void Details(){cout<<"Employee Details ___ id: "<<Id<<" , Name: "<<Name<<" , salary: "<<Salary<<endl;}
};

class Customer:public Person{
private:
    char PhoneNum[20];
public:
    char* GetPhone(){return PhoneNum;}
    Customer(){strcpy(PhoneNum,"012000000");}
    Customer(int A, char B[], char P[]):Person(A,B){strcpy(PhoneNum,P);}
    void Details(){cout<<"Customer Details ___ id: "<<Id<<" , Name: "<<Name<<" , phone number: "<<PhoneNum<<endl;}

};


class Base{//abstarct class must have atleate one pure  virtual func at it's overwritten at all children
protected:
    int x,y;
public:
    Base(){x=y=0;}
    Base(int A){x=y=A;}
    Base(int A,int B){x=A; y=B;}

    virtual int Product(){return x*y;}
    };

class Del1:public Base{
protected:
    int a;
public:
    Del1(){a=0;}
    Del1(int l, int m, int n ):Base(l,m){a=n;}
    int Product(){return x*y*a;}
    };
class Del2:public Del1{
    private:
    int b;
    public:
    Del2(){b=0;}
    Del2(int l, int m,int n, int p):Del1(l,m,n){b=p;}
    int Product(){return x*y*a*b;}
}    ;
void Print(Base *p);

class Shap{// abstract class: can't instaiate from
protected:
    int dim1,dim2;
public:
    Shap(){dim1=dim2=0;}
    Shap(int m){dim1=dim2=m;}
    Shap(int m,int n){dim1=m; dim2=n;}
    virtual float Area()=0;//pure virstual area
};
class Circle:public Shap{
public:
    Circle(){};
    Circle(int r):Shap(r){};
    float Area(){return 3.14*dim1*dim2;};
    };
class Rectangel:public Shap{
public:
    Rectangel(){}
    Rectangel(int a, int b):Shap(a,b){}
    float Area(){return 1*dim1*dim2;}
};
class Square:public Rectangel{
public:
    Square(){};
    Square(int a):Rectangel(a,a){}
};
class Triangel:public Shap{
public:
    Triangel(){}
    Triangel(int a, int b):Shap(a,b){}
    float Area(){return .5*dim1*dim2;}
};

class GeoShap{
    Shap*PC;
    Shap*PR;
    Shap*PS;
    Shap*PT;
    public:
    GeoShap(Shap*p1, Shap*p2, Shap*p3, Shap*p4){
        PC=p1;
        PR=p2;
        PS=p3;
        PT=p4;
    }
    float TotalArea(){
        return PC->Area() + PR->Area() + PS->Area() + PT->Area();
    }
};
int main(){

//assignment 1
/*
int NNN,MMM;
cout<<"Enter your Favorite num : ";
cin>>NNN;
cout<<NNN;
cout<<"Enter num 1 : ";
cin>>NNN;
cout<<"Enter num 2 : ";
cin>>MMM;
cout<<"The total is : " <<NNN + MMM;
*/

//assignment 2
/*
int n1,n2,n3,n4,n5,Min,Max;
cout<<"enter ur n1 : ";cin>>n1;
Max=n1; Min=n1;
cout<<"enter ur n2 : ";cin>>n1;
if(n1>Max){Max=n1;}
if(n1<Min){Min=n1;}
cout<<"enter ur n3 : ";cin>>n1;
if(n1>Max){Max=n1;}
if(n1<Min){Min=n1;}
cout<<"enter ur n4 : ";cin>>n1;
if(n1>Max){Max=n1;}
if(n1<Min){Min=n1;}
cout<<"enter ur n5 : ";cin>>n1;
if(n1>Max){Max=n1;}
if(n1<Min){Min=n1;}

cout<<Max<<"     " <<Min;
// onther sol
cout<<"enter ur n1";cin>>n1;
cout<<"enter ur n2";cin>>n2;
cout<<"enter ur n3";cin>>n3;
cout<<"enter ur n4";cin>>n4;
cout<<"enter ur n5";cin>>n5;
Max=n1;
if(n2>Max){Max=n2;}
if(n3>Max){Max=n3;}
if(n4>Max){Max=n4;}
if(n5>Max){Max=n5;}

Min=n1;
if(n2<Min){Max=n2;}
if(n3<Min){Max=n3;}
if(n4<Min){Max=n4;}
if(n5<Min){Max=n5;}
cout<<Max<<"     " <<Min;
*/

//calcaltor
/*int Operation,A,B;
do{
    cout<<"1.ADD\n2.Sub\n3.Multiply\n4.Divide\n5.Exit\n";cin>>Operation;
    if(Operation>=1&& Operation<=4){
            cout<<"Enter Operand n1 : ";cin>>A;
            cout<<"Enter Operand n2 : ";cin>>B;


            switch(Operation){
            case 1:
                cout<<"the sum is : "<<Add(A,B)<<endl;
                break;
            case 2:
                cout<<"the Res is : "<<Sub(A,B)<<endl;
                break;
            case 3:
                cout<<"the Res is : "<<Multiply(A,B)<<endl;
                break;
            case 4:
                cout<<"the Res is : "<<Divide(A,B)<<endl;
                break;
            default:
                cout<<"default";
            }

    }
}while(Operation!=5);
*/

/*
int Arr[5],Min,Max,Sum=0;

for (int i=0; i<5; i++){
  cout<<"Value Number["<<i+1<<"] : ";
  cin>>Arr[i];

  if(i==0){Min=Arr[i];Max=Arr[i];};

  if(Arr[i]<Min){Min=Arr[i];};
  if(Arr[i]>Max){Max=Arr[i];};
  Sum += Arr[i];

}
cout<<"the Max Number is : "<<Max<<endl;
cout<<"the Min Number is : "<<Min<<endl;
cout<<"the Avg Number is : "<<Sum/5<<endl;
*/




/*  recurcion
    int BaseNum, PowerNum;
cout<<"Enter base Number:"<<endl;cin>>BaseNum;
cout<<"Enter power Number:"<<endl;cin>>PowerNum;


cout<<Power(BaseNum, PowerNum);
*/

/*
//4 subjects>col   3 students>row
int Arr[3][4];
int ArrSum[3];
int Sum=0, Avg;
int Row=0,Col=0;

for(Row=0; Row<3; Row++){
    for(Col=0; Col<4; Col++){
        cout<<"enter G of student["<<Row+1<<"] subject["<<Col+1<<"] : "; cin>>Arr[Row][Col];
        Sum+=Arr[Row][Col];
    }
    ArrSum[Row]=Sum;
    Sum=0;
    cout<<endl;
}

// the sum of subjects for every st
for(int i=0; i<3; i++){
        cout<<"the total Subject of student "<<i+1<<" is : "<<ArrSum[i]<<endl;
        cout<<"the Avg of the Grade of student num"<<i + 1<< " :"<<(float)ArrSum[i]/3 <<endl<<endl; ///implement type casting
}
//the average of the subjects

for(Col--; Col>=0; Col--){
        //cout<<Col<<"aaaaa";
    for(Row=0; Row<3; Row++){
        Sum+=Arr[Row][Col];
            }
        cout<<"The average of subject "<<Col+1<<" is : "<<Sum/3<<endl;
        Sum=0;
}
*/



/*
char First[10],Last[10],Full[22];
cout<<"enter your first Name : ";cin>>First;
cout<<"enter your last Name : ";cin>>Last;

strcpy(Full,First);
strcat(Full," ");
strcat(Full,Last);
cout<<First<<" "<<Last<<"\n";
cout<<Full<<"\n";

if(strcmp(First,Last)==0){cout<<"The names are
//small>capital

*/

/*
char word[20];
char reversed[20];

cout<<"Enter a Word : ";
cin>>word;
cout<<word[strlen(word)-1]<<endl;
cout<<strlen(word)<<endl;

for(int i=strlen(word),ii=0; i>=0; i--){
    cout<<word[i-1];
    reversed[ii]=word[i-1];
    ii++;
}
cout<<endl;
reversed[strlen(word)]='\0';
cout<<reversed;
*/


/* pointer

int x=5, y=10, s;
int *sptr;

sptr=&s;
*sptr=30;
cout<<s<<endl;

cout<<"x = "<<x<<"  y = "<<y<<"\n";
Swap(&x,&y);
cout<<"x = "<<x<<"  y = "<<y<<"\n";

*/
/*
int ar[5]={1,2,3,4,5};
int*par;
par=ar;
par[4]=20;
cout<<*(par+1)<<endl;
cout<<*++par<<endl;
cout<<*par<<endl;
par=ar;
cout<<*par<<endl;
*/

/*
int ar[5];
 int*ptr, *ptr2;  ptr=ar; ptr2=ar;  int Min,Max,Sum=0,Avg;
for(int i=0; i<5; i++){
    cout<<"enter value number "<<i+1<<" : ";
    cin>>*(ptr+i);
    Sum+=*(ptr+i);
    if(i==0){Min=*ptr; Max=*ptr;}
    else{
        if(*ptr2 < Min){Min=*ptr2;};
        if(*ptr2 > Max){Max=*ptr2;};
    }
    ptr2++;
}
cout<<*ptr<<endl;
cout<<*ptr2<<endl;//out of the array
Avg=Sum/5;

cout<<"the sum is : "<<Sum<<endl;
cout<<"the Max Number is : "<<Max<<endl;
cout<<"the Min Number is : "<<Min<<endl;
cout<<"the Avg Number is : "<<Sum/5<<endl;
*/

/* array of pointer
int ar1[5]={1,2,3,4,5}, ar2[5]={10,20,30,40,50};
int x=5;
int*pointer[3];

pointer[0]=ar1;
pointer[1]=&x;
pointer[2]=ar2;

pointer[0][4]=9;
*(pointer[0]+4)=20;
*((*pointer)+4) =40;
//cout<<ar1[4];
*/


//dynamic allocation:is a request to search about a ordered block at memory
/*
int *ptr;
ptr=new(int);
if(ptr!=NULL){
*ptr=7;

delete(ptr);
}

int Size,Sum=0;
cout<<"enter the numb of valus :";cin>>Size;
float *pp;
pp=new float[Size];
if(pp !=NULL){
  for(int i=0; i<Size;i++ ){
    cout<<"enter value num " <<i+1<<" : ";
    //cin>>pp[i];
    cin>>*(pp+i);
    Sum+=pp[i];
  }
    cout<<pp[1]<<endl;
    cout<<Sum<<endl;


 //pp++;
cout<<pp;


delete(pp);
}
*/

/*
char**arr;//array of pointers of char
//char*name;
int Size;
char Temp[20];

cout<<"how many names do you have? ";cin>>Size;
arr=new char*[Size];//to reserve array of pointers
if(arr){
    for(int x=0; x<Size; x++){

        cout<<"enter name num "<<x+1<<" : ";
        cin>>Temp;
        arr[x]=new char[strlen(Temp)+1];// reqeste an array of char
        strcpy(arr[x],Temp);
    }

    for(int y=0; y<Size; y++){
        cout<<"the name num "<< y+1<<" : "<<arr[y]<<"   the size is : "<<strlen(arr[y])<<endl;
    }
}

*/

/*
char temp[20];
cout<<"enter your name";cin>>temp;
cout<<sizeof(temp)/sizeof(temp[0])<<endl;
char*name;//pointer to char

name=new char[strlen(temp)+1];//create an array of char dynamic
if(name != NULL){
    strcpy(name,temp);
}

cout<<name<<endl;
cout<<sizeof(name)/sizeof(name[0])<<endl;
*/







//////////////////////OOP//////////////

// complex
Complex cpl1, cpl2, cpl3, cpl4(200, 400);

cpl1.SetReal(20);
cpl1.SetImag(40);

cpl2.SetReal(10);
cpl2.SetImag(10);

cout<<cpl1.GetReal()<<endl;
cout<<cpl1.GetImag()<<endl;

cpl3=cpl1.Add(cpl2);
cout<<Complex::GetCount()<<endl;

cout<<cpl3.GetReal()<<endl;
cpl3.Print();

cpl4.Print();

// student
Student st1, st2;
st1.SetId(50);
st1.SetName("Mark");
cout<<st1.GetId()<<endl;
cout<<st1.GetName()<<endl;


st2.SetName2("Momen");
cout<<st2.GetName2()<<endl;

// person  >> employee >> customer
int id,salary;
char na[20];
char na1[20];
char na2[20];
char ph[20];
/*
cout<<"Enter Person details:\n"<<"id: ";cin>>id;cout<<"name: ";cin>>na;
Person CEO(id,na);
CEO.Details();

cout<<"Enter Employee details:\n"<<"id: ";cin>>id;cout<<"name: ";cin>>na1;cout<<"salary: ";cin>>salary;
Employee Mark(id,na1,salary);
Mark.Details();

cout<<"Enter Customer details:\n"<<"id: ";cin>>id;cout<<"name: ";cin>>na2;cout<<"Phone Num: ";cin>>ph;
Customer Andrew(id,na2,ph);
Andrew.Details();
*/

/*
// Base >> Del1 >> Del2
Del2 d2(2,2,2,2);
cout<<d2.Product()<<endl;
cout<<d2.Del1::Product()<<endl;
cout<<d2.Base::Product()<<endl;

Del2 *pd2; //pointer of type del2
pd2=&d2;//point to the object
cout<<pd2->Product()<<endl;
cout<<pd2->Del1::Product()<<endl;
cout<<pd2->Base::Product()<<endl;

Del1 *pd1;//dl1 scope
pd1=&d2;
cout<<pd1->Product()<<endl;
cout<<pd1->Base::Product()<<endl;

Base *pd0;//base scobe
pd0=&d2;
cout<<pd0->Product()<<endl;
*/

Del2 drv(6,5,4,3);
Del1 dr(6,5,4);
Base b(6,5);

cout<<drv.Product()<<endl;

Print(&drv);
Print(&dr);
Print(&b);


// shape
Circle C(7);
Rectangel R(20,5);
Triangel T(10,20);
Square S(6);
GeoShap G(&C, &R, &T, &S);
cout<<G.TotalArea();
return 0;
}

void Print(Base *p){//dynamic Binding (late binding) --> using virtual
    cout<<"Print __ "<<p->Product()<<endl;
}


int Add(int A, int B){return A+B;};
int Sub(int A, int B){return A-B;};
int Multiply(int A, int B){return A*B;};
float Divide(float A, float B){return A/B;};

float Power(float BaseN,float PowerN){

float Result = 1;
if(PowerN>0){ //because 2 power 1 =2 so we need the case of 1
    Result=BaseN*pow(BaseN,PowerN-1);
}
return Result;
}

void Swap(int* A,int* B){//call by address or pointers
   int Temp;
   Temp= *A;
   *A=*B;
   *B=Temp;
}
/*
   char** Arr;
    char* Name;
    int Size;
    char Temp[20];

    cout<<"How many names do you want to enter?"<<endl;
    cin>>Size;

    Arr = new char*[Size];

    for (int i = 0; i<Size; i++)
    {
        cout<<"Please enter name no. "<<(i+1)<<endl;
        cin>>Temp;

        Arr[i] = new char[(strlen(Temp) +1)];

        strcpy(Arr[i] , Temp);
    }


    cout<<endl<<"The names are:"<<endl;
    for (int i=0; i<Size; i++)
    {
        cout<<(i+1)<<") "<<Arr[i]<<endl;
    }



    return 0;
}
*/
