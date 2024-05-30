/*
 * Deposito.h
 *
 *  Created on: 30 may. 2024
 *      Author: tecnologo
 */

#ifndef DEPOSITO_H_
#define DEPOSITO_H_
#include "Transaccion.h"



class Deposito: public Transaccion {
public:
	Deposito();
	virtual ~Deposito();
};

#endif /* DEPOSITO_H_ */
