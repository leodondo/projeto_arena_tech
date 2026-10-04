/******************************************************************************

Projeto 1 - Algoritmos e Pensamento Computacional
   Arena Tech - Planejador de Maratona Gamer
 
    Leonardo Hiroshi Dondo de Freitas - RGM: 46610049
    Rafael Marques de Oliveira - RGM: 47877081
 
   Descricao: le os dados de uma maratona gamer (participantes,
   computadores, energia, alimentacao e outros custos) e calcula
   a quantidade de times, o consumo de energia, os custos e o
   custo medio por participante.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
 
int main() {
 
    int participantes;
    int jogadoresPorTime;
    int computadores;
    float potencia;       
    float duracao;        
    float precoKwh;       
    float precoKit;       
    float outrosCustos;  
 
    int timesNecessarios;
    float consumoEnergiaKwh;
    float custoEnergia;
    float custoAlimentacao;
    float custoTotal;
    float custoMedioParticipante;
 
    printf("=== Arena Tech - Planejador de Maratona Gamer ===\n\n");
 
    printf("Quantidade total de participantes: ");
    scanf("%d", &participantes);
 
    printf("Quantidade de jogadores por time: ");
    scanf("%d", &jogadoresPorTime);
 
    printf("Quantidade de computadores: ");
    scanf("%d", &computadores);
 
    printf("Potencia media de cada computador (W): ");
    scanf("%f", &potencia);
 
    printf("Duracao do evento (horas): ");
    scanf("%f", &duracao);
 
    printf("Preco do kWh de energia (R$): ");
    scanf("%f", &precoKwh);
 
    printf("Preco do kit de alimentacao (R$): ");
    scanf("%f", &precoKit);
 
    printf("Outros custos do evento (R$): ");
    scanf("%f", &outrosCustos);
 
    timesNecessarios = (int) ceil(participantes / (float) jogadoresPorTime);
 
    consumoEnergiaKwh = (computadores * potencia * duracao) / 1000.0;
 
    custoEnergia = consumoEnergiaKwh * precoKwh;
 
    custoAlimentacao = participantes * precoKit;
 
    custoTotal = custoEnergia + custoAlimentacao + outrosCustos;
 
    custoMedioParticipante = custoTotal / participantes;
 
    printf("\n=== Relatorio Final - Arena Tech ===\n");
    printf("Times necessarios: %d\n", timesNecessarios);
    printf("Consumo estimado de energia: %.2f kWh\n", consumoEnergiaKwh);
    printf("Custo da energia: R$ %.2f\n", custoEnergia);
    printf("Custo da alimentacao: R$ %.2f\n", custoAlimentacao);
    printf("Custo total do evento: R$ %.2f\n", custoTotal);
    printf("Custo medio por participante: R$ %.2f\n", custoMedioParticipante);
 
    return 0;
}
