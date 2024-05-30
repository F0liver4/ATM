/*
 * Transaccion.h
 *
 *  Created on: 30 may. 2024
 *      Author: tecnologo
 */
#include <string>
#ifndef TRANSACCION_H_
#define TRANSACCION_H_
using namespace std;


class Transaccion {
public:
	Transaccion();
	virtual ~Transaccion();
private:
	string fecha;
	string hora;
	float importe;
};

#endif /* TRANSACCION_H_ */
