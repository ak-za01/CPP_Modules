#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*head;

	if (N <= 0)
		return NULL;
	head = new Zombie[N];
	if (!head)
		return NULL;
	for (int i = 0; i < N; i++){
		head[i].set_name(name);
	}
	return head;
}

