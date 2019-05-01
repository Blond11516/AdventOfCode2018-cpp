//
// Created by Blond on 01/05/2019.
//

#include <iostream>
#include <set>
#include "D1Solver.h"

void D1Solver::solve1(std::list<D1Data> datum) {
    int sum = 0;
    for (D1Data data : datum) {
    	sum += data.getValue();
    }

    std::cout << sum;
}

void D1Solver::solve2(std::list<D1Data> datum) {
	std::set<int> frequencies = std::set<int>();
	int sum = 0;
    auto iter = datum.begin();
	while (frequencies.find(sum) == frequencies.end()) {
		frequencies.insert(sum);

		sum += iter->getValue();
		++iter;
		if (iter == datum.end()) {
			iter = datum.begin();
		}
	}

	std::cout << sum;
}
