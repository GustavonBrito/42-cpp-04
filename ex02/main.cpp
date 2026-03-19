/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:46:22 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/19 16:56:51 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"
#include "includes/Cat.hpp"

#include <iostream>

int main()
{
    Dog dog("Bobby");
    Cat cat("Whiskers");

    std::cout << "Dog: " << dog.getType() << std::endl;
    dog.makeSound();

    std::cout << "\nCat: " << cat.getType() << std::endl;
    cat.makeSound();

    return 0;
}
