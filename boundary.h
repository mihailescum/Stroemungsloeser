#ifndef BOUNDARY_H
#define BOUNDARY_H

/* Wendet die homogene Neumann-Randbedingung Laplace(p|Gamma)=0 
 * auf eine Poissonmatrix p mit (imax x jmax) inneren Gitterpunkten mit Ghost-Schicht an. */
void applyHomogenousNeumannBC(double *p, int imax, int jmax);

void setBoundaryCond(double *U, double *V, char *FLAG, int imax, int jmax, int wl, int wr, int wt, int wb);

void setSpecialBoundaryCond(double *U, double *V, int imax, int jmax, char *problem);

void initDrivenCavity(double *U, double *V, int imax, int jmax);

void initKarman(double *U, double *V, int imax, int jmax);

void obstacleBC(double *p, char *FLAG, int imax, int jmax, double deltaX, double deltaY);

#endif
