#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
  int fd = 0, iRet = 0;
  char Fname[30];
  char Data[] = "Marvellous Infosystems";

  printf("Enter file name\n");
  scanf("%s",Fname);

  fd = open(Fname,O_RDWR);

  if(fd == -1)
  {
    printf("Unable to open the file\n");
      return -1;
  }
  else
  {
    printf("File succesfully opened with FD : %d\n",fd);
  }
  iRet = write(fd,Data,22);
  printf("%d bytes gets succesfully written in the file\n",iRet);

  return 0;
}