#ifndef _SUNXI_DEF_
#define _SUNXI_DEF_


/**
 * @brief SUNXI core version number
 */
#define SUNXI_CORE_VERSION_MAJOR    (0x01U) /*!< [31:24] major version */
#define SUNXI_CORE_VERSION_MINOR    (0x00U) /*!< [23:16] minor version */
#define SUNXI_CORE_VERSION_PATCH    (0x00U) /*!< [15:8]  patch version */
/*
 * Extra label for development:
 * 0: official release
 * [1-9]: release candidate
 * F[0-9]: development
 */
#define SUNXI_CORE_VERSION_EXTRA    (0x00U) /*!< [7:0]  extra version */
#define SUNXI_CORE_VERSION          ((SUNXI_CORE_VERSION_MAJOR << 24U)\
                                        |(SUNXI_CORE_VERSION_MINOR << 16U)\
                                        |(SUNXI_CORE_VERSION_PATCH << 8U )\
                                        |(SUNXI_CORE_VERSION_EXTRA))


/*
 *All defined 
 */

#ifndef F_CPU
  #define F_CPU SystemCoreClock
#endif

// Here define some compatibility
#ifndef ADC1
  #define ADC1 ADC
#endif
#ifndef CAN1
  #define CAN1 CAN
#endif
#ifndef DAC1           
  #define DAC1 DAC   //two independent channels
#endif


/**
 * Libc porting layers
 */
#if defined (  __GNUC__  ) /* GCC CS3 */
  #define WEAK __attribute__ ((weak))
#endif


#endif //_SUNXI_DEF_
