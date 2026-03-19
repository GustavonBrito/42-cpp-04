/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:18:32 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/19 16:18:33 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:    
        WrongCat(void);
        WrongCat(const std::string& name);
        WrongCat(const WrongCat& other);
        WrongCat& operator=(const WrongCat& other);
        ~WrongCat();

        void makeSound() const;

};

#endif
