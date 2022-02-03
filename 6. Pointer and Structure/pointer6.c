// Sort elements of array using pointers
#include<stdio.h>
void sort(int n, int* ptr)
{
    int i, j, t;

    for (i = 0; i < n; i++) {
  
        for (j = i + 1; j < n; j++) {
  
            if (*(ptr + j) < *(ptr + i)) {
  
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
  
    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    printf("\n");
}

void main()
{
  int n;
  printf("Enter size of array: ");
  scanf("%d",&n);
  int a[n];
  printf("Enter array elements:\n");
  for(int i=0;i<n;i++) 
    scanf("%d",&a[i]);
  sort(n,a);
}
