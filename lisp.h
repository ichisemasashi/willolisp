/*
  FILE NAME: Lisp.h

*/

#include <stdio.h>

typedef unsigned char uchar;
typedef uchar *STR;

typedef struct cell {
  char id;
  struct cell *car;
  struct cell *cdr;
} CELL;

typedef CELL *CELLP;

typedef struct atom {
  char id;
  CELLP value;
  CELLP plist;
  STR name;
  char ftype;
  CELLP fptr;
} ATOM;

typedef ATOM *ATOMP;

typedef struct num {
  char id;
  union body {
    struct num *ptr;
    long fix;
    double flt;
  } value;
} NUM;

typedef NUM *NUMP;


#define _CELL 1
#define _ATOM 2
#define _FIX 3
#define _FLT 4

#define _NFUNC 0x01 /* 0001 */
#define _SUBR 0x06 /* 0110 */
#define _EXPR 0x04 /* 0100 */
#define _FSUBR 0x02 /* 0010 */

#define _UD 0x01 /* 0001 */
#define _SR 0x02 /* 0010 */
#define _EA 0x04 /* 0100 */

#define CELLSIZ 0x1996 /* 6550 */
#define ATOMSIZ 0x0500 /* 1280 */
#define STRSIZ 0x1000 /* 4096 */
#define NUMSIZ 0x1000 /* 4096 */
#define TABLESIZ 64
#define LINESIZ 100
#define NAMELEN 100


#define ESCON 1
#define ESCOFF 0
#define ON 1
#define OFF 0

#define TOP 0
#define UNDER 1

#define TRUE (-1)
#define FALSE 0

#define NONERR 0
#define ERR 1
#define ERROK (-1)



#define ec if(err)return(NULL)


#define STRUP 1
#define NUMUP 2
#define ATOMUP 3
#define CELLUP 4
#define ULO 5
#define PSEXP 6
#define CTRLIN 7
#define UDF 8
#define IFF 9
#define NEA 10
#define IAA 11
#define IAN 12
#define IAL 13
#define IAAL 14
#define IAAN 15
#define IALN 16
#define IAF 17
#define IAFL 18
#define ILS 19
#define IASSL 20
#define IPL 21
#define EIA 22
#define EHA 23
#define CCL 24
#define EOFERR 25
#define CCC 26
#define UNDEF 27


#ifdef MAIN
#include "defvar.h"
#else
#include "var.h"
#endif
