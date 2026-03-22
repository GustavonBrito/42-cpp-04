/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:18:47 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/21 20:03:01 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/WrongCat.hpp"
#include "includes/WrongAnimal.hpp"

int main()
{
    const WrongAnimal* meta = new WrongAnimal();
    const Animal* j = new Dog();
    const WrongAnimal* i = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    return 0;
}