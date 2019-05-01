//
// Created by Blond on 20/04/2019.
//

#ifndef C___INPUTDATA_H
#define C___INPUTDATA_H


#include <string>

template<class T>
class InputData {
public:
	static T FromInputString(const std::string& input);
};

#endif //C___INPUTDATA_H
