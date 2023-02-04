/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:02:33 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/25 14:48:23 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

static void isInTest(Point a, Point b, Point c, Point point)
{
	bool	ret = bsp(a, b, c, point);
	if (ret == true){
		std::cout << "is point in: " << point.getX() << ", " << point.getY() << std::endl;
		std::cout << "a pos: " << a.getX() << ", " << a.getY() << std::endl;
		std::cout << "b pos: " << b.getX() << ", " << b.getY() << std::endl;
		std::cout << "c pos: " << c.getX() << ", " << c.getY() << std::endl;
		std::cout << "It is in" << std::endl;
	} else {
		std::cout << "is point out: " << point.getX() << ", " << point.getY() << std::endl;
		std::cout << "a pos: " << a.getX() << ", " << a.getY() << std::endl;
		std::cout << "b pos: " << b.getX() << ", " << b.getY() << std::endl;
		std::cout << "c pos: " << c.getX() << ", " << c.getY() << std::endl;
		std::cout << "It is out" << std::endl;
	}
	std::cout << std::endl;
}

int main( void ) 
{
	Point a(0, 10);
	Point b(20, 0);
	Point c(10, 30);
	Point in(10, 15);
	Point out(30, 15);
	
	isInTest(a, b, c, in);
	isInTest(a, b, c, out);
	return 0;
}