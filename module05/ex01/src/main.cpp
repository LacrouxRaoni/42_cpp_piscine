#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){

	std::cout << "\nBureaucrat tests!\n" << std::endl;
	{
		Bureaucrat bureaucrat1("Raoni1", 1);
        Bureaucrat bureaucrat2("Raoni2", 150);

        //test1 - increment too high
        try{
                bureaucrat1.incrementBureaucratGrade();
                std::cout << bureaucrat1 << std::endl;
        }
        catch(std::exception &e)
        {
                std::cout << e.what() << std::endl;
        }

        //test2 - decrement too slow
        try{
                bureaucrat2.decrementBureaucratGrade();
                std::cout << bureaucrat1 << std::endl;
        }
        catch(std::exception &e)
        {
                std::cout << e.what() << std::endl;
        }

        //test3 - increment & decrement ok
        try{
                std::cout << "before decrement: " << bureaucrat1 << std::endl;
                bureaucrat1.decrementBureaucratGrade();
                std::cout << "after decrement: " << bureaucrat1 << std::endl;

                std::cout << "before increment: " << bureaucrat2 << std::endl;
                bureaucrat2.incrementBureaucratGrade();
                std::cout << "after increment: " << bureaucrat2 << std::endl;
        }
        catch(std::exception &e)
        {
                std::cout << e.what() << std::endl;
        }

        //test4 - create obj with grade too high
        try{
                Bureaucrat bureaucrat3("Raoni3", 0);
        }
        catch(std::exception &e)
        {
                std::cout << e.what() << std::endl;
        }

        //test5 - create obj with grade too low
        try{
                Bureaucrat bureaucrat4("Raoni4", 151);
        }
        catch(std::exception &e)
        {
                std::cout << e.what() << std::endl;
        }	
	}


	std::cout << "\nFORM tests!\n" << std::endl;
	{
		//test1 Bureaucat can't sign because his grade is too low
		Bureaucrat bureaucrat1("Raoni1", 5);
		Form form1("form 1", 3, 3);
		try {
			bureaucrat1.signForm(form1);
		}
		catch(std::exception &e){

			std::cout << e.what() << std::endl;
		}

		//test2 Bureaucat can sign the form
		Bureaucrat bureaucrat2("Raoni2", 5);
		Form form2("form 2", 5, 5);
		try {
			bureaucrat2.signForm(form2);
		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}

		//test3 Form can't be create because grade is out of bounds
		try {
			Form form3("form 2", 0, 5);
		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}	
}
