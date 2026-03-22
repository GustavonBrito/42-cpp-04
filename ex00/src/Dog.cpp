/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:18:39 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/21 20:23:31 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void) : Animal() {
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string& name) : Animal(name) {
    this->type = "Dog";
    std::cout << "Dog constructor called with name: " << this->name << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    this->type = "Dog";
    std::cout << "Dog copy constructor called for: " << this->name << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other)
    {
        Animal::operator=(other);
        this->type = "Dog";   
    }
    std::cout << "Dog copy assignment operator called" << std::endl;
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}
