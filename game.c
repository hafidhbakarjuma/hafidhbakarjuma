#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>



void print_at_xy(int x, int y, char *val);
void display_score();
void init();
int zero_lives();
void set_game_state_over();
char get_input();
void update_player(char);
void update_wall();
void increment_score();
void decrement_lives();
void draw();
void draw_ninja();
void clean_up();
void clear_screen();
void display_message(const char *, int yoffset);
void update_ninja(char ch);
int collides_with_spike();
void display_count_down();



