/*
 * main.c
 *
 *  Created on: Jan 8, 2024
 *      Author: basel
 */


void main()
{
	char alph[26];
	int i;
	char * p;
	p=alph;

	for (i=0 ; i<sizeof(alph); i++)
	{
		*p++ = 'A'+i;
	}

	p=alph;

	for(i = 0; i< sizeof(alph);i++)
	{
		printf("%c\n",*p++);
	}


}
