#include "Zombie.hpp"

void	Zombie::announce(void) const{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(const std::string& name){
	this->name = name;
}

Zombie::Zombie(){}

Zombie::~Zombie()
{
	std::cout << name << ": is dead!" << std::endl;
}
