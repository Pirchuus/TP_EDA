#include <stdio.h>
#include "mobilidade.h"
#include "gestor.h"
#include "cliente.h"

#pragma region Menus

void mostraMenu();
void mostraMobilidadeMenu();
void mostraGestorMenu();
void mostraClienteMenu();

#pragma endregion



#pragma region Cliente

void listarClientes(Cliente* cliente);
int existeCliente(Cliente* cliente, int id);
Cliente* inserirCliente(Cliente* cliente, int id, char nome[], float saldo);
Cliente* removerCliente(Cliente* cliente, int id);
Cliente* atualizarCliente(Cliente* cliente, int id, char nome[], float saldo);

#pragma endregion



#pragma region Mobiblidade

void listarMobilidades(Mobilidade* mobilidade);
int existeMobilidade(Mobilidade* mobilidade, int id);
Mobilidade* inserirMobilidade(Mobilidade* mobilidade, int id, char tipo[], float nivel_bateria, float autonomia);
Mobilidade* removerMobilidae(Mobilidade* mobilidade, int id);
Mobilidade* atualizarMobilidade(Mobilidade* mobilidade, int id, char tipo[], float nivel_bateria, float autonomia);

#pragma endregion



#pragma region Gestor

void listarGestores(Gestor* gestor);
int existeGestor(Gestor* gestor, int id);
Gestor* inserirGestor(Gestor* gestor, int id, char nome[], char password[]);
Gestor* removerGestor(Gestor* gestor, int id);
Gestor* atualizarGestor(Gestor* gestor, int id, char nome[], char password[]);

#pragma endregion