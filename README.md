# EEL7123_Elevator
Elevador C++ Disciplina EEL7123 - Tópico Avançado em Sistemas Digitais

Problema:Crie uma classe denominada Elevador para armazenar as informações de um elevador dentro de um prédio.

- A classe deve armazenar o andar atual (0=térreo), total de andares no
prédio, excluindo o térreo, capacidade do elevador, e quantas pessoas
estão presentes nele.

- A classe deve também disponibilizar os seguintes métodos:
    - inicializa: que deve receber como parâmetros: a capacidade do elevador e o total de
    andares no prédio (os elevadores sempre começam no térreo e vazios);
    - entra: para acrescentar uma pessoa no elevador (só deve acrescentar se ainda
    houver espaço);
    - sai: para remover uma pessoa do elevador (só deve remover se houver alguém
    dentro dele);
    - sobe: para subir um andar (não deve subir se já estiver no último andar);
    - desce: para descer um andar (não deve descer se já estiver no térreo);
    - get....: métodos para obter cada um dos os dados armazenados.
