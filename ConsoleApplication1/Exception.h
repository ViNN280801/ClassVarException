#pragma once
#include <exception>
#include <iostream>
#include <string>

using namespace std;

class Exception : public exception
{
private:
	string name_of_class_and_method;
	int num_of_string;
	string content_of_error;
	char *Err;
	string temp;
public:
	Exception();

	Exception(const string name_of_class_and_method, int num_of_string, const string content_of_error);
	virtual const char* what() const;
	Exception& operator=(const Exception& other);

	virtual ~Exception();
};