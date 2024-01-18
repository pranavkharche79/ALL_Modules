a=[9,8,7,6,5,4,3,2,1]

function bubblesort(a){
    for(i=0;i<a.length-1;i++){
        for(j=i+1;j<a.length;j++){
            if(a[i]>a[j]){
                temp=a[i]
                a[i]=a[j]
                a[j]=temp
            }
        }
    }
}

bubblesort(a)
console.log(a)