/*Ejercicio # 2 Una persona desea comprar entradas para un concierto que se realizará en la explanada de cierto lugar de la ciudad.
 El precio de la entrada varía según la zona elegida, así tenemos que la lista de precios es la siguiente:
  Zona Identificación  Precio 
  VIP      V          350.00 
  Platea   P          130.00 
  Popular  E          50.00 
 
Adicionalmente los precios tendrán un descuento en función del número de entradas que se compran, 
así como si la persona que las adquiere es socio o no.  

Se le pide elaborar un programa en C++ que solicite la zona elegida, el número de entradas a comprar 
y consulte si es socio o no y nos determine y muestre el monto a pagar por la compra de las entradas. 
Todas las ventas deben de ser grabadas un archivo de datos, así mismo el programa de ser capaz de mostrar 
el monto total de lo vendido globalmente y por tipo de entrada mostrando también el porcentaje respecto al 
total global vendido. */


#include <iostream>
#include <fstream>
using namespace std;

void menu();
void archivo();

void menu(){
	
	int ops;
	
	cout<<"1. COMPRAR ENTRADAS "<<endl;
	//cout<<"2. MOSTARA VENTAS   "<<endl;
	cin>>ops;
	if(ops==1){
		system("cls");
		archivo();
}
}

void archivo(){
	char zona;
	char idetificacion;
	float precio;
	float descuento;
	char socio;
	int n;
	
	cout<<"INGRESE EL NUMERO DE ENTRADA QUE DESEA COMPRAR"<<endl;
	cin>>n;
	for(int i=0;i<=n;i++){
		cout<<"ELIJA   LA ENTRADA A COMPRAR "<<endl;
	  	cout<<"-----------"<<endl;
		cout<<"1. VIP     "<<endl;
	  	cout<<"2. Platea  "<<endl;
	  	cout<<"3. Popular "<<endl;
		cin>>zona;
		cout<<"-----------"<<endl;
		cout<<"ES SOCIO (S)I  o (N)O"<<endl;
		cin>>socio;
		socio=toupper (socio);
		if(zona==1)
			if(socio=='S')
			precio=320.00*0.3;
			//cout<<"ZONA (VIP)  IDENTIFICACION (V) PRECIO ES"<<precio<<endl;
			
			else if(socio=='N')
			precio=320.00;
			//cout<<"ZONA (VIP)  IDENTIFICACION (V) PRECIO ES"<<precio<<endl;
		
				if(zona==2)
				if(socio=='S'){
				precio=130.00*0.3;
			//	cout<<"ZONA (Platea)  IDENTIFICACION (P) PRECIO ES"<<precio<<endl;
				}else if(socio=='N')
				precio=130.00;
			//	cout<<"ZONA (Platea)  IDENTIFICACION (P) PRECIO ES"<<precio<<endl;
				
					if(zona==3)
					if(socio=='S'){
					precio=50*0.3;
			//		cout<<"ZONA (Popular)  IDENTIFICACION (E) PRECIO ES"<<precio<<endl;
					}else if(socio=='N')
					precio=50;
			//		cout<<"ZONA (Popular)  IDENTIFICACION (E) PRECIO ES"<<precio<<endl;

			ofstream archivo;
	
		archivo.open("entradas.txt",ios::app);
		archivo<<n<<"\t"<<zona<<"\t"<<socio<<"\t"<<precio<<endl;  
		archivo.close();		
	cout<<"ZONA ES: "<<zona<<endl;
	cout<<"PRECIO ES"<<precio<<endl;
}
	
}



int main(){
	
	menu();
}
