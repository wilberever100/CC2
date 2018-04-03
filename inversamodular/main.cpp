#include <iostream>
#include <fstream>

#include <string.h>
using namespace std;
int modulo(int a,int b){
	int r=a-(a/b)*b;
	if(r<0){
		r=r+b;
	}
	return r;
}
void leyendo(){
    int publica;
    cout<<"Ingrese la clave pública"<<endl;
    cin>>publica;
	ifstream lectura;
	lectura.open("cipher.txt",ios::out|ios::in);
	if(lectura.is_open()){
		char i;
		cout<<"Abierto OK lectura"<<endl;
		cout<<"El mensaje es: "<<endl;
		while(!lectura.eof()){
			lectura>>i;
			cout<<char(modulo(int(i)*publica,256));

		}
		escritura.close();
	}else{
		cout<<"El archivo no se pudo leer"<<endl;
	}
}
int main()
{
    string dato="hola";
	cout<<modulo(int(dato[0]),256)<<modulo(int(dato[1]),256)<<endl;
	leyendo();
	return 0;
}
