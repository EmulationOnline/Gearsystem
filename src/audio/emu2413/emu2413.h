/*
**
** File: ym2413.c - software implementation of YM2413
**                  FM sound generator type OPLL
**
** Copyright (C) 2002 Jarek Burczynski
**
** Version 1.0
**
*/

#ifndef _H_YM2413_
#define _H_YM2413_

#ifdef __cplusplus
extern "C" {
#endif

void YM2413Init(void);
void YM2413ResetChip(void);
int YM2413Update(void);
void YM2413Write(unsigned int a, unsigned int v);
unsigned int YM2413Read(void);
unsigned char *YM2413GetContextPtr(void);
unsigned int YM2413GetContextSize(void);

#ifdef __cplusplus
}
#endif

#endif /*_H_YM2413_*/
