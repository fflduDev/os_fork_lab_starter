#include <unistd.h>

int main()
{

        int n=0;
        int k=0;
        
        pid_t pid;

                do
                {
                     //TODO - prompt the user for a number and save it to the variable k declared above 
                     //
                }while (k <= 0);

                //TODO - get your pid via fork();

                if (pid == 0)
                {
                        printf("Child is working...\n");
                        printf("%d\n",k);
                        while (k!=1)
                        {
                                if (k%2 == 0)   
                                {
                                        // TODO - finish 'even' part 
                                }
                                else if (k%2 == 1)
                                {
                                        //TODO - finish 'odd' part
                                }       
                        
                                printf("%d\n",k);
                        }
                
                        printf("Child process is done.\n");
                }
                else
                {
                        printf("Parents is waiting on child process...\n");
                        
                        //TODO - handle setting parent to wait on child to finish
                        printf("Parent process is done.\n");
                }
        return 0; 
}  