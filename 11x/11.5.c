int main()
{
    int x = 0;
    int y = 0;

    printf("%d %d\n", x, y);
    int *px = &x;
    int *py = &y;

    int temp = *px;
    *px = *py;
    *py = temp;
    printf("%d %d\n", x, y);
    return 0;
}