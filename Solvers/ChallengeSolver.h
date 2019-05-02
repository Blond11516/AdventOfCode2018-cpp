//
// Created by Blond on 21/04/2019.
//

#ifndef C___CHALLENGESOLVER_H
#define C___CHALLENGESOLVER_H


#include <list>
#include "../InputDatum/InputData.h"

template<class T>
class ChallengeSolver {
public:
	void solve(int challenge, const std::list<T> &datum) const {
		if (challenge == 1) {
			solve1(datum);
		}
		else {
			solve2(datum);
		}
	}

protected:
	virtual void solve1(const std::list<T> &datum) const = 0;

	virtual void solve2(const std::list<T> &datum) const = 0;
};


#endif //C___CHALLENGESOLVER_H
