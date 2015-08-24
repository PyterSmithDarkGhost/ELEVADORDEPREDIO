////////////////////////////////////////////////////////////////////////////////
//Fork  https://github.com/carlosqueiroz/EEL7123_Elevator
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
////////////////////////////////////////////////////////////////////////////////
// Author      : Carlos Queiroz and Guilherme  Rodrigues
// Version     : 1.0
// Copyright   : http://www.apache.org/licenses/LICENSE-2.0.txt
// Description : Elevator C++ Program
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Elevador.h"
using namespace std;

int main() {
	// Instanciando o objeto elevador
	 Elevador elevador;

	// definindo quantos andares e a capacidade do elevador
    elevador.inicializa(10,7); // capacidade do elevador = 10, andares = 7





    int option;
    do
    {
       //Mostrando as opções do men
       cout << " " << endl;
       cout << " " << endl;
       cout << " -- Selecione uma opção -- " << endl;
       cout << "1) Inserir Passageiro no elevador " << endl;
       cout << "2) Retirar Passageiro do elevador " << endl;
       cout << "3) Subir" << endl;
       cout << "4) Descer " << endl;
       cout << "5) Exibir andar atual " << endl;
       cout << "6) Exibir passageiros remanescentes " << endl;
       cout << "7) Sair do programa " << endl;
       //Solicitando para o usuário digitar uma opção
       cout << "Por Favor, selecione uma opção : ";
       cin >> option;  // pegando valor digitado

       if(option == 1) // checando se usuario digitou a opção 1
       {
    	   //Inserindo usuários
    	   cout << "Um passageiro embarcou!"<< endl;
    	   elevador.entra(1);
       }
       else if(option == 2) // checando se usuario digitou a opção 2
       {
    	   //Retirando usuários
    	   cout << "Um passageiro desembarcou!"<< endl;
    	   elevador.sai(1);
       }
       else if(option == 3) // checando se usuario digitou a opção 3
       {
         //subindo
    	   cout << "O elevador está subindo ..."<< endl;
          elevador.sobe(1);
       }
       else if(option == 4) // checando se usuario digitou a opção 4
       {
         //descendo
    	   cout << "O elevador está descendo ..."<< endl;
    	   elevador.desce(1);
       }else if(option == 5) // checando se usuario digitou a opção 5
       {
         //Andar Atual
    	   cout << "Andar Atual:"<< endl;
    	   cout <<  elevador.getAndarAtual();
       }
       else if(option == 6) // checando se usuario digitou a opção 6
       {
    	   cout << "Passageiros remanescentes:"<< endl;
         // Passageiros Remanescentes
    	   cout << elevador.getPessoasPresentes();

       }
       else if(option == 7) // checando se usuario digitou a opção 5
       {
         cout << "Encerrando programa" << endl;
       }
       else // checando se usuario digitou a  nenhuma opção válida
       {
         //Displaying error message
         cout << "Digite uma opção válida!" << endl;
       }

    }
    while(option != 7);  //condição  do-while loop

     return 0;



}
