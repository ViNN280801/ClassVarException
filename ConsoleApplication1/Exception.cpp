#include "stdafx.h"
#include "Exception.h"
#include <string>

Exception::Exception()
{
	num_of_string = NULL;
}

Exception::Exception(string name_of_class_and_method, int num_of_string, string content_of_error)
{
	temp = to_string(num_of_string) + ": " + " " + name_of_class_and_method + " - " + content_of_error;

	this->name_of_class_and_method = name_of_class_and_method;
	this->num_of_string = num_of_string;
	this->content_of_error = content_of_error;

	Err = new char[temp.size() + 1];

	strcpy_s(Err, temp.size() + 1, temp.c_str());

}

const char * Exception::what() const
{
	return temp.c_str();
} 

Exception & Exception::operator=(const Exception & other)
{
	this->name_of_class_and_method = other.name_of_class_and_method;
	this->num_of_string = other.num_of_string;
	this->content_of_error = other.content_of_error;
	this->Err = other.Err;

	return *this;
}

Exception::~Exception()
{
	delete[] Err;
}