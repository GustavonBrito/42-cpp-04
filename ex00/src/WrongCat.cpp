/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:18:43 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/21 20:26:15 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string& name) : WrongAnimal(name) {
    this->type = "WrongCat";
    std::cout << "WrongCat constructor called with name: " << this->name << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    this->type = "WrongCat";
    std::cout << "WrongCat copy constructor called for: " << this->name << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other)
    {
        WrongAnimal::operator=(other);
        this->type = "WrongCat";
    }
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Wrong Cat says: Meow! Meow!" << std::endl;
}
