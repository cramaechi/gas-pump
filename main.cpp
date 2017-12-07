//Program uses a class called GasPump to simulate a gas pump machine's behavior.
#include <iostream> 
#include <cstdlib>
#include "gaspump.h"

using namespace std;

int main()
{
	GasPump pump;
	pump.input();
	pump.output();
	
	return 0;
}
