#include "pch.h"
#include "Productos.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
using namespace std;
typedef struct {
	char *nombre, *numero;
	
}telef;
telef *tel;

void vaciar(char temp[]);
void copiar(char temp[], int i);
void copiar2(char temp[], int i);

int telef::Archivo() {
	int i, j;
	char aux;
	char temp[50];
	int cont = 0;
	FILE *f;
	f = fopen("Bloque8.txt", "r");
	if (f == NULL) {
		cout << "No se ha podido abrir el fichero." << endl;
		exit(1);
	}

	while (!feof(f)) {
		fgets(temp, 50, f);
		cont++;
	}
	rewind(f);
	tel = (telef*)malloc(cont * sizeof(telef));
	if (tel == NULL) {
		cout << "No se ha podido reservar la memoria" << endl;
		exit(1);
	}
	for (i = 0; !feof(f); i++) {
		vaciar(temp);
		aux = '0';
		for (j = 0; aux != '-'; j++) {
			aux = fgetc(f);
			if (aux != '-') {
				temp[j] = aux;
			}
		}
		copiar(temp, i);
		vaciar(temp);
		j = 0;
		for (aux == '-'; aux != '*'; j++) {
			aux = fgetc(f);
			if (aux != '*') {
				temp[j] = aux;
			}
		}
		copiar2(temp, i);
		vaciar(temp);
		j = 0;
		for (aux == '*'; aux != '@'; j++) {
			aux = fgetc(f);
			if (aux != '@') {
				temp[j] = aux;
			}
		}
		fgets(temp, 7, f);
		tel[i].precio = atoi(temp);
		strcpy(nombre[i], tel[i].nombre);
		strcpy(numero[i], tel[i].numero);
				
	}
	/*system("pause");
	return 0;*/
}

void vaciar(char temp[]) {
	int i;
	for (i = 0; i < 50; i++) {
		temp[i] = '\0';
	}
}
void copiar(char temp[], int i) {
	int N = strlen(temp) + 1;
	tel[i].nombre = (char*)malloc(N * sizeof(char));
	if (tel[i].nombre == NULL) {
		cout << "No se ha podido reservar memoria" << endl;
		exit(1);
	}
	strcpy(tel[i].nombre, temp);
}
void copiar2(char temp[], int i) {
	int N = strlen(temp) + 1;
	tel[i].numero = (char*)malloc(N * sizeof(char));
	if (tel[i].numero == NULL) {
		cout << "No se ha podido reservar memoria" << endl;
		exit(1);
	}
	strcpy(tel[i].numero, temp);
}

telef::telef()
{
	Archivo();
	}
//busqueda
int op=0;
i=0;
cout<<" Quieres buscar por nombre o numero? inserta 1 para nombre y 2 para numero "<<endl;
cin>>op;
switch (op){
case 1:
	char consulta[50];
	cout<<" Inserta el nombre ";cin>>consulta;
while(tel[i].nombre!=consulta) {
	i++;
}
if (tel[i].nombre!=consulta){
	cout<<"Nombre: "<<tel[i].nombre<<" Numero: "<<tel[i].numero<<endl;
}
case 2:
	int consultan;
	cout<<" Inserta el numero ";cin>>consultan;
while(tel[i].numero!=consultan) {
	i++;
}
if (tel[i].numero!=consultan){
	cout<<"Nombre: "<<tel[i].nombre<<" Numero: "<<tel[i].numero<<endl;
}
}
telef::~telef()
{
}
