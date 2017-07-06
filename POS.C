#include<string.h>
#include<stdio.h>
#include<conio.h>

typedef struct source
{
	char label[10];
	char mne[10];
	char op1[20];
	char op2[10];
};

typedef struct mnt
{
	int srno;
	char mname[10];
	int mdtindex;
};

typedef struct mdt
{
	int srno;
	char ms[40];
};

void main()
{
	struct source sf;
	struct mnt mn;
	FILE *fp,*fp1,*fp2,*fp3;
	int mntc=1,mdtc=1,srno=1,mdti=1,mdtsr=1,j=1;
	char *ala[10],i=1,ch2[20],ch1[2],ch3[2],ch4[20],argu[10];
	clrscr();


	//PASS 1

	fp=fopen("source.txt","r");
	fp2=fopen("md.txt","w");
	fp1=fopen("mn.txt","w");

	while(!feof(fp))
	{
		fscanf(fp,"%s%s%s%s",sf.label,sf.mne,sf.op1,sf.op2);
		if(strcmp(sf.mne,"MACRO")==0)
		{
			fscanf(fp,"%s%s%s%s",sf.label,sf.mne,sf.op1,sf.op2);
			fprintf(fp1,"%d%10s%10d\n",srno,sf.mne,mdti);
			srno++;
			strcpy(argu,sf.op1);
			fprintf(fp2,"%d\t%s%8s%8s%5s\n",mdtsr++,sf.label,sf.mne,argu);
			mdti++;

			i=1;
			ala[i]=strtok(sf.op1,",");

			while(ala[i])
			{
				ala[++i]=strtok(NULL,",");
			}
			i=1;
			printf("Argument List array:\n");
			while(ala[i])
			{
				printf("%d\t%s\n",i,ala[i]);
				i++;
			}
			fscanf(fp,"%s%s%s%s",sf.label,sf.mne,sf.op1,sf.op2);
			while(strcmp(sf.mne,"MEND")!=0)
			{
		       /*	fp1=fopen("mntf.txt","r");
			fscanf(fp1,"%d%s%s",mn.srno,mn.mname,mn.mdtindex);
		      /*	while(strcmp(sf.mne,mn.mname)!=0)
			{
				fscanf(fp1,"%d%s%s",mn.srno,mn.mname,mn.mdtindex);
				break;
			}
			fclose(fp1);
			if(strcmp(mn.mname,sf.mne)==0)
			{
				fprintf(fp2,"%d\t%s%8s%8s%5s\n",mdtsr++,sf.label,sf.mne,argu);
				mdti++;
				fscanf(fp,"%s%s%s%s",sf.label,sf.mne,sf.op1,sf.op2);
			} */
				i=1;
				while(ala[i])
				{
					if(strcmp(ala[i],sf.op1)==0)
					{
					strcpy(ch1,"#");
					itoa(i,ch2,2);
					strcat(ch1,ch2);
					strcpy(sf.op1,ch1);
					}

					if(strcmp(ala[i],sf.op2)==0)
					{
					strcpy(ch3,"#");
					itoa(i,ch4,3);
					strcat(ch3,ch4);
					strcpy(sf.op2,ch3);
					}
					i++;
				}
				fprintf(fp2,"%d\t%s%8s%5s%5s\n",mdtsr++,sf.label,sf.mne,sf.op1,sf.op2);
				mdti++;
				fscanf(fp,"%s%s%s%s",sf.label,sf.mne,sf.op1,sf.op2);

			}
			if(strcmp(sf.mne,"MEND")==0)
			{
				fprintf(fp2,"%d\t%s%8s%5s%5s\n",mdtsr++,sf.label,sf.mne,sf.op1,sf.op2);
				mdti++;
				while(ala[j])
				{
					ala[j]=NULL;
					j++;
				}
			}

		}

		if(strcmp(sf.mne,"START")==0)
		{
			fp3=fopen("mic.txt","w");
			fprintf(fp3,"%s%8s%5s%5s\n",sf.label,sf.mne,sf.op1,sf.op2);
			do
			{
				fscanf(fp,"%s%s%s%s",sf.label,sf.mne,sf.op1,sf.op2);
				fprintf(fp3,"%s%8s%5s%5s\n",sf.label,sf.mne,sf.op1,sf.op2);
			}while(strcmp(sf.mne,"END")!=0);
		}


	}

	fclose(fp);
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);


	//PASS 2
       /*	fp=fopen("mic.txt","r");
	fp1=fopen("mntf.txt","r");
	fp2=fopen("mdt1.txt","r"); */


	getch();
}

