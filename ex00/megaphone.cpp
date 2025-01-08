/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:53:43 by codespace         #+#    #+#             */
/*   Updated: 2025/01/08 18:53:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    } else {
        for (int i = 1; i < argc; i++) {
            for (int j = 0; argv[i][j]; j++) {
                std::cout << (char)std::toupper(argv[i][j]);
            }
            if (i < argc - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}