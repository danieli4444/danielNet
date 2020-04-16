#include <iostream>
#include "nncell.h"

int main(int argc, char *argv[])
{
	std::cout << "Starting to Build Perceptron:" << std::endl;
	std::cout << "init cells:" << std::endl;
	NNcell *cell_A = new NNcell();
	NNcell *cell_B = new NNcell();

	delete cell_A;
}