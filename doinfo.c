#include "decisionTree.h"

static void     printTab(double **tab)  {

    for(int j = 0;j < L; j++){
		for(int i = 0; i < C; i++){
			printf("%.1f ", tab[j][i]);
		}
		printf("\n");
	}
}

static double     **createTab(char *name){
	double a = 0.0,z = 0.0,e = 0.0,r = 0.0;
	int         t = 0;
	double      **tab;

    tab = (double **)malloc(L * sizeof(double *));
	FILE *fic = fopen(name, "r");
	for(int l=0;l<L;l++){
		tab[l] = (double *)malloc(C * sizeof(double));
		fscanf(fic,"%lf %lf %lf %lf %d",&a,&z,&e,&r,&t);
		tab[l][0]=a;
		tab[l][1]=z;
		tab[l][2]=e;
		tab[l][3]=r;
		tab[l][4]=(double)t;
	}
	fclose(fic);
	return (tab);
}

void          doinfo(t_info *info) {

    info = (t_info *)malloc(sizeof(t_info));
    info->tab = createTab("irisdata.txt");
    printf("================================\n");
	printTab(info->tab);
	printf("================================\n");
    //info->petalLength = docalc(&(info->tab), 0);
    //info->petalwidth = docalc(&(info->tab), 1);
    //info->sepalLength = docalc(&(info->tab), 2);
    //info->sepalWidth = docalc(&(info->tab), 3);

}
