#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain 
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& brain);
		~Brain();
		Brain& operator=(Brain const& brain);
		std::string getIdeas(int i);
};

#endif