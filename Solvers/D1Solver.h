//
// Created by Blond on 21/04/2019.
//

#ifndef C___D1SOLVER_H
#define C___D1SOLVER_H


#include "ChallengeSolver.h"
#include "../InputDatum/D1Data.h"

class D1Solver : public ChallengeSolver<D1Data> {
private:
	void solve1(std::list<D1Data> datum) override;
	void solve2(std::list<D1Data> datum) override;
};


#endif //C___D1SOLVER_H
