#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie{
	private:
	std::string	name;
	
	public:
	void	set_name(const std::string& name);
	void	announce(void) const;
	Zombie();
	~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif