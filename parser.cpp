// BMP Image parser

#include "stdafx.h"
#include "parser.h"

int parse(const char * filename)
{
	FILE * fp;
	if ((fp = fopen(filename, "r")) != NULL)
	{
		unsigned char c;
		char temp;
		while (1)
		{
			if (feof(fp)) break;
			c = fgetc(fp);
			printf("'%x' \n", c);
		}
		fclose(fp);
		printf("press enter to exit\n");
		scanf(&temp); 
		return 1;
	}
	else return (-1);

}
