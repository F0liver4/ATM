/*
 * Banco.h
 *
 *  Created on: 30 may. 2024
 *      Author: tecnologo
 */

#ifndef BANCO_H_
#define BANCO_H_
#include <string>
using namespace std;


class Banco {
public:
	Banco();
	virtual ~Banco();
	void buscarCuenta(int nroCuenta);
private:
	string nombre;
};

#endif /* BANCO_H_ */
