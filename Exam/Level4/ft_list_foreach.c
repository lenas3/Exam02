void ft_list_foreach(t_list  *begin_list, void(*f)(void *))
{
    t_list temp = begin_list;
    while(temp)
    {  
        (*f)(temp->data);
        temp = temp->next;
    }  
}
