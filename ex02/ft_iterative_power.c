/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:22:56 by nkubheka          #+#    #+#             */
/*   Updated: 2020/06/25 12:31:26 by nkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_iterative_power(int nb, int power);
{
	int res = 1;

	while(power > 0) {
		if(power & 1)
			res = res * nb;

		power = power >> 1;
		nb = nb * nb;
	}
	return res;
}
int main() {
	int nb = 3;
	int power = 5;

	printf("Power is %d", power(x, y));
	return 0;
}

