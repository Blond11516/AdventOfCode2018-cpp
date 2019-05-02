//
// Created by Blond on 2019-05-01.
//

#ifndef C___D2SOLVER_H
#define C___D2SOLVER_H


#include "ChallengeSolver.h"
#include "../InputDatum/D2Data.h"

class D2Solver : public ChallengeSolver<D2Data> {
private:
	void solve1(const std::list<D2Data> &datum) const override;
	void solve2(const std::list<D2Data> &datum) const override;
};


#endif //C___D2SOLVER_H
