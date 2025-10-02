t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *temp = lst;
    int value;

    if (!lst)
        return NULL;

    while(temp && temp->next)
    {
        if((*cmp)(temp->data, temp->next->data) == 0)
        {
            value = temp->data;
            temp->data = temp->next->data;
            temp->next->data = value;

            temp = lst;
        }
        else 
            temp = temp->next;
    }
    return lst;
}