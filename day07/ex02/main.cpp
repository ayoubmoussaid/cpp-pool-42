/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 17:51:46 by amoussai          #+#    #+#             */
/*   Updated: 2021/09/04 11:58:58 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Array.hpp"

class Awesome
{
    
    public:
        Awesome() {
            n = 5;
            return; 
        }
        int getN() const {
            return this->n;
        }
    private:
        int n;
};

int main(void)
{
    Array<int> ar1;
    Array<int> ar2(5);
    //Array<Awesome> ar3(3);
    
    try {
        std::cout << ar2[1] << std::endl;
        ar2[1] = 15;
        std::cout << ar2[1] << std::endl;
        std::cout << ar2[10] << std::endl;
        //std::cout << ar3[2].getN() << std::endl;
    } catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }
    
    
    return (0);
}
