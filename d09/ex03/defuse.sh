# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 19:42:52 by msuarez-          #+#    #+#              #
#    Updated: 2019/07/18 19:42:54 by msuarez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#!/bin/bash
echo $(($(stat -f%a bomb.txt) -1 ))
