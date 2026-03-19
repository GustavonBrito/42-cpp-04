/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:45:50 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/19 16:45:51 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void) : name(""), type("")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string& name) : name(name), type("")
{
    std::cout << "Animal constructor called with name: " << this->name << std::endl;
}

Animal::Animal(const Animal& other) : name(other.name), type(other.type)
{
    std::cout << "Animal copy constructor called for: " << this->name << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->type = other.type;
    }
    std::cout << "Animal copy assignment operator called" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

const std::string& Animal::getName() const
{
    return this->name;
}

void Animal::setName(const std::string& name)
{
    this->name = name;
}

const std::string& Animal::getType() const
{
    return this->type;
}

void Animal::setType(const std::string& type)
{
    this->type = type;
}
