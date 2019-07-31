# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/19 01:42:33 by msuarez-          #+#    #+#              #
#    Updated: 2019/07/19 01:42:35 by msuarez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#!/bin/bash
output=$(ifconfig | grep 'inet ' | grep -v '127.0.0.1' | awk '{print $2}')

if [[ $output ]]; then
	echo $output
else
	echo "I am lost!"
fi
