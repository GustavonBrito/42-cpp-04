/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:18:47 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/19 16:55:54 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/WrongCat.hpp"
#include "includes/WrongAnimal.hpp"

int main()
{
    const Animal* dog = new Dog("Rex");
    const Animal* cat = new Cat("Whiskers");
    
    std::cout << "Dog: " << dog->getType() << " says ";
    dog->makeSound();
    
    std::cout << "Cat: " << cat->getType() << " says ";
    cat->makeSound();
    
    delete dog;
    delete cat;
    
    return 0;
}
