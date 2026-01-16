#include "zombie.hpp"

int main(void){
	Zombie	*ptr;

	ptr = newZombie("fred");
	ptr->announce();
	delete ptr;
	randomChump("fazber");
}
