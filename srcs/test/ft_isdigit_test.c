#include <libft.h>
#include <ctype.h>
#include <stdio.h>

static int	testing_range(int min, int max);

int	main(void)
{
	printf("Testing -255 to 0...\n");
	if (testing_range(-255, 0))
		printf("SUCCESS!!!\n");
	printf("Testing 1 to 127...\n");
	if (testing_range(1, 127))
		printf("SUCCESS!!!\n");
	printf("Testing 128 to 255...\n");
	if (testing_range(128, 255))
		printf("SUCCESS!!!\n");

	return (0);
}

static int	testing_range(int min, int max)
{
	int	check;
	int	or_res;
	int	ft_res;

	if (min > max)
	{
		min = min ^ max;
		max = min ^ max;
		min = min ^ max;
	}
	check = 0;
	while (min <= max)
	{
		or_res = isdigit(min);
		ft_res = ft_isdigit(min);
		if (or_res != ft_res)
		{
			printf("[%d]: FAILURE!!! or: [%d] X ft: [%d]\n", min, or_res, ft_res);
			check++;
		}
		min++;
	}
	return (!check);
}
