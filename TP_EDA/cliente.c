#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"

// Funçao para Listar todos os clientes
void listarClientes(Cliente* cliente) {

	printf("----------------------------------------------------------------------\n");
	printf("                            Lista Clientes                            \n");
	printf("----------------------------------------------------------------------\n\n");

	while (cliente != NULL)
	{
		printf("ID: %d     NOME: %s     SALDO: %.2f\n", cliente->id, cliente->nome, cliente->saldo);

		if (cliente->mobilidade_alugada != NULL)
		{
			printf("ID da Mobilidade alugada: %d\n", cliente->mobilidade_alugada->id);
		}
		else
		{
			printf("Nenhuma mobilidade alugada\n");
		}
		cliente = cliente->next;
	}
	printf("\n----------------------------------------------------------------------\n\n");
}

// Função para Criar um Novo Registo de um Cliente
Cliente* inserirCliente(Cliente* cliente, int id, char nome[], float saldo) {

	Cliente* novo = (Cliente*)malloc(sizeof(Cliente));

	if (!existeCliente(cliente, id))
	{
		if (novo != NULL)
		{
			novo->id = id;
			strcpy(novo->nome, nome);
			novo->saldo = saldo;
			novo->next = cliente;
			novo->mobilidade_alugada = NULL;
			return(novo);
		}
	}
	else return(cliente);
}

// Função para Verificar se um Registo de um Cliente ja existe pelo ID
int existeCliente(Cliente* cliente, int id) {

	while (cliente != NULL)
	{
		if (cliente->id = id) return(1);
		cliente = cliente->next;
	}
	return(0);
}


// Função para Remover um Registo de um Cliente pelo ID
Cliente* removerMeio(Cliente* cliente, int id) {

	Cliente* anterior = cliente, *atual = cliente, *aux;

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
		if (atual == NULL) return(cliente);
		else
		{
			anterior->next = atual->next;
			free(atual);
			return(cliente);
		}
	}
}