//
// Created by Blond on 20/04/2019.
//

#include "InputData.h"
#include "D1Data.h"

template<class T>
T InputData<T>::FromInputString(const std::string& input) {
	return T::FromInputString(input);
}

template class InputData<D1Data>;
