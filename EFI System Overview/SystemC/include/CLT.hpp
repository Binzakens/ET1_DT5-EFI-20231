#ifndef CLT_H
#define CLT_H

#include <iostream>
#include "GlobalDefines.hpp"
#include "../lib/Array.hpp"
#include "../lib/Math.hpp"

//=================================================

#ifdef SYSTEMC
#include <systemc.h>

using namespace sc_core;

class CLT : public sc_module {

private:
	float data;
	float** CLTSSTable;

public:

	sc_port<sc_signal_in_if<float>> input;

	SC_CTOR(CLT) : data(0) {
		CLTSSTable = Array::create(CLTSS_ROWS, CLTSS_COLS);
	};

	void loadTable(const char path[]);
	
	void check();

	float getData();

};

//=================================================

#else

class CLT {

private:
	float data;
	float** CLTSSTable;

public:

	CLT();

	void loadTable(const char path[]);
	
	void check();

	float getData();

};

#endif

//=================================================

#endif