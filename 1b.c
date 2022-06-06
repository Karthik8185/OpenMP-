#include <stdio.h>
#include <omp.h>
int main()
{
omp_set_num_threads(10);
#pragma omp parallel
{
for(int i=0;i<10;i++)
{
printf( "Iterated number %d\n Thread number %d\n" ,  i, omp_get_thread_num());
}
}
return 0;
}
