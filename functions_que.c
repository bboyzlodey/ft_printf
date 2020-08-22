// Вставь свой хедер!

#include "ft_printf.h"

void	set_func_que(void)
{
	int	i;

	i = 0;
	g_current_data.que[i++] = calculate;
	g_current_data.que[i++] = precision_management;
	g_current_data.que[i++] = remove_ignored_flags;
	if (g_current_data.flags[NULL_FLAG] == NULL_FLAG)
	{
		g_current_data.que[i++] = width_management;
		g_current_data.que[i++] = flag_management;
	}
	else
	{
		g_current_data.que[i++] = flag_management;
		g_current_data.que[i++] = width_management;
	}
}

void	iterate_func_que(void)
{
	int	i;

	i = 0;
	while (i < MAX_FUNC_QUE_SIZE)
	{
		if (g_current_data.que[i] != NULL)
			g_current_data.que[i]();
		i++;
	}
}