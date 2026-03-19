/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:46:26 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/19 16:55:34 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"
#include "includes/Cat.hpp"

#include <iostream>

void print_section(const std::string& title)
{
    std::cout << "\n===================================" << std::endl;
    std::cout << title << std::endl;
    std::cout << "===================================" << std::endl;
}

int main()
{
    print_section("TEST 1: Create Dogs and Cats");

    Dog dog("Rex");
    Cat cat("Whiskers");

    std::cout << dog.getType() << " name: " << dog.getName() << std::endl;
    std::cout << cat.getType() << " name: " << cat.getName() << std::endl;

    print_section("TEST 2: Make Sounds");

    dog.makeSound();
    cat.makeSound();

    print_section("TEST 3: Deep Copy Test");

    Dog dog1("Buddy");
    dog1.getBrain()->setIdea(0, "Play fetch");

    Dog dog2 = dog1;
    dog2.getBrain()->setIdea(0, "Take a nap");

    std::cout << "Dog1 idea: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;

    print_section("Tests Completed");

    return 0;
}
