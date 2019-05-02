//
// Created by Blond on 2019-05-01.
//

#include <map>
#include <iostream>
#include "D2Solver.h"

void D2Solver::solve1(const std::list<D2Data> &datum) const {
    int nb2Letters = 0;
    int nb3Letters = 0;
    for (D2Data data : datum) {
    	std::map<char, int> lettersDict = std::map<char, int>();
		for (char c : data.getValue()) {
			lettersDict[c]++;
		}
		bool twice = false;
		bool thrice = false;
		for (auto item : lettersDict) {
			if (item.second == 2) {
                twice = true;
			}
			else if (item.second == 3) {
                thrice = true;
			}
		}

		if (twice) nb2Letters++;
		if (thrice) nb3Letters++;
	}

    std::cout << (nb2Letters * nb3Letters);
}

void D2Solver::solve2(const std::list<D2Data> &datum) const {
	int nbDiffs;
	int diffIdx;
	for (D2Data data : datum) {
		for (D2Data data2 : datum) {
			nbDiffs = 0;
			for (int i = 0; i < data.getValue().size(); i++) {
				if (data.getValue()[i] != data2.getValue()[i]) {
					nbDiffs++;
					diffIdx = i;
				}
			}

			if (nbDiffs == 1) {
				std::cout << data.getValue().erase(diffIdx, 1);
				return;
			}
		}
	}
}
