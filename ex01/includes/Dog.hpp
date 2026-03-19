/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:45:40 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/19 16:45:41 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(const std::string& name);
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        virtual ~Dog();

        virtual void makeSound() const;

        Brain* getBrain(void) const;

    private:
        Brain* brain;
};

#endif
