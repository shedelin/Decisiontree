#ifndef DECISIONTREE_H
# define DECISIONTREE_H

# define L 150
# define C 5

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

typedef struct		s_tree
{
    int				type;
	int				order;
	double			value;
	int             sample;
	double          entropy;
	int             *tabValue;
    struct t_tree	*rigth;
	struct t_tree	*left;
}					t_tree;


typedef struct		s_calc
{
    double          vmax;
    double          vmin;
    double          moy;
    double          to;
    int             total;
}                   t_calc;

typedef struct		s_info
{
    double          **tab;
    t_calc          sepalLength;
    t_calc          sepalWidth;
    t_calc          petalLength;
    t_calc          petalwidth;
}                   t_info;

t_tree              *treeNew(int type, int order, double value, int sample, double entropy);
void                 doinfo(t_info *info);
t_calc              *doCalc(double **tab, int nb);
t_tree              *doTree(t_info *info);

#endif
