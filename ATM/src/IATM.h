/*
 * IATM.h
 *
 *  Created on: 30 may. 2024
 *      Author: tecnologo
 */

#ifndef IATM_H_
#define IATM_H_
#include <string>
using namespace std;

class IATM {
public:

	virtual void retirar(int nroCuenta, string nomBanco)=0;
	virtual void consultar(int nroCuenta, string nomBanco)=0;
};




#endif /* IATM_H_ */
