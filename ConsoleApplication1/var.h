#pragma once
#include <iostream>
#include "Exception.h"

using namespace std;

template<typename type>
class var
{
private:
	type value;
public:
	var();

	var(type value);
	void operator=(var<type> obj);
	var<type> operator+(var<type> obj);
	var<type> operator-(var<type> obj);
	var<type> operator*(var<type> obj);
	var<type> operator/(var<type> obj);
	var<type> operator+=(var<type> obj);
	var<type> operator-=(var<type> obj);
	bool operator==(var<type> obj);
	bool operator>(var<type> obj);
	bool operator<(var<type> obj);
	friend ostream& operator<<(ostream &os, var obj);

	virtual ~var();
};

template<>
class var<char*>
{
private:
	char *value;
public:
	var();

	var(const char *value);
	char* operator=(char* obj);
	char* operator+(var<char*> obj);
	char* operator-(var<char*> obj);
	char* operator*(var<char*> obj);
	char* operator/(var<char*> obj);
	char* operator+=(var<char*> obj);
	char* operator-=(var<char*> obj);
	bool operator==(char *obj);
	bool operator>(char *obj);
	bool operator<(char *obj);
	friend ostream& operator<<(ostream &os, char *obj);

	virtual ~var();
};

var<char*>::var()
{
	value = nullptr;
}

var<char*>::var(const char * value)
{
	this->value = new char[strlen(value) + 1];

	strcpy_s(this->value, strlen(value) + 1, value);
}

char* var<char*>::operator=(char* obj)
{
	this->value = new char[strlen(value) + 1];
	strcpy_s(this->value, strlen(value) + 1, obj);

	return this->value;
}

char* var<char*>::operator+(var<char*> obj)
{
	strncat_s(this->value, strlen(this->value), obj.value, strlen(obj.value) + 1);

	return value;
}

char* var<char*>::operator-(var<char*> obj)
{
	throw Exception("Class var", 84, "Trying to deduct strings.");
	return NULL;
}

char* var<char*>::operator*(var<char*> obj)
{
	throw Exception("Class var", 90, "Trying to multiply strings.");
	return NULL;
}

char* var<char*>::operator/(var<char*> obj)
{
	throw Exception("Class var", 96, "Trying to divide strings.");
	return NULL;
}

char* var<char*>::operator+=(var<char*> obj)
{
	strncat_s(this->value, strlen(this->value), obj.value, strlen(obj.value) + 1);

	return this->value;
}

char* var<char*>::operator-=(var<char*> obj)
{
	throw Exception("Class var", 109, "Trying to deduct strings.");

	return NULL;
}

bool var<char*>::operator==(char * obj)
{
	if (strcmp(this->value, obj) == 0)
		return true;
	else return false;
}

bool var<char*>::operator>(char * obj)
{
	if (strcmp(this->value, obj) > 0)
		return true;
	else return false;
}

bool var<char*>::operator<(char * obj)
{
	if (strcmp(this->value, obj) < 0)
		return true;
	else return false;
}

template<typename type>
var<type>::var()
{
	value = NULL;
}

template<typename type>
var<type>::var(type value)
{
	this->value = value;
}

template<typename type>
void var<type>::operator=(var<type> obj)
{
	this->value = obj.value;
}

template<typename type>
var<type> var<type>::operator+(var<type> obj)
{
	return var(this->value + obj.value);
}

template<typename type>
var<type> var<type>::operator-(var<type> obj)
{
	return var(value - obj.value);
}

template<typename type>
var<type> var<type>::operator*(var<type> obj)
{
	return var(value * obj.value);
}

template<typename type>
var<type> var<type>::operator/(var<type> obj)
{
	if (obj.value == 0)
		throw Exception("Class var", 175, "Trying to divide on 0.");

	return var(value / obj.value);
}

template<typename type>
var<type> var<type>::operator+=(var<type> obj)
{
	return var(value += obj.value);
}

template<typename type>
var<type> var<type>::operator-=(var<type> obj)
{
	return var(value -= obj.value);
}

template<typename type>
bool var<type>::operator==(var<type> obj)
{
	if (value == obj.value)
		return true;
	else return false;
}

template<typename type>
bool var<type>::operator>(var<type> obj)
{
	if (value > obj.value)
		return true;
	else return false;
}

template<typename type>
bool var<type>::operator<(var<type> obj)
{
	if (value < obj.value)
		return true;
	else return false;
}

template<typename type>
ostream & operator<<(ostream & os, var<type> obj)
{
	os << obj.value << endl;

	return os;
}

ostream & operator<<(ostream & os, char * obj)
{
	os << obj << endl;

	return os;
}

template<typename type>
var<type>::~var()
{
}

var<char*>::~var()
{
	delete[] value;
}