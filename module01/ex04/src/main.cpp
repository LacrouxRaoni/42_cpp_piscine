/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:01:26 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 11:01:27 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int argc, char *argv[]){
	File file;

	if (argc == 4)
	{
		if (!file.s1s2Handler(argv))
			return 1;
		if (!file.fileValidator(argv))
			return 1;
		file.findS1ParamInFile();
		file.copyFile();
	}
	else
		errorPrinter(-1);
	return 0;
}