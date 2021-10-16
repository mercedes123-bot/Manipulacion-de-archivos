#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct alumno{
	char nombre[25];
	char carne[20];
	char correo[15];
	char seccion[1];
	string ciclo_escolar;
	char estado;
	float promedio;
}alumno; 

int main (){
	int opc,opciones;
	string linea,carne,lin,estado,promedio;
	cout<<"ELIGA UNA OPCION:\n";
	cout<<"1. AGREGAR ALUMNO:\n";
	cout<<"2. CONSULTAR:\n";
	cout<<"3. MODIFICAR INFORMACION:\n";
	cin>>opc;
			ofstream doc("datos.txt",ios::app);
			if (doc.is_open()){
			}else{
				cout<<"NO SE CREO NINGUN ARCHIVO:\n";
				doc.close();
			}
			switch (opc){
				case 1:
					cout<<"ESCRIBA UN NOMBRE:\n";
				cin>> alumno.nombre;
				doc<< alumno.nombre<<endl;
				cout<<"ESCRIBA UN CARNE:\n";
				cin>> alumno.carne;
				doc<< alumno.carne<<endl;
				cout<<"ESCRIBA UN CORREO:\n";
				cin>> alumno.correo;
				doc<< alumno.correo<<endl;
				cout<<"ESCRIBA UNA SECCION:\n";
				cin>> alumno.seccion;
				doc<< alumno.seccion<<endl;
				cout<<"ESCRIBA CICLO ESCOLAR:\n";
				cin>> alumno.ciclo_escolar;
				doc<< alumno.ciclo_escolar<<endl;
				cout<<"ESCRIBA EL ESTADO DEL ALUMNO:\n";
				cin>> alumno.estado;
				doc<< alumno.estado<<endl;	
				cout<<"ESCRIBA PROMEDIO DEL ALUMNO:\n";
				cin>> alumno.promedio;
				doc<< alumno.promedio<<endl;
			 break;
				case 2:
					ifstream archivo("datos.txt",ios::in);
					if (archivo.fail()){
						cout<<"NO SE ENCONTRO ESTE ARCHIVO";
						exit(1);
					}
					     if (linea==carne){
							cout<<"INGRESE NUMERO DE CARNE:\n";
							cin>>carne;
							while(!archivo.eof()){
						getline (archivo,linea);
						cout<<linea<<endl;		
					}
						}else{
							cout<<"NO SE ENCONTRO ESTE NUMERO DE CARNE";
					}		
	}
	if (opc==3){
		fstream doc1("datos.txt",ios::in);
					if (doc1.fail()){
						cout<<"NO SE ENCONTRO ESTE ARCHIVO";
						exit(1);
					}
					if (linea==carne){
							cout<<"INGRESE NUMERO DE CARNE:\n";
							cin>>carne;
							while(!doc1.eof()){
						getline (doc1,linea);
						cout<<linea<<endl;
					}
					}else{
							cout<<"NO SE ENCONTRO ESTE NUMERO DE CARNE";
					}			
					
					cout<< "1. MODIFICAR EL ESTADO DEL ALUMNO:\n";
					cout<<"2. MODIFICAR PROMEDIO DE ALUMNO:\n";
						cin>>opciones;
						if (opciones==1){
							ofstream doc2("datos.txt",ios::app);
					 if (doc2.fail()){
						cout<<"NO SE ENCONTRO ESTE ARCHIVO";
						exit(1);
					}
							cout<<"INGRESE ESTADO DE ALUMNO:\n";
							cin>>estado;
							doc2<<estado;
							} else if (opciones==2){
							ofstream doc3("datos.txt",ios::app);
					 if (doc3.fail()){
						cout<<"NO SE ENCONTRO ESTE ARCHIVO";
						exit(1);
					}
							cout<<"INGRESE PROMEDIO DE ALUMNO:\n";
							cin>>promedio;
							doc3<<promedio;
							}
							
					}	
						return 0;
	}


					
		
   
