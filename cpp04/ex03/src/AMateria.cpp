#include "AMateria.hpp"

AMateria::AMateria(){
}

AMateria::AMateria(std::string const& type){
	this->type = type;
}

AMateria::~AMateria(){
}

AMateria::AMateria(const AMateria& materia){
	*this = materia;
}

AMateria& AMateria::operator=(AMateria const& materia){
	if (this != &materia){
		this->type = materia.getType();
	}
	return *this;
}

std::string const& AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target){
	(void)target;
}

std::ostream& operator<<(std::ostream &lhs, AMateria& rhs)
{
	lhs << rhs.getType();
	return lhs;
}
