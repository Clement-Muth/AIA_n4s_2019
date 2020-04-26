#include <stdio.h>

#define START 0
#define STOP 1
#define FORWARD 2
#define BACKWARD 3

const char *commands[] = {
    "start_simulation",
    "stop_simulation",
    "car_forward",
    "car_backwards",
    "wheels_dir",
    "get_inf_lidar",
    "get_current_speed",
    "get_current_wheels",
    "cycle_wait",
    "get_car_speed_max",
    "get_car_speed_min",
    "get_info_simtime"
};

static void start(void)
{
    printf("%s\n", commands[START]);
}

int main(void)
{
    start();
    while (1)
        printf("%s:1\n", commands[FORWARD]);
    return (0);
}
