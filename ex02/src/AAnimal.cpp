/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:46:12 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/19 16:46:13 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal(void) : name(""), type("")
{
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string& name) : name(name), type("")
{
    std::cout << "AAnimal constructor called with name: " << this->name << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : name(other.name), type(other.type)
{
    std::cout << "AAnimal copy constructor called for: " << this->name << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->type = other.type;
    }
    std::cout << "AAnimal copy assignment operator called" << std::endl;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

const std::string& AAnimal::getName() const
{
    return this->name;
}

void AAnimal::setName(const std::string& name)
{
    this->name = name;
}

const std::string& AAnimal::getType() const
{
    return this->type;
}

void AAnimal::setType(const std::string& type)
{
    this->type = type;
}
