/*
 * ATMController.h
 *
 *  Created on: 30 may. 2024
 *      Author: tecnologo
 */

#ifndef ATMCONTROLLER_H_
#define ATMCONTROLLER_H_

#include "Cuenta.h"
#include "Cliente.h"
#include "Banco.h"
#include "Deposito.h"
#include "Retiro.h"
#include "Transaccion.h"
#include "IATM.h"
#include <list>

class ATMController: public IATM {
private:
	list<Banco*> bancos;
	list<Cliente*> clientes;

public:

	ATMController();
	virtual ~ATMController();
	void retirar(int nroCuenta, string nomBanco);
	void consultar(int nroCuenta, string nomBanco);
};

#endif /* ATMCONTROLLER_H_ */
