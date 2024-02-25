#ifndef LPIT_H
#define LPIT_H

#include "Lpit_Register.h"

typedef struct
{
    unsigned int fLpit;                         /*!< F clock source(Hz)                          */
    unsigned int period;                        /*!< Period of timer channel(ms)                 */
    unsigned char isInterruptEnabled;           /*!< Timer channel interrupt generation enable   */
} Lpit_ChannelConfigType;

void Lpit_Init(void);

void Lpit_InitChannel(unsigned char channel, const Lpit_ChannelConfigType* ConfigPtr);

void Lpit_StartChannel(unsigned char channel);

void Lpit_StopChannel(unsigned char channel);

unsigned int Lpit_GetCounterChannel(unsigned char channel);

#endif
