//
// Created by Blond on 20/04/2019.
//

#ifndef C___INPUTREADER_H
#define C___INPUTREADER_H


#include <list>
#include <string>
#include <fstream>
#include "InputDatum/InputData.h"

template<class T>
class InputReader {
public:
	std::list<T> readInput(const std::string &inputPath) {
		std::ifstream inFile(inputPath);

		std::string line;
		std::list<T> datum = std::list<T>();
		while (std::getline(inFile, line)) {
			datum.push_back(T::FromInputString(line));
		}

		return datum;
	}
};


#endif //C___INPUTREADER_H
