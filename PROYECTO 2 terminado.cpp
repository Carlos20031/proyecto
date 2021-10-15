#include<iostream>
#include<fstream>
using namespace std;
int main(){
	

int carne, opcion, carneauxi;
	char nombre[30];
	char correo[30];
	char seccion[30];
	char estado[30];
	char estadonuevo[30];
	char ciclo[30];
	float promedio;
	float promedionuevo;
	ofstream guardar;
	ifstream leer;
	ofstream tempo;
	guardar.open("alumnos.txt",ios::out|ios::app);
	while(true){
		cout<<" "<<endl;
		cout<<"<-----PROYECTO 2----->"<<endl;
		cout<<"1 Guardar nuevo alumno"<<endl;
		cout<<"2 buscar Alumno"<<endl;
		cout<<"3 Modificar datos"<<endl;
		cout<<"4 ver archivo completo"<<endl;
		cout<<"5 cerrar el programa"<<endl;
		cout<<"INGRESE LA OPCION QUE DESEA EJECUTAR"<<endl;
		cin>>opcion;
		if(opcion>5){
			cout<<"opcion incorrecta intenta de nuevo";
	}
			switch(opcion){
			 case 1:
			 {
				cout<<"Ingrese Nombre :"<<endl;
				cin>>nombre;
				cout<<"Ingrese el carne :"<<endl;
				cin>>carne;
				cout<<"Ingrese el correo :"<<endl;
				cin>>correo;
				cout<<"Ingrese la seccion :"<<endl;
				cin>>seccion;
				cout<<"Ingrese el ciclo escolar :"<<endl;
				cin>>ciclo;
				cout<<"El estado del alumno :"<<endl;
				cin>>estado;
				cout<<"ingrese el promedio :"<<endl;
				cin>>promedio;
				cout<<"alumno registrado con exito"<<endl;
				guardar<<nombre<<endl;
				guardar<<carne<<endl;
				guardar<<correo<<endl;
				guardar<<seccion<<endl;
				guardar<<ciclo<<endl;
				guardar<<estado<<endl;
				guardar<<promedio<<endl;
				
				
				break;
			}
			case 2:{
			leer.open ("alumnos.txt");
				leer>>nombre;
				bool buscar = false;
				cout <<"ingrese carne que desea buscar"<<endl;
				cin>>carneauxi;
				while(!leer.eof()){
					leer>>carne>>correo>>seccion>>ciclo>>estado>>promedio;
					if(carneauxi == carne){
						bool buscar=true;
						
					cout<<" nombre :"<<nombre<<endl;
					cout<<" carne :"<<carne<<endl;
					cout<<" correo :"<<correo<<endl;
					cout<<" seccion :"<<seccion<<endl;
					cout<<" ciclo :"<<ciclo<<endl;
					cout<<" estado :"<<estado<<endl;
					cout<<" promedio :"<<promedio<<endl;
					cout<<endl;
					}
					leer>>nombre;
					}
				if(buscar=false){
					cout<<"ups el carnet no se encuantra en el archivo"<<endl;
					}
				leer.close();

				break;
				
	 	           }
	 	         
	 	    case 3:{
	 	    	leer.open("alumnos.txt");
	 	    	tempo.open("renombrar.txt");
	 	    	leer>>nombre;
	 	    	bool buscar=false;
	 	    	cout<<"ingrese la clave del alumno que dessea modifiar :"<<endl;
	 	    	cin>>carneauxi;
	 	    	while(!leer.eof()){
	 	    		leer>>carne>>correo>>seccion>>ciclo>>estado>>promedio;
	 	    		if(carne==carneauxi){
	 	    		    buscar=true;
	 	    		    cout<<" nombre :"<<nombre<<endl;
					    cout<<" carne :"<<carne<<endl;
					    cout<<" correo :"<<correo<<endl;
					    cout<<" seccion :"<<seccion<<endl;
					    cout<<" ciclo :"<<ciclo<<endl;
					    cout<<" estado :"<<estado<<endl;
					    cout<<" promedio :"<<promedio<<endl;
					    cout<<endl;
					    cout<<"ingrese el nuevo estado"<<endl;
					    cin>>estadonuevo;
					    cout<<"ingrese el nuevo promedio"<<endl;
					    cin>>promedionuevo;
					    tempo<<nombre<<endl;
				        tempo<<carne<<endl;
				        tempo<<correo<<endl;
				        tempo<<seccion<<endl;
			            tempo<<ciclo<<endl;
				        tempo<<estadonuevo<<endl;
				        tempo<<promedionuevo<<endl;
				        
				        cout<<"los datos del alumno fuerno modificados"<<endl;
						}
				        else
				        {
				        tempo<<nombre<<endl;
				        tempo<<carne<<endl;
				        tempo<<correo<<endl;
				        tempo<<seccion<<endl;
			            tempo<<ciclo<<endl;
				        tempo<<estado<<endl;
				        tempo<<promedio<<endl;	
						}
						leer>>nombre;
				
					 }
					 if(buscar=false){
					 	cout<<"ups el carnet no se encuantra en el archivo"<<endl;
					 }
	 	    		leer.close();
	 	    		tempo.close();
	 	    		guardar.close();
	 	    		remove("alumnos.txt");
	 	    		rename("renombrar.txt","alumnos.txt");
	 	    		break;
				 }
				 case 4:{
				 	leer.open("alumnos.txt");
				 	leer>>nombre;
				 	while(!leer.eof()){
				 		leer>>carne>>correo>>seccion>>ciclo>>estado>>promedio;
				 		cout<<" nombre :"<<nombre<<endl;
					    cout<<" carne :"<<carne<<endl;
					    cout<<" correo :"<<correo<<endl;
					    cout<<" seccion :"<<seccion<<endl;
					    cout<<" ciclo :"<<ciclo<<endl;
					    cout<<" estado :"<<estado<<endl;
					    cout<<" promedio :"<<promedio<<endl;
					    cout<<endl;
					 leer>>nombre;
				 
				}
				 		leer.close();
				 	   guardar.close();
					break;
				 }
				 case 5:{
				 	cout<<"hasta luego"<<endl;
				 	system("pause");
					break;
				 }
				 
			}
	}
				
			 
		
			
    return 0;
    system("PAUSE");
}
