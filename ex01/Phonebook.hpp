/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:54:33 by codespace         #+#    #+#             */
/*   Updated: 2025/02/10 18:39:52 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <limits>

class Phonebook {
private:
    Contact contacts[8];
    int currentIndex;

public:
    Phonebook();
    void addContact();
    void searchContacts() const;
};

#endif