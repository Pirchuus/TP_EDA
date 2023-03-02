#pragma once
// Estrutura para representar um meio de mobilidade el�trica
typedef struct mobilidade
{
    int id; // Identificador �nico do meio de mobilidade
    char tipo[100]; // Tipo do meio de mobilidade
    float nivel_bateria; // N�vel atual da bateria
    float autonomia; // autonomia do tipo do meio de mobilidade
    struct mobilidade* next; // Ponteiro para o pr�ximo meio de mobilidade na lista

} Mobilidade;

void listarMobilidades(Mobilidade* mobilidade);
int existeMobilidade(Mobilidade* mobilidade, int id);
Mobilidade* inserirMobilidade(Mobilidade* mobilidade, int id, char tipo[], float nivel_bateria, float autonomia);
Mobilidade* removerMobilidade(Mobilidade* mobilidade, int id);
Mobilidade* atualizarMobilidade(Mobilidade* mobilidade, int id, char tipo[], float nivel_bateria, float autonomia);