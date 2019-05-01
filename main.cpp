#include <iostream>
#include "InputReader.h"
#include "InputDatum/D1Data.h"
#include "Solvers/D1Solver.h"

int main() {
	int day, challenge;
	std::cin >> day >> challenge;

	switch (day) {
		case 1:
			InputReader<D1Data> inputReader = InputReader<D1Data>();
			std::list<D1Data> datum = inputReader.readInput("InputFiles\\d1.txt");
			D1Solver().solve(challenge, datum);
			break;
	}

	return 0;
}