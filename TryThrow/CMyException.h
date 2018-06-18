#pragma once
#include"Library.h"

class CMyException {
private:
	char* mistake;
public:
	CMyException() {
		mistake = "";
	}
	CMyException(char* mistake) {
		this->mistake = mistake;
	}
};