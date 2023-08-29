#include<iostream>
using namespace std;

class shap{
    protected:
int dim1,dim2;
    public:
        shap(){}
        shap(int x){dim1=dim2=x;}
        shap(int x, int y){dim1=x; dim2=y;}
        virtual float Area()=0;

};
class rec:public shap{
public:
    rec(){}
    rec(int l, int w):shap(l,w){}
    float Area(){
        return (1.0 * dim1 * dim2);
    }
};
class square:public rec{
public:
    square(){}
    square(int x):rec(x,x){}

};
class cir:public shap{
public:
    cir(){}
    cir(int r):shap(r){}
    float Area(){
        return (3.14 * dim1 * dim2);
    }
};
class tri:public shap{
public:
    tri(){}
    tri(int b, int r):shap(b,r){}
    float Area(){return(0.5 * dim1 * dim2);}
};

class GeoShape{
shap *p1,*p2, *p3, *p4;
public:
 GeoShape(shap *pa,shap *pb,shap *pc,shap *pd){
     p1=pa;  p2=pb;  p3=pc; p4=pd;
}

float SUM(){
    float TOTAL;
    TOTAL=(p1->Area() + p2->Area() + p3->Area()+ p4->Area());
   return TOTAL;
}
};

int main(){
    rec R(20,5);
    square S(6);
    cir C(7);
    tri T(10,20);

    GeoShape G(&R,&S,&C,&T);
    cout<<G.SUM();



return 0;
}
