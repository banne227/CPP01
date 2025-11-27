#ifndef ZOBIE_HPP
#define ZOBIE_HPP

#include <iostream>
#include <string>

class Zobie {
public:
	Zobie(const std::string& name);
	~Zobie();

    void announce(void);

private:
    std::string _name;
};

#endif