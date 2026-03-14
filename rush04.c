#include <unistd.h>

//ABBBC
//B   B
//B   B
//CBBBA

int print_line(int columns, char start, char mid, char end)
{
    write(1, &start, 1);
    columns--;
    while (columns > 1)
    {
        write(1, &mid, 1);
        columns--;
    }
    if (columns > 0)
        write(1, &end, 1);
    
    write(1, "\n", 1);    
}

int rush(int x, int y)
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

int main()
{
    rush(5, 5);
    return 0;
}