#ifndef XKCD_H_INCLUDED
#define XKCD_H_INCLUDED

#include <iostream>

class XKCD{
public:
	XKCD(std::string);
	std::string crack();

private:
	std::string password;
};

#endif // XKCD_H_INCLUDED
