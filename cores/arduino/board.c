#include "board.h"

#ifdef __cplusplus
extern "C" {
#endif


WEAK void pre_init(void) {
    sunxi_clk_init();
}


#ifdef __cplusplus
}
#endif
