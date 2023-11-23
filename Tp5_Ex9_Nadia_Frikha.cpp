//Ex9

#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdlib.h>

int main() {
	char T[20][20];
	int i,j ; //compteurs
	int N; //taille du tableau
	
	
	//saisie de la taille du tableau 
	do{
		printf("donner N =");
		scanf("%d",&N); fflush(stdin);
	}while (N<5 || N>20);
	
	//remplir le tableau par N chaine de caracteres non vides
	for(i=0; i<N ; i++){
		do{
		printf("donner T[%d]:",i);
		gets(T[i]);	
		}while (strlen(T[i])==0);
	}
	//supression des caracteres non alphabetique 
	for(i=0; i<N ; i++){
		j=0;
		while (j<strlen(T[i])){
			if (isalpha(T[i][j])==0){
				strcpy(T[i]+j,T[i]+j+1);
			}
			else{
				j++;
			}
		}
	}
	
	//affichage du resultat 
	for(i=0;i<N;i++){
		if (strlen(T[i])!=0){
			printf("%d \t %s \n",i,T[i]);
		}
	}
	
	return 0;
}
	
