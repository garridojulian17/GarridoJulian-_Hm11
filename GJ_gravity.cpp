#include <iostream>
#include <ctime>
using namespace std;
double x (double xf,double xi, double dt){
double x = (xf -xi) 


}
double XM( double h,double v , double Xm, double i){

double XM = 2*h*v+Xm*i;
return XM;

}
double VM (double G, Double h, double M , double x, double Vm, double i){
double VM = ((-2*h*g*M)/(x*x)) +Vm *i ;
return VM;



}

int main (){
double V =600;
double x = 500;
double G = 10.00;
double M = 1000.00;
double h = 0.2;


double X1 = X0 -
for( i = 0; i<x ; i++){

VM[i] = VM(G,h,M,x,V,I) +h
XM[i] = XM(h,V ,Xm,i,)
}

return 0;
}
