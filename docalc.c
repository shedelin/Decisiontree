#include "decisionTree.h"

static double   calcTotal(double tab[C][L], int nb) {
    int     i;
    double  total;

    i = 0;
    total = 0;
    while (i < L) {
        total += tab[nb][i];
        i++;
    }
    return (total);
}

static double   calcVmax(double tab[C][L], int nb) {
    int     i;
    double  vmax;

    i = 0;
    vmax = tab[nb][i];
    while (i < L) {
        if (tab[nb][i] > vmax)
            vmax = tab[nb][i];
        i++;
    }
    return (vmax);
}

static double   calcVmin(double tab[C][L], int nb) {
    int     i;
    double  vmin;

    i = 0;
    vmin = tab[nb][i];
    while (i < L) {
        if (tab[nb][i] < vmin)
            vmin = tab[nb][i];
        i++;
    }
    return (vmin);
}

t_calc          *doCalc(double **tab, int nb) {
    t_calc      *calc;

    printf("miaou");
    calc = (t_calc *)malloc(sizeof(t_calc));
    calc->vmin = calcVmin(tab, nb);
    calc->vmax = calcVmax(tab, nb);
    calc->total = calcTotal(tab, nb);
    calc->moy = calc->total / L;
    calc->to = (calc->vmax - calc->vmin) / L;
    return (calc);
}
