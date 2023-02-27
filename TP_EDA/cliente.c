#include <stdio.h>
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
		printf("................................................................\n");

		cliente = cliente->next;
	}
	printf("----------------------------------------------------------------------\n\n");
}

