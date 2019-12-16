#ifndef _ex22_h
#define _ex22_h

// Makes THE_SIZE in ex22.c available to other files.c
extern int	THE_SIZE;

// Gets and sets and internal static variable in ex22.c
int	get_age();
void	set_age(int age);

// Updates a static variable that is inside update_ratio
double	update_ratio(double ratio);

void	print_size();

#endif
