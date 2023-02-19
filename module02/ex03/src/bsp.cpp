/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:02:27 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/25 14:24:04 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area(Point a, Point b, Point c)
{
	Fixed r = abs((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())) + 
				  (b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())) + 
				  (c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))) / 2;
	return r.toFloat();
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float a1, a2, a3, a4;
	
	//calculate triangle area
	a1 = area(a, b, c);
	//calculate PBC area
	a2 = area(point, b, c);
	//calculate PAC area
	a3 = area(point, a, c);
	//calculate PAB area
	a4 = area(point, a, b);
	return (a1 == a2 + a3 + a4);	
}