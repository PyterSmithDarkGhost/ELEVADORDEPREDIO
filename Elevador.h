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


#ifndef ELEVADOR_H_
#define ELEVADOR_H_

class Elevador { // Classe Elevador
// Atributos
private:
	int andarAtual = 0;
	int totalAndares = 0;
	int capacidadeElevador = 0;
	int pessoasPresentes = 0;

//Métodos
public:
	// Construtor
	Elevador();

	// Métodos de Acesso (Gets and Sets)

	int getAndarAtual() const {
		return andarAtual;
	}

	void setAndarAtual(int andarAtual) {
		this->andarAtual = andarAtual;
	}

	int getCapacidadeElevador() const {
		return capacidadeElevador;
	}

	void setCapacidadeElevador(int capacidadeElevador) {
		this->capacidadeElevador = capacidadeElevador;
	}

	int getPessoasPresentes() const {
		return pessoasPresentes;
	}

	void setPessoasPresentes(int pessoasPresentes) {
		this->pessoasPresentes = pessoasPresentes;
	}

	int getTotalAndares() const {
		return totalAndares;
	}

	void setTotalAndares(int totalAndares) {
		this->totalAndares = totalAndares;
	}

	//inicializa: que deve receber como parâmetros: a capacidade do elevador e o total de andares no prédio (os elevadores sempre começam no térreo e vazios);

	void inicializa(int capacidadeElevador, int totalAndares){
		this->capacidadeElevador = capacidadeElevador;
		this->totalAndares = totalAndares;

	}
	// entra: para acrescentar uma pessoa no elevador (só deve acrescentar se ainda houver espaço);
	void entra(int pessoaEntrou);
	// sai: para remover uma pessoa do elevador (só deve remover se houver alguém dentro dele);
	void sai(int pessoaSaiu);
	//sobe: para subir um andar (não deve subir se já estiver no último andar);
	void sobe(int elevadorSobe);
	//desce: para descer um andar (não deve descer se já estiver no térreo);
	void desce(int elevadorDesce);


};

#endif /* ELEVADOR_H_ */
