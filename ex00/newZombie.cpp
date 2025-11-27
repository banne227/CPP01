#include "Zobie.hpp"

Zobie* newZombie(const std::string& name) 
{
   return new Zobie(name);
}