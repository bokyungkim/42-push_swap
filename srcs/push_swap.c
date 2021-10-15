/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:23:53 by bokim             #+#    #+#             */
/*   Updated: 2021/10/16 00:13:30 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_argv(char **argv)
{
	int	idx;

	idx = 1;
	while (argv[idx])
	{
		if (ft_strchr(argv[idx], ' '))
		{
			
		}
	}
	//문자열을 int로 변환
	//int 범위 밖의 숫자가 들어올 경우
	//숫자가 아닌 문자가 들어올 경우
	//부호 확인
	//"1 3 5"와 같이 문자열로 들어올 때 쪼개기 (split으로?)
}

int	main(int argc, char **argv)
{
	check_argv(argv);
}