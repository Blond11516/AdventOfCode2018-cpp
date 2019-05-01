//
// Created by Blond on 20/04/2019.
//

#ifndef C___INPUTREADER_H
#define C___INPUTREADER_H


#include <list>
#include <string>
#include <fstream>
#include "InputDatum/InputData.h"

class InputReader {
public:
	template<class T>
	static std::list<T> readInput(const std::string &inputPath, T (*fromInputString)(const std::string&)) {
		std::ifstream inFile(inputPath);

		std::string line;
		std::list<T> datum = std::list<T>();
		while (std::getline(inFile, line)) {
			datum.push_back(fromInputString(line));
		}

		return datum;
	}
};


#endif //C___INPUTREADER_H
