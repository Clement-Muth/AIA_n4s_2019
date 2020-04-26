/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019 [WSL: Debian]
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef enum command_s {start, stop, forward, backward,
                        w_dir, get_inf, get_speed} command;

const char *commands[] =
{
    "start_simulation",
    "stop_simulation",
    "car_forward",
    "car_backwards",
    "wheels_dir",
    "get_info_lidar",
    "get_current_speed",
    "get_current_wheels",
    "cycle_wait",
    "get_car_speed_max",
    "get_car_speed_min",
    "get_info_simtime"
};

#endif /* !STRUCT_H_ */
