int main()
{

    int arr[100] = { 0 };
    int arr2[100] = { 0 };
    int i, x,x2, pos=0, n,n2;
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



   // initial array of size 10
    for (i = 0; i < 10; i++)
        arr2[i] = i + 1;

 // initial array of size 10
    i = 0;
   pos = 0;
    while (i<n){
        scanf("%d",&x2);
        arr2[pos] = x2;
        pos++;
        i++;
    }
     //printf("\n");
    // print the updated array
    for (i = 0; i < n; i++)
        printf("%d ", arr2[i]);

    return 0;
}
