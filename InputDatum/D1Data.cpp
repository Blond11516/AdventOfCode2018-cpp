//
// Created by Blond on 20/04/2019.
//

#include "D1Data.h"

D1Data::D1Data(int value) {
	this->value = value;
}

D1Data D1Data::FromInputString(const std::string &input) {
	return D1Data(std::stoi(input));
}

int D1Data::getValue() const {
    return this->value;
}

