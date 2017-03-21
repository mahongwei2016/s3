#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/ipc.h>
#include <sys/sem.h>
void main()
{
   int fd=0;
   key_t key;
   int semid;
   struct sembuf sops;
   key= ftok("/home",2);
   semid=semget(key,1,IPC_CREAT);printf("semid:%d\n",semid); 
   printf("set sem init vavlu:%d\n",semctl(semid,0,SETVAL,1));
   printf("sem init vavule:%d\n",semctl(semid,0,GETVAL));
   fd=open("./board.txt",O_CREAT|O_RDWR|O_APPEND,0755);
   sops.sem_num=0;
   sops.sem_op=-1;
   semop(semid,&sops,1);
   write(fd,"class match",11);
   sleep(10);
   write(fd,"ls cancel",11);
   sops.sem_num=0;
   sops.sem_op=+1;
   semop(semid,&sops,1);
   close(fd);

}
