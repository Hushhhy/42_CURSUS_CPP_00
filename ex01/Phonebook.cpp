/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:54:31 by codespace         #+#    #+#             */
/*   Updated: 2025/02/10 18:42:51 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


Phonebook::Phonebook() : currentIndex(0) {}

void Phonebook::addContact() {
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    std::cout << "Enter first name: ";
    std::getline(std::cin, firstName);
    std::cout << "Enter last name: ";
    std::getline(std::cin, lastName);
    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkestSecret);

    if (firstName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty()) {
        std::cout << "Error: All fields must be filled." << std::endl;
        return;
    }

    contacts[currentIndex % 8].setContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
    currentIndex++;
}

void Phonebook::searchContacts() const {
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < 8; ++i) {
        if (!contacts[i].isEmpty()) {
            contacts[i].displaySummary(i + 1);
        }
    }
    int index;
    std::cout << "Enter the index of the contact to display: ";
    std::cin >> index;
    if (std::cin.fail()) {
        std::cin.clear(); // Clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the rest of the input
        std::cout << "Error: Invalid input." << std::endl;
        return;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the rest of the input

    if (index < 1 || index > 8 || contacts[index - 1].isEmpty()) {
        std::cout << "Error: Invalid index." << std::endl;
    } else {
        contacts[index - 1].displayContact();
    }
}
