#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mobilidade.h"

// Fun�ao para Listar todas as Mobilidades
void listarMobilidades(Mobilidade* mobilidade) {

	printf("----------------------------------------------------------------------\n");
	printf("                          Lista Mobilidades                           \n");
	printf("----------------------------------------------------------------------\n\n");

	while (mobilidade != NULL)
	{
		printf("ID: %d     TIPO: %s     BATERIA: %.2f     AUTONOMIA: %.2f\n", mobilidade->id, mobilidade->tipo, mobilidade->nivel_bateria, mobilidade->autonomia);
		printf("................................................................\n\n");

		mobilidade = mobilidade->next;
	}
	printf("----------------------------------------------------------------------\n\n");
}

// Fun��o para Criar um Novo Registo de uma Mobilidade
Mobilidade* inserirMobilidade(Mobilidade* mobilidade, int id, char tipo[], float nivel_bateria, float autonomia) {

	if (!existeMobilidade(mobilidade, id))
	{
		Mobilidade* novo = (Mobilidade*)malloc(sizeof(Mobilidade));
		if (novo != NULL)
		{
			novo->id = id;
			strcpy(novo->tipo, tipo);
			novo->nivel_bateria = nivel_bateria;
			novo->autonomia = autonomia;
			novo->next = mobilidade;
			return(novo);
		}
	}
	else return(mobilidade);
}

// Fun��o para Verificar se um Registo de uma Mobilidade ja existe pelo ID
int existeMobilidade(Mobilidade* mobilidade, int id) {

	while (mobilidade != NULL)
	{
		if (mobilidade->id = id) return(1);
		mobilidade = mobilidade->next;
	}
	return(0);
}


// Fun��o para Remover um Registo de uma Mobilidade pelo ID
Mobilidade* removerMobilidade(Mobilidade* mobilidade, int id) {

	Mobilidade* anterior = mobilidade, *atual = mobilidade, *aux;

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
		if (atual == NULL) return(mobilidade);
		else
		{
			anterior->next = atual->next;
			free(atual);
			return(mobilidade);
		}
	}
}