#include <stdio.h>
int main(){

    int arr[] = {18, 4, 5, 3, 12, 9, 4, 1};
    int key[] = {18, 4, 1, 99};
    int found[4];
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i] == key[j])
            {
                found[j] = key[j];
                count++;
            }
        }
    }

    if (count > 0)
    {
        printf("The key elements which are found are: \n");
        for (int k = 0; k < count - 1; k++)
        {
            printf("%d\n", found[k]);
        }
    }
    else
    {
        printf("No key element is found :( \n");
    }

  
    return 0;
}