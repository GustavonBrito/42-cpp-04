/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:46:02 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/19 16:46:03 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    public:
        AAnimal(void);
        AAnimal(const std::string& name);
        AAnimal(const AAnimal& other);
        AAnimal& operator=(const AAnimal& other);
        virtual ~AAnimal();

        virtual void makeSound() const = 0;

        const std::string& getType() const;
        const std::string& getName() const;

        void setType(const std::string& type);
        void setName(const std::string& name);

    protected:
        std::string name;
        std::string type;
};

#endif
