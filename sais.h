#ifndef _SAIS_H
#define _SAIS_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

int
sais(const unsigned char *T, int *SA, int n);

int
sais_int(const int *T, int *SA, int n, int k);

int
sais_bwt(const unsigned char *T, unsigned char *U, int *A, int n);

int
sais_int_bwt(const int *T, int *U, int *A, int n, int k);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _SAIS_H */
