void Insertsort(int*arr,int size){
    for(int i = 0;i < size - 1;i++){
        int end = i;
        int tmp = arr[end+1];
        while(end>=0){
            if(arr[end] > tmp){
                arr[end+1] = arr[end];
                end--;
            }
            else{
                break;
            }
            arr[end+1]=tmp;
        }
    }
}
