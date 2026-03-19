/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:45:38 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/19 16:45:39 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(const std::string& name);
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        virtual ~Cat();

        virtual void makeSound() const;

        Brain* getBrain(void) const;

    private:
        Brain* brain;
};

#endif
