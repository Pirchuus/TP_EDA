#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gestor.h"

// Funçao para Listar todos os Gestores
void listarGestores(Gestor* gestor) {

	printf("----------------------------------------------------------------------\n");
	printf("                            Lista Gestores                            \n");
	printf("----------------------------------------------------------------------\n\n");

	while (gestor != NULL)
	{
		printf("ID: %d     NOME: %s     PASSWORD: %s\n", gestor->id, gestor->nome, gestor->password);
		printf("................................................................\n\n");

		gestor = gestor->next;
	}
	printf("----------------------------------------------------------------------\n\n");
}

// Função para Criar um Novo Registo de um Gestor
Gestor* inserirGestor(Gestor* gestor, int id, char nome[], char password[]) {

	if (!existeGestor(gestor, id))
	{
		Gestor* novo = (Gestor*)malloc(sizeof(Gestor));
		if (novo != NULL)
		{
			novo->id = id;
			strcpy(novo->nome, nome);
			strcpy(novo->password, password);
			novo->next = gestor;
			return(novo);
		}
	}
	else return(gestor);
}

// Função para Verificar se um Registo de um Gestor ja existe pelo ID
int existeGestor(Gestor* gestor, int id) {

	while (gestor != NULL)
	{
		if (gestor->id = id) return(1);
		gestor = gestor->next;
	}
	return(0);
}


// Função para Remover um Registo de um Gestor pelo ID
Gestor* removerGestor(Gestor* gestor, int id) {

	Gestor* anterior = gestor, *atual = gestor, *aux;

	if (atual == NULL) return NULL;
	else if (atual->id == id)
	{
		aux = atual->next;
		free(atual);
	}
	else
	{
		while ((atual != NULL) && (atual->id != id))
		{
			anterior = atual;
			atual = atual->next;
		}
		if (atual == NULL) return(gestor);
		else
		{
			anterior->next = atual->next;
			free(atual);
			return(gestor);
		}
	}
}