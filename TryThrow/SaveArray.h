#pragma once
#include"Library.h"
template<typename T>
class SaveArray {
private:
	T *els;
	size_t size;
public:
	SaveArray(int size) {
		this->size = size;
		this->els = new T[size];
	}

	T& operator[](int index) {
		if (index < 0) throw "Index is too low";
		else if (index >= size) throw "Index is too hight";
		return els[index];
	}

	~SaveArray() {
		delete[]els;
	}

};
