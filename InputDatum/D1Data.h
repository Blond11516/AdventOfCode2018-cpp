//
// Created by Blond on 20/04/2019.
//

#ifndef C___D1DATA_H
#define C___D1DATA_H


#include "InputData.h"

class D1Data : InputData<D1Data> {
public:
	explicit D1Data(int value);

	static D1Data FromInputString(const std::string& input);
	int getValue() const;

private:
	int value;
};


#endif //C___D1DATA_H
