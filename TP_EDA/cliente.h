#pragma once
#include "mobilidade.h"

// Estrutura para representar um cliente
typedef struct cliente
{
    int nif; // nif para indicar o cliente
    char nome[50]; // nome do cliente
    char email[50]; // e-mail do cliente
    float saldo; // saldo do cliente
    struct clientemobilidade* mobilidade; // 
    struct cliente* next; // apontador para o proximo cliente da lista

} Cliente;

typedef struct clientemobilidade
{
    int nifCliente; // nif do cliente
    int idMob; // id da mobilidade
    struct clientemobilidade* next;

}ClienteMobilidade;

void listarClientes(Cliente* cliente, Mobilidade* mobilidade);
void listarApenasClientes(Cliente* cliente);
int existeCliente(Cliente* cliente, int nif);
Cliente* inserirCliente(Cliente* cliente, int nif, char nome[], char email[], float saldo);
Cliente* removerCliente(Cliente* cliente, int nif);
Cliente* alterarCliente(Cliente* cliente, int nif, char nome[], char email[], float saldo);
Cliente* associarMobilidade(Cliente* cliente, int idCliente, int idMobilidade);
Cliente* desassociarMobilidade(Cliente* cliente, int idCliente, int idMobilidade);

