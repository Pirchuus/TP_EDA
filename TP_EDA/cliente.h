#pragma once
#include "mobilidade.h"

// Estrutura para representar um cliente
typedef struct cliente
{
    int nif;
    char nome[50];
    char email[50];
    float saldo;
    struct clientemobilidade* mobilidade;
    struct cliente* next;

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
void exportarClientes(Cliente* cliente, Mobilidade* mobilidade);

