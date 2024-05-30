/*
 * ATMController.cpp
 *
 *  Created on: 30 may. 2024
 *      Author: tecnologo
 */

#include "ATMController.h"
#include <list>
#include <iostream>
using namespace std;


ATMController::ATMController() {
	// TODO Auto-generated constructor stub

}

ATMController::~ATMController() {
	// TODO Auto-generated destructor stub
}


void retirar(int nroCuenta, string nomBanco){


}

void ATMController:: consultar(int nroCuenta, string nomBanco){

	Banco *bEncontrado = nullptr;
			list<Banco*>::iterator itV;
			for (itV=bancos.begin(); itV != bancos.end(); ++itV) {
				if (((Banco*)*itV)->nombre == nomBanco) {
					bEncontrado = ((Banco*)*itV);

					bEncontrado->buscarCuenta(nroCuenta);
					break;
				}
			}



}
