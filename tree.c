#include "decisionTree.h"


t_tree  *treeNew(int type, int order, double value, int sample, double entropy) {
    t_tree	*new;

	new = (t_tree *)malloc(sizeof(t_tree));
    new->type = type;
    new->order = order;
    new->value = value;
    new->sample = sample;
    new->entropy = entropy;
    new->tabValue = (int *)malloc(L * sizeof(int));
    new->rigth = NULL;
    new->left = NULL;
    return (new);
}
