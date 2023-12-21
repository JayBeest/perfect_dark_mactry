#ifndef _IN_LIB_RNG_H
#define _IN_LIB_RNG_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

#define random(x) pd_random(x)

long int pd_random(void); //TODO: remove dirty machack (long int was u32)
u32 rngRotateSeed(u64 *value);

#endif
