#include <stdio.h>
 
void towers(int, char, char, char);
 
int main()
{
    int n;
 
    printf("Enter the number of disks : ");
    scanf("%d", &n);
    //solving for n discs
    towers(n, '1', '2', '3');
    return 0;
}
void towers(int n, char from_rod, char to_rod, char mid_rod)
{
    // Base Condition if no of disks are
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
 
    // Recursively calling function twice
    towers(n - 1, from_rod, mid_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    towers(n - 1, mid_rod, to_rod, from_rod);
}