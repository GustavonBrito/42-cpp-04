/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:18:41 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/19 16:18:42 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : name(""), type("") {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& name) : name(name), type("") 
{
    std::cout << "WrongAnimal constructor called with name: " << this->name << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : name(other.name), type(other.type) {
    std::cout << "WrongAnimal copy constructor called for: " << this->name << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        this->name = other.name;
        this->type = other.type;
    }
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

const std::string& WrongAnimal::getName() const {
    return this->name;
}

void WrongAnimal::setName(const std::string& name) {
    this->name = name;
}

const std::string& WrongAnimal::getType() const {
    return this->type;
}

void WrongAnimal::setType(const std::string& type) {
    this->type = type;
}

void WrongAnimal::makeSound() const {
    std::cout << "Some generic wrong animal sound..." << std::endl;
}
