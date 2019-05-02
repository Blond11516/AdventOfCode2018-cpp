#include <utility>

//
// Created by Blond on 2019-05-01.
//

#include "D2Data.h"

D2Data::D2Data(std::string value) {
	this->value = std::move(value);
}

D2Data D2Data::FromInputString(const std::string &input) {
	return D2Data(input);
}

std::string D2Data::getValue() const {
    return this->value;
}
