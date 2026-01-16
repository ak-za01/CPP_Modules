#include "zombie.hpp"

void 	randomChump(std::string name){
	Zombie dnd;

	dnd.set_name(name);
	dnd.announce();
}

