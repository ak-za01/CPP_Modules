#include "Zombie.hpp"

int main(void){
	Zombie	*ptr;
	int		N = 10;

	ptr = zombieHorde(N, "beatttchhhhhhh");
	for (int i = 0; i < N; i++){
		ptr[i].announce();
	}
	delete[] ptr;
	return 0;
}
