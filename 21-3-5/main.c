////#include <stdio.h>
////#include <stdlib.h>
////
////int main()
////{
////    printf("Hello world!\n");
////    return 0;
////}
//#include<stdio.h>
//#include<stdlib.h>
//int cmp(const void*a,const void *b)
//{
//    return *(int*)a-*(int*)b;
//}
//int main()
//{
//    int n,i,count=0,max=-1;
//    scanf("%d",&n);
//    int arr[n],arr1[n],arr2[n],arr3[n];
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//        arr1[i]=arr[i];
//    }
//    qsort(arr1,n,sizeof(int),cmp);
//    for(i=0;i<n;i++)
//    {
//        if(arr[i]>max)
//            max=arr[i];
//        if(arr[i]==max)
//            arr3[i]=1;
//    }
//    for(i=0;i<n;i++)
//    {
//        if(arr[i]==arr1[i]&&arr3[i]==1)
//        {
//            if(count&&arr2[count-1]==arr[i])
//                continue;
//            arr2[count]=arr[i];
//            count++;
//        }
//    }
//    printf("%d\n",count);
//    for(i=0;i<count;i++)
//    {
//        if(i)
//            printf(" ");
//        printf("%d",arr2[i]);
//    }
//    return 0;
//}
//int main()
//{
//    return 0;
//}
