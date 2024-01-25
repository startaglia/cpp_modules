/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:44:31 by startagl          #+#    #+#             */
/*   Updated: 2024/01/25 12:03:27 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <map>


class Harl {
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

    public:
        Harl();
        ~Harl();
        void complain (std::string level);
};

#endif
