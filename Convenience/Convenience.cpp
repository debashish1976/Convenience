// Convenience.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <complex>


int _tmain(int argc, _TCHAR* argv[])
{
	auto i1 = 1u;
	auto i2 = 1;
	auto i3 = 1L;
	auto i4 = 1.;
	auto i5 = 1.f;

	using namespace std::string_literals;

	auto s1 = "Hello!";
	auto s2 = "Hello!"s;

	using namespace std::complex_literals;

	std::complex<double> a = 1. + 2i;

	auto b = 2. * a;

	std::cout << "a: " << a << "*2 is: " << b << std::endl;

	b = 1i *a;
	std::cout << "a: " << a << "*i is: " << b << std::endl;

	int mask = 42; // 00101010
	int mask1 = 0b00101010;

	int hex = 0x2a;
	int oct = 052;

	int i = 1'00'0'00'0;
	return 0;
}

