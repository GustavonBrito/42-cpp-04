/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:18:23 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/21 18:13:02 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:    
        Animal(void);
        Animal(const std::string& name);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();
        
        virtual void makeSound() const;

        const std::string& getType() const;
        const std::string& getName() const;

        void setType(const std::string& type);
        void setName(const std::string& name);

    protected:
        std::string name;
        std::string type;
};

#endif