#include<stdio.h>
#include "shared.h"
#include "forkjoin.h"
#include "barrier.h"int main()
{
        int pid, nproc, *bar, k, *a, size, i, *j, *s, *max, *no;
        int shmid1, shmid2, sh3, sh4, sh5, sh6;
        float s1;

        printf("Enter the size of the array :: ");
        scanf("%d",&size);

        a=(int *)create_memory(size*2,&shmid1);
        no=(int *)create_memory(size*2,&sh4);
        max=(int *)create_memory(2,&sh5);
        bar=(int *)create_memory(2,&shmid2);
        *max=0;
        j=(int *)create_memory(2,&sh6);
        *j=0;                       

        printf("Enter the elements of the array :: \n");
        for(i=0;i<size;i++)
                scanf("%d",&a[i]);

        nproc=size;
        barrier_init(bar,nproc);
        s=(int *)create_memory(2,&sh3);
        *s=0;

        pid=create_process(&nproc);
        no[pid]=1;
        for(i=0;i<size;i++)
                if(pid!=i && a[i]==a[pid])
                        no[pid]+=1;

        barrier(bar);

        if(*max < no[pid])
                *max=no[pid];

        barrier(bar);

        if(no[pid]==*max)                
        {
                *s += a[pid];
                (*j)++;
        }

        join_process(&nproc, &pid);

        printf("\n");
        if(*max==1)
                printf("\nMode is not possible.");
        else

        {
                s1=*s;
                s1 = s1 / (*j);
                printf("The mode is %.2f",s1);
        }

        cleanup_memory(&shmid1);
        cleanup_memory(&shmid2);
        cleanup_memory(&sh3);
        cleanup_memory(&sh4);
        cleanup_memory(&sh5);
        cleanup_memory(&sh6);                 
        return 0;
}                      
