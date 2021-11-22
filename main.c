#include"libft.h"

int main()
{
    int test = 23435;
    int test3 = 12345;
    t_list *ptr;

    t_list *result = ft_lstnew(&test);
    t_list *new = ft_lstnew(&test3);
    ft_lstadd_front(&result->next, new);
    ptr = ft_lstlast(result);
    printf("%d\n", ft_lstsize(result));
    printf("%d\n", *(int*)ptr->content);
}
