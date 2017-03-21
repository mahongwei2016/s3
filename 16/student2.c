#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/ipc.h>
#include <sys/sem.h>
void main()
{
    key_t key;
    int semid;
    struct sembuf sops;
    int fd=open("./board.txt",O_RDWR|O_APPEND);
    key=ftok("/home",2);
    semid=semget(key,1,IPC_CREAT);printf("semid:%d\n",semid);
    printf("sem init vavule:%d\n",semctl(semid,0,GETVAL));
    sops.sem_num=0;
    sops.sem_op=-1;
    sops.sem_flg=SEM_UNDO;
    printf("semop %d\n",semop(semid,&sops,1));
    write(fd,"english ezam ",20);
    sops.sem_num=0;
    sops.sem_op=+1;
    semop(semid,&sops,1);
    close(fd);
}
