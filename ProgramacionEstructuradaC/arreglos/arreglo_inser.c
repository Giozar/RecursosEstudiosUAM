int main()
{
    int arr[100] = { 0 };
    int i, x, pos=0, n;
    scanf("%d",&n);
    // initial array of size 10
    for (i = 0; i < 10; i++)
        arr[i] = i + 1;

 // initial array of size 10
    i = 0;
    while (i<n){
        scanf("%d",&x);
        arr[pos] = x;
        pos++;
        i++;
    }
     //printf("\n");
    // print the updated array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
