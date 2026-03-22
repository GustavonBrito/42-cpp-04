/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:45:54 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/21 20:46:30 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void) : Animal()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string& name) : Animal(name)
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat constructor called with name: " << this->name << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    this->type = "Cat";
    this->brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor called for: " << this->name << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*other.brain);
        this->type = "Cat";
    }
    std::cout << "Cat copy assignment operator called" << std::endl;
    return *this;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow! Meow!" << std::endl;
}

Brain* Cat::getBrain(void) const
{
    return this->brain;
}
