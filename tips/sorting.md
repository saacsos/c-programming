# Sorting Algorithm #

## Bubble Sort ##
> by [dottydaily](https://github.com/dottydaily)

### Ascending order Bubble Sort ###
```c
void ascending_arr (int arr[], int size)
{
    int temp, i, j;

    for (i = 0 ; i < size ; i++){
        for (j = i+1 ; j < size ; j++){
            if (arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
```

### Descending order Bubble Sort ###
```c
void descending_arr (int arr[], int size)
{
    int temp, i, j;

    for (i = 0 ; i < size ; i++){
        for (j = i+1 ; j < size ; j++){
            if (arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
```
