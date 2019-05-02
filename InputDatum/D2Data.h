//
// Created by Blond on 2019-05-01.
//

#ifndef C___D2DATA_H
#define C___D2DATA_H


#include <string>
#include "InputData.h"

class D2Data : InputData<D2Data> {
public:
	explicit D2Data(std::string value);

	static D2Data FromInputString(const std::string& input);
	std::string getValue() const;

private:
	std::string value;
};


#endif //C___D2DATA_H
