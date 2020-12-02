//This is only Function

void rotateArr(int arr[], int d, int n)
{

    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
