//============================================================================
// Name        : Mulher_fichier_Pfonction.cpp
// Author      : Alexis
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <stdio.h>
#define max 100

int main() {
	FILE* fichier = NULL;
	fichier = fopen("untexte.txt","w+");

	int age = 0;
	char chaine[max] = "NULL";

	if(fichier != NULL)
	{
		cout << "quel est votre âge" << endl;
		cin >> age;

		fprintf(fichier,"L'age du dev est de %d ans",age);
		rewind(fichier);
		fgets(chaine,10,fichier);
		cout << "la chaine est: " << chaine << endl;

		fclose(fichier);
	}
	else{
		cout << "Petit problème de lecture" << endl;
	}


	return 0;
}
