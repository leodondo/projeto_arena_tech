# Projeto Arena Tech

## Integrantes
Leonardo Hiroshi Dondo de Freitas - RGM: 46610049;
Rafael Marques de Oliveira - RGM: 47877081

## Explicação da Solução
O programa foi desenvolvido em linguagem C para auxiliar na organização da Arena Tech, uma maratona gamer no campus.

Ele coleta pelo teclado, utilizando o scanf(), os dados do evento:
Quantidade de participantes;
Jogadores por time;
Número de computadores;
Potência média de cada máquina;
Duração do evento;
Preço do kWh;
Preço do kit de alimentação;
Outros custos.

## Cálculos Realizados
A partir dos dados informados, o programa realiza os seguintes cálculos:

Quantidade de times - A quantidade de times necessários é calculada dividindo o total de participantes pelo número de jogadores por time. Como um time incompleto também precisa ser contabilzado, o resultado é arredondado para cima utilizando a função ceil() da biblioteca math.h.

Consumo e custo de energia - O consumo de energia é calculado multiplicando: Número de computadores X potência média X duração do evento. O resultado é obtido em Wh e depois convertido para kWh. Após isso o consumo é multiplicado pelo preço do kWh para obter o total do custo de energia.

Custo de alimentação - O custo de alimentação é calculado multiplicando a quantidade de participantes pelo preço do kit de alimentação: Participantes X preço do kit.

Custo total - O custo total do evento é obtido somando: custo de energia, custo de alimentação, outros custos.

Custo médio por participante - O custo total é dividido pela quantidade de participantes para obter o custo médio por participante.

## Recursos Utilizados
O programa utiliza alguns recursos da linguagem C:
scanf() para entrada de dados;
printf() para exibição dos resultados;
ceil() da biblioteca math.h para arredondamento para cima;
Conversão explícita de tipo, como (float), para evitar erros de divisão inteira;
%.2f para exibir valores monetários e de energia com duas casas decimais.

## Objetivo
O objetivo do projeto é facilitar o planejamento e a organização dos custos de uma maratona gamer, permitindo calcular de forma rápida a quantidade de times, o consumo de energia, os gastos com alimentação, os demais custos e o valor médio por participante.
