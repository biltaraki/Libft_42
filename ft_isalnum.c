int ft_isalnum(char c)
{
    if((c <= 'z' && c >= 'a') ||( c <= 'Z' && c >= 'A') || (c <= '9' && c >= '0' ))
    {
        return 1;
    }
    return 0;
}