#include "test12-3-a.h"

int main()
{
    int mode;
    printf("Enter 0 for metric, 1 forus mode:");
    scanf("%d", &mode);
    while (mode >= 0)
    {

        set_mode(mode);
        get_info();
        show_info();
        printf("\nEnter 0 for metric, 1 forus mode:");
        printf("(-1 to quit)");
        scanf("%d", &mode);
    }
    printf("Done.\n");
    return 0;
}
