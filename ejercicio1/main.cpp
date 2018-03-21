#include <iostream>

using namespace std;

int main()
{
    int x,y,a=0,b=0,c=0,d=0;
    cout << "Ingrese cantidad de litros" << endl;
    cin>>x;
    y=x;
    if(y>=7){
    a=y/7;
    y=y%7;
    }
    if(y>=5){
    b=y/5;
    y=y%5;}
    if(y>=3){
    c=y/3;
    y=y%3;}
    d=y;
    cout<<"Se necesitan "<<a<<" botellas de 7 litros"<<endl;
    cout<<"Se necesitan "<<b<<" botellas de 5 litros"<<endl;
    cout<<"Se necesitan "<<c<<" botellas de 3 litros"<<endl;
    cout<<"Se necesitan "<<d<<" botellas de 1 litros"<<endl;
    return 0;
}
