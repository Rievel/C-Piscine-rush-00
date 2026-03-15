
void	ft_putchar(char c);

void print_line(int columns, char start, char mid, char end)
{
    ft_putchar(start);
    columns--;
    while (columns > 1)
    {
        ft_putchar(mid);
        columns--;
    }
    if (columns > 0)
	{
        ft_putchar(end);
	}
	ft_putchar('\n');
}

void rush(int x, int y)
{
    int row;
    
    row = 1;
    while (row <= y)
    {
        if (row == 1 )
        {
            print_line(x, 'A', 'B', 'C');
        }
        else if ( row == y )
        {
            print_line(x, 'C', 'B', 'A');
        }
        else
        {
           print_line(x, 'B', ' ', 'B');
        }
        row++;
    }
}