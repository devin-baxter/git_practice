#include "ex22.h"
#include "dbg.h"

const char	*MY_NAME = "Devin R. Baxter";

void		scope_demo(int count)
{
	log_info("----> count is: %d", count);

	if (count > 10)
	{
		int	count = 100;	// VERY BAD! BUGS!!!

		log_info("----> [count in this scope = %d]", count);
	}

	log_info("----> count at exit: %d", count);

	count = 3000;

	log_info("count after assignment: %d", count);
}

int		main(int argc, char *argv[])
{
	int		count = 4;

	// Test out THE_AGE accessors
	log_info("My name: %s\tMy age:%d", MY_NAME, get_age());

	set_age(100);

	log_info("My age is now: %d", get_age());

	// Test out THE_SIZE extern variable
	log_info("THE_SIZE is: %d", THE_SIZE);
	print_size();

	THE_SIZE = 9;

	log_info("THE_SIZE is now: %d", THE_SIZE);
	print_size();

	// Test the ratio function static
	log_info("Ratio at first: %f", update_ratio(2.0));
	log_info("Ratio again: %f", update_ratio(10.0));
	log_info("Ratio once more: %f", update_ratio(300.0));

	// Test the scope demo
	scope_demo(count);
	scope_demo(count * 20);
	log_info("Count after calling scope_demo: %d", count);

	return (0);
}
