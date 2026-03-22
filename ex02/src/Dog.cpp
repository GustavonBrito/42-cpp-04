/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:46:19 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/21 20:35:45 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void) : AAnimal()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string& name) : AAnimal(name)
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog constructor called with name: " << this->name << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
    this->type = "Dog";
    this->brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor called for: " << this->name << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        AAnimal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*other.brain);
        this->type = "Dog";
    }
    std::cout << "Dog copy assignment operator called" << std::endl;
    return *this;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}

Brain* Dog::getBrain(void) const
{
    return this->brain;
}
