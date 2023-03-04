#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"

// Funçao para Listar todos os clientes
void listarClientes(Cliente* cliente) {

	printf("------------------------------------------------------------------------------------------------------\n");
	printf("                                     Lista Clientes                                                   \n");
	printf("------------------------------------------------------------------------------------------------------\n\n");

	while (cliente != NULL)
	{
		printf("\tNIF: %d     NOME: %s     E-MAIL: %s     SALDO: %.2f\n", cliente->nif, cliente->nome, cliente->email, cliente->saldo);

		if (cliente->mobilidade_alugada != NULL)
		{
			printf("\tID da Mobilidade alugada: %d\n\n", cliente->mobilidade_alugada->id);
		}
		else
		{
			printf("\tNenhuma mobilidade alugada\n\n");
		}
		cliente = cliente->next;
	}
	printf("\n------------------------------------------------------------------------------------------------------\n\n");
}

// Função para Criar um Novo Registo de um Cliente
Cliente* inserirCliente(Cliente* cliente, int nif, char nome[], char email[], float saldo) {

	if (!existeMobilidade(cliente, nif))
	{
		Cliente* novo = malloc(sizeof(struct cliente));
		if (novo != NULL)
		{
			novo->nif = nif;
			strcpy(novo->nome, nome);
			strcpy(novo->email, email);
			novo->saldo = saldo;
			novo->mobilidade_alugada = NULL;
			novo->next = cliente;
			return (novo);
		}
		else return(cliente);
	}
}

// Função para Verificar se um Registo de um Cliente ja existe pelo NIF
int existeCliente(Cliente* cliente, int nif) {

	while (cliente != NULL)
	{
		if (cliente->nif = nif) return(1);
		cliente = cliente->next;
	}
	return(0);
}


// Função para Remover um Registo de um Cliente pelo NIF
Cliente* removerCliente(Cliente* cliente, int nif) {

	Cliente* anterior = cliente, *atual = cliente, *aux;

	if (atual == NULL) return NULL;
	else if (atual->nif == nif)
	{
		aux = atual->next;
		free(atual);
	}
	else
	{
		while ((atual != NULL) && (atual->nif != nif))
		{
			anterior = atual;
			atual = atual->next;
		}
		if (atual == NULL) return(cliente);
		else
		{
			anterior->next = atual->next;
			free(atual);
			return(cliente);
		}
	}
}


Cliente* alterarCliente(Cliente* cliente, int nif, char nomeNovo[], char emailNovo[], float saldo) {
	Cliente* nodoAtual = cliente;
	Cliente* nodoAnterior;

	while (nodoAtual != NULL && nodoAtual->nif != nif)
	{
		nodoAnterior = nodoAtual;
		nodoAtual = nodoAtual->next;
	}

	if (nodoAtual != NULL)
	{
		nodoAtual->nif = nif;
		strcpy(nodoAtual->nome, nomeNovo);
		strcpy(nodoAtual->email, emailNovo);
		nodoAtual->saldo = saldo;
	}

	return(cliente);
}