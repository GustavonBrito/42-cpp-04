/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:46:04 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/19 16:53:09 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain(void);
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();

        void setIdea(int index, const std::string& idea);
        const std::string& getIdea(int index) const;

    private:
        std::string ideas[100];
};

#endif
