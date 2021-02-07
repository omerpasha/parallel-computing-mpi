#include <mpi.h>
#include <stdio.h>
#include <string.h>
int my_rank;
int p;
int source;
int total;
int dest;
int tag=0;
int message[100];
int number;
char name[MPI_MAX_PROCESSOR_NAME];

int calculate_sum_local_variables(int p, int my_rank,int total);


int main(int argc, char** argv) {
   
    
    printf("hello from mpi \n");
    printf("this program has parallel computing \n calculate number with parallelism");
    
    printf("Enter your number");
    scanf("%d",&number);
    
    
    MPI_Init(&argc,&argv);
    

    MPI_Comm_rank(MPI_COMM_WORLD,&my_rank);
    
    MPI_Comm_Size(MPI_COMM_WORLD,&p);
     
    // Finalize the MPI environment.
    MPI_Finalize();
}

int calculate_sum_local_variables(int p,int my_rank,int total){
    if(my_rank==0){
        
    
    for(int i=0;i<p;i++){
        
        MPI_Send()
        
    }
    }
    
    
    
    
    
    
    return total;
}
