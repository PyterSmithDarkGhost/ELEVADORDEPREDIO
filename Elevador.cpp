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
#include "Elevador.h"
using namespace std;


Elevador::Elevador(){}

	// entra: para acrescentar uma pessoa no elevador (só deve acrescentar se ainda houver espaço);
	void Elevador::entra(int novoPassageiro){
		int totalPessoas = getPessoasPresentes();// pegando pessoas que estão no elevador
		int capacidade = getCapacidadeElevador(); // capacidade do elevador
		if (totalPessoas <= capacidade){
			this->pessoasPresentes = this->pessoasPresentes+ novoPassageiro; // inserindo novo passageiro
		}else {
			cout << "O elevador esta lotado, favor esperar o próximo.";
		}
	}

	// sai: para remover uma pessoa do elevador (só deve remover se houver alguém dentro dele);
	void Elevador::sai(int pessoaSaiu){
		int totalPessoas = getPessoasPresentes();// pegando pessoas que estão no elevador
		if (totalPessoas<=0){
			cout << "Não existem passageiros no elevador";
		} else {
			this->pessoasPresentes = this->pessoasPresentes-pessoaSaiu; // retirando passageiro
		}
	}

	//sobe: para subir um andar (não deve subir se já estiver no último andar);

	void Elevador::sobe(int up){
		int andar = getAndarAtual(); // andar atual
		int totalAndares = getTotalAndares(); // total de andares
		if (andar == totalAndares){
			cout << "O elevador está no último andar, aperte para descer!";
		}else {
			this->andarAtual = this->andarAtual + up; // subindo
		}
	}
	//desce: para descer um andar (não deve descer se já estiver no térreo);
	void Elevador::desce(int down){
		int andar = getAndarAtual(); // andar atual
		if (andar == 0){
			cout << "O elevador está no térreo, aperte para subir!";
		}else {
			this->andarAtual = this->andarAtual - down; // descendo
		}

	}
