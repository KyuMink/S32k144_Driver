#include "Lpit.h"

void Lpit_Init( void )
{
	/* Step 1. Set Debug mode */
	LPIT->MCR |= (1u<<LPIT_MCR_DBG_EN_SHIFT);
	
	/* Step 2. Enable peripheral clock to timers */
	LPIT->MCR |= (1u<<LPIT_MCR_M_CEN_SHIFT);
}


void Lpit_InitChannel(unsigned char channel, const Lpit_ChannelConfigType* ConfigPtr)
{
	unsigned int Tval;
	/* Step 1. Check parameter */
	if(!(channel >4))
	{	
		/* Step 2. Setups the timer channel operation mode: 32-bit Periodic Counter */
		LPIT->TMR[channel].TCTRL &=~ (3u<<LPIT_TMR_TCTRL_MODE_SHIFT);
		
		/* Step 3. Set Timer Value Register */
		/* Calculate Tval */
		Tval =  (ConfigPtr->fLpit*ConfigPtr->period)/1000;

		if(ConfigPtr->period != 0 )
		{
			LPIT->TMR[channel].TVAL = Tval;
		} else {
			LPIT->TMR[channel].TVAL = 0xFFFFFFFFu;
		}
		
		/* Step 4. Check whether timeout interrupt is set ?*/
		if(ConfigPtr->isInterruptEnabled != 0 )
		{
			LPIT->MIER |=(1u<<channel);
		}
	}
}

void Lpit_StartChannel(unsigned char channel)
{
	/* Step 1. Check parameter */
	if(!(channel >4))
	{
		/* Step 2. Starts timer channel counting */
		LPIT->TMR[channel].TCTRL |= (1u<<LPIT_TMR_TCTRL_T_EN_SHIFT);	
	}
}


void Lpit_StopChannel(unsigned char channel)
{
	/* Step 1. Check parameter */
	if(!(channel >4))
	{
		/* Step 2. Stop timer channel counting */	
		LPIT->TMR[channel].TCTRL &=~ (1u<<LPIT_TMR_TCTRL_T_EN_SHIFT);	
	}	

}

unsigned int Lpit_GetCounterChannel(unsigned char channel)
{
	/* Step 1. Check parameter */
	if(channel >4)
	{
		return 0;
	}
	/* Step 2. Check whether timer channel is enabled? */
	/* if not enable then return 0 */
	/* else return the Current Timer Value-CVAL  */
	
	if (!(LPIT->TMR[channel].TCTRL &(1u<<LPIT_TMR_TCTRL_T_EN_SHIFT)))
	{
		return 0;
	}
	else
	{
		return LPIT->TMR[channel].CVAL;
	}
	
}


