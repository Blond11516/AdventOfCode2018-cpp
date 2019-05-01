//
// Created by Blond on 01/05/2019.
//

#include <iostream>
#include "D1Solver.h"

void D1Solver::solve1(std::list<D1Data> datum) {
    int sum = 0;
    for (D1Data data : datum) {
    	sum += data.getValue();
    }

    std::cout << sum;
}

void D1Solver::solve2(std::list<D1Data> datum) {

}
