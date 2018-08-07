

#include <stdio.h>
#include <stdlib.h>
#include <utmp.h>
#include <fcntl.h>
#include <unistd.h>

#define SHOWHOST
//show_info( struct utmp* utbufp);
int main()
{
	struct utmp current_record;
	//int utmpfd;
	int reclen = sizeof(current_record);
	FILE *utmp_file;

	/*if ( (utmpfd = open(UTMP_FILE, O_RDONLY)) == -1){
		perror( UTMP_FILE );
		exit(1);
	}*/

	if ( (utmp_file = fopen(UTMP_FILE, "r")) == NULL){
		perror( UTMP_FILE );
		exit(1);
	}

	/*
	 * while ( read(utmpfd, &current_record, reclen) == reclen )
		show_info(&current_record);
	close(utmpfd);
	*/

	while ( fread(&current_record, 1, reclen, utmp_file) == reclen )
		show_info(&current_record);

	fclose(utmp_file);

	return 0;
}

show_info( struct utmp * utbufp )
{
	printf("% - 8.8s", utbufp->ut_user);
	printf(" ");
	printf("% - 8.8s", utbufp->ut_line);
	printf(" ");
	printf("% 10ld", utbufp->ut_time);
	printf(" ");
#ifdef SHOWHOST
	printf("(%s)", utbufp->ut_host);
#endif
	printf("\n");
}

