#include <iostream>
#include "InputReader.h"
#include "InputDatum/D1Data.h"
#include "Solvers/D1Solver.h"
#include "Solvers/D2Solver.h"
#include "InputDatum/D2Data.h"

int main() {
	int day, challenge;
	std::cin >> day >> challenge;

	switch (day) {
		case 1:
			D1Solver().solve(challenge, InputReader::readInput<D1Data>("InputFiles\\d1.txt", &D1Data::FromInputString));
			break;
		case 2:
			D2Solver().solve(challenge, InputReader::readInput<D2Data>("InputFiles\\d2.txt", &D2Data::FromInputString));
			break;
	}

	return 0;
}