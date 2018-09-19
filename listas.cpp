#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{//una estructura que contiene un puntero a la misma 
estructura
	int dato;
	struct Nodo *siguiente;
	
}*inicio,*aux,*actual;//Para inicializar las variables, variables 
globales
//inicio (para estar al inicio de la lista), actual para recorrer los 
nodos, aux crear los nodos
//NULL no tiene ningun valor

void insertarNodo(int); //prototipos de la funcion
void mostrarNodos(); //prototipos de la funcion

int main(int argc, char**argv){
	inicio=NULL; //apunta hacia NULL
	
	insertarNodo(10);//insertar un 10 al nodo
	insertarNodo(20);
	insertarNodo(30);
	
	mostrarNodos();
	cin.get();
	return 0;
}

void insertarNodo(int valor){ //valor=10, irá cambiando los valores 
luego vale 20, 30
	actual=inicio; //actual tambien apunta a NULL
	if(actual==NULL){ 
		aux=new Nodo(); //para corroborar si las listas estan 
vacias, memoria dinamica, aux=nuevo nodo
		aux->dato=valor;
		aux->siguiente=NULL; //primera parte de la lista
		inicio=aux; //crear el primer valor y meterlo a inicio, 
inicio apunta a aux
	}else{
		while(actual->siguiente!=NULL){
			actual=actual->siguiente; 
		}
		
			//if(actual->siguiente==NULL){
			aux=new Nodo();
			aux->dato=valor;
			aux->siguiente=NULL;
			actual->siguiente=aux;
		}
		}

void mostrarNodos(){
	actual=inicio;
	while(actual!=NULL){ //actual diferente de NULL
	cout<<" ->"<<actual->dato<<" ";
	actual=actual->siguiente;
	}
}

