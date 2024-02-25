#ifndef LPIT_REG_H
#define LPIT_REG_H

#define LPIT_MCR_M_CEN_SHIFT (0u)
#define LPIT_MCR_DBG_EN_SHIFT (3u)
#define LPIT_TMR_TCTRL_T_EN_SHIFT (0u)
#define LPIT_TMR_TCTRL_MODE_SHIFT (2u)

#define LPIT_TMR_COUNT (4u)

typedef struct
{
  volatile unsigned int VERID;
  volatile unsigned int PARAM;
  volatile unsigned int MCR;
  volatile unsigned int MSR;
  volatile unsigned int MIER;
  volatile unsigned int SETTEN;
  volatile unsigned int CLRTEN;
  unsigned int RESERVED_0;
  struct
  {
    volatile unsigned int TVAL;
    volatile unsigned int CVAL;
    volatile unsigned int TCTRL;
    unsigned int RESERVED_0;
  } TMR[LPIT_TMR_COUNT];
} LPIT_Type;

/** Peripheral LPIT0 base address */
#define LPIT_BASE_ADDRESS (0x40037000u)
/** Peripheral LPIT0 base pointer */
#define LPIT ((LPIT_Type *)LPIT_BASE_ADDRESS)

#endif
