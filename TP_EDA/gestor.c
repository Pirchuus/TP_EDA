#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gestor.h"

// Funçao para Listar todos os Gestores
void listarGestores(Gestor* gestor) {

	printf("------------------------------------------------------------------------------------------------------\n");
	printf("                                            Lista Gestores                                            \n");
	printf("------------------------------------------------------------------------------------------------------\n\n");

	while (gestor != NULL)
	{
		printf("\tID: %d     NOME: %s     PASSWORD: %s\n", gestor->id, gestor->nome, gestor->password);
		gestor = gestor->next;
	}
	printf("\n------------------------------------------------------------------------------------------------------\n\n");
}

// Função para Criar um Novo Registo de um Gestor
Gestor* inserirGestor(Gestor* gestor, int id, char nome[], char password[]) {

	if (!existeGestor(gestor, id))
	{
		Gestor* novo = malloc(sizeof(struct gestor));
		if (novo != NULL)
		{
			novo->id = id;
			strcpy(novo->nome, nome);
			strcpy(novo->password, password);
			novo->next = gestor;
			return(novo);
		}
		else return(gestor);
	}
}

// Função para Verificar se um Registo de um Gestor ja existe pelo ID
int existeGestor(Gestor* gestor, int id) {

	while (gestor != NULL)
	{
		if (gestor->id == id) return(1);
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


Gestor* alterarGestor(Gestor* gestor, int id, char nomeNovo[], char passwordNova[]) {
	Gestor* nodoAtual = gestor;
	Gestor* nodoAnterior;

	while (nodoAtual != NULL && nodoAtual->id != id)
	{
		nodoAnterior = nodoAtual;
		nodoAtual = nodoAtual->next;
	}

	if (nodoAtual != NULL)
	{
		strcpy(nodoAtual->nome, nomeNovo);
		strcpy(nodoAtual->password, passwordNova);
	}

	return(gestor);
}