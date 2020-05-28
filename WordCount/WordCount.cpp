#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>

/*字符统计*/
int charCalculate(char* file)
{
	int c = 0;
	FILE* fp;
	char a;
	fp = fopen(file, "r");
	while(!feof(fp))
	{
		a = fgetc(fp);
		if (a == ' ' || a == '\n' || a == '\t' || (a>='a'&&a<='z') || (a>='A'&&a<='Z'))
			c++;

	}
	fclose(fp);
	c--;
	return c;
}

/*词数统计*/
int wordCalculate(char* file)
{
	int w = 0;
	FILE* fp;
	char a;
	fp = fopen(file, "r");
	if (charCalculate(file) == 0)
		w = 0;
	else
	{
		while (!feof(fp))
		{
			a = fgetc(fp);
			if (a ==' ' || a == ',' || a=='\n')
				w++;
		}
	}
	fclose(fp);
	return w;
}

/*行数统计*/
int lineCalculate(char* file)
{
	int l = 0;
	FILE* fp;
	fp = fopen(file, "r");
	char a;
	while (!feof(fp))
	{
		a = fgetc(fp);
		if (a == '\n' || a == '\t')
			l++;
	}
	l++;
	fclose(fp);
	return l;
}



int main(int argc, char* argv[])   /*主函数*/
{


	if (!strcmp(argv[1], "-c"))
	{
		printf("字符数:%d\n", charCalculate(argv[2]));
	}

	else if (!strcmp(argv[1], "-w"))
	{
		printf("单词数:%d\n", wordCalculate(argv[2]));
	}

	else if (!strcmp(argv[1], "-l"))
	{
		printf("行数:%d\n", lineCalculate(argv[2]));
	}

	return 0;
}


