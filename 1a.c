#include <omp.h>
#include <stdio.h>
int main()
{
omp_set_num_threads(2);
#pragma omp parallel
{
for(int i=0;i<10;i++)
{
printf( "TIteration number %d\n hread number! %d\n " , i ,omp_get_thread_num());
}
}
return 0;
}
