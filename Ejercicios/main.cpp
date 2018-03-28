#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a=0,b=0,c=0,cifras,acumula=0,nro,bloques,dig;
    cout << "Escribir un número del 1 al 999 999 999 999" << endl;
    cin>>nro;
    for(int i=1;((nro>=(pow(10,i)))&&(i<=11));i++){
        cifras=i+1;
        cout<<cifras<<endl;
    }
    if(cifras/3.00<=1){bloques=1;}
    else{if(cifras/3.00<=2){bloques=2;}
        else{if(cifras/3.00<=3){bloques=3;}
        else{bloques=4;}
        }
    }
	dig=cifras;
    for(int i=0,j=0;(i<(cifras/3.00));i++){
        j=dig%3;
		nro=nro-acumula*(pow(10,((bloques)*3)));
        if(j==0){
            a=(nro/pow(10,dig-1));
            b=(nro/pow(10,dig-2))-a*10;
            c=(nro/pow(10,dig-3))-(a*100+b*10);
        }else{if (j==2){
            b=(nro/pow(10,dig-i-1));
            c=(nro/pow(10,dig-i-2))-b*10;
        }else{c=nro/pow(10,dig-i-1);}}
		cout<<c<<"ja"<<endl;
        if(a==1){
            if((a==1)&&(b==0)&&(c==0)){
                cout<<"Cien ";
            }else{cout<<"Ciento ";}
        }else{if(a==2){
                cout<<"Doscientos ";
                }else{if(a==3){
                cout<<"Trescientos ";
                }else{if(a==4){
                cout<<"Doscientos ";
                }else{if(a==5){
                cout<<"Quinientos ";
                }else{if(a==6){
                cout<<"Seiscientos ";
                }else{if(a==7){
                cout<<"Setecientos ";
                }else{if(a==8){
                cout<<"Ochocientos ";
                }else{if(a==9){
                cout<<"Novecientos ";
                }}}}}}}}

        }
        if(b==1){
            if(c==0){
                cout<<"Diez ";
            }else{if(c==1){
                cout<<"Once ";
                }else{if(c==2){
                cout<<"Doce ";
                }else{if(c==3){
                cout<<"Trece ";
                }else{if(c==4){
                cout<<"Catorce ";
                }else{if(c==5){
                cout<<"Quince ";
                }else{if(c==6){
                cout<<"Dieciseis ";
                }else{if(c==7){
                cout<<"Diecisiete ";
                }else{if(c==8){
                cout<<"Dieciocho ";
                }else{if(c==9){
                cout<<"Diecinueve ";
                }}}}}}}}}
            }
        }else{if(b==2){if(c==0){
                cout<<"Veinte ";
                }else{cout<<"Veinti";}

                }else{if(b==3){if(c==0){
                cout<<"Treinta ";
                }else{cout<<"Treinta y ";}
                }else{if(b==4){if(c==0){
                cout<<"Cuarenta ";
                }else{cout<<"Cuarenta y  ";}
                }else{if(b==5){if(c==0){
                cout<<"Cincuenta ";
                }else{cout<<"Cincuenta y  ";}
                }else{if(b==6){if(c==0){
                cout<<"Sesenta";
                }else{cout<<"Sesenta y  ";}
                }else{if(b==7){if(c==0){
                cout<<"Setenta ";
                }else{cout<<"Setenta y  ";}
                }else{if(b==8){if(c==0){
                cout<<"Ochenta ";
                }else{cout<<"Ochenta y  ";}
                }else{if(b==9)if(c==0){
                cout<<"Noventa ";
                }else{
                cout<<"Noventa y  ";}
                }}}}}}}

        }
        if(c==1){
                cout<<"Uno ";
                }else{if(c==3){
                cout<<"Dos ";
                }else{if(c==3){
                cout<<"Tres ";
                }else{if(c==4){
                cout<<"Cuatro ";
                }else{if(c==5){
                cout<<"Cinco ";
                }else{if(c==6){
                cout<<"Seis ";
                }else{if(c==7){
                cout<<"Siete ";
                }else{if(c==8){
                cout<<"Ocho ";
                }else{if(c==9){
                cout<<"Nueve ";
                }}}}}}}}}
		bloques=bloques-1;
        if(bloques==3||bloques==1){if(a!=0||b!=0||c!=0)cout<<"Mil ";}
        if(bloques==2){
            if(c==1){cout<<"Millon ";}
            else{if(c>1||b>=1||a>=1){cout<<"Millones";}}
        }
        cout<<a<<"ja"<<b<<"ja"<<c<<"ja"<<endl;
        
		acumula=a*100+10*b+c;
        a=0;
        b=0;
        c=0;	
		
        if(j==0){dig=dig-3;}else{dig=dig-j;}
		cout<<nro<<endl;
		cout<<bloques<<endl;
    }
    return 0;
}
