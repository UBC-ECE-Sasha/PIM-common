#ifndef __DPU_COMMON_H
#define __DPU_COMMON_H

/* To suppress compiler warnings on unused parameters */
#define UNUSED(_x) (_x=_x)

/* To mask out a certain number of bits from a value. For example, to mask the
bottom 12 bits (0xFFF) use: BITMASK(12) */
#define BITMASK(_x) ((1 << _x) - 1)

/* min() and max() functions as macros */
#define MIN(_a, _b) (_a < _b ? _a : _b)
#define MAX(_a, _b) (_a > _b ? _a : _b)

/* If you have a value that needs alignment to the nearest _width. For example,
0xF283 needs aligning to the next largest multiple of 16: 
ALIGN(0xF283, 16) will return 0xF290 */
#define ALIGN(_p, _width) (((unsigned int)_p + (_width-1)) & (0-_width))

/* If you need to know an aligned window that contains a given address. For
example, what is the starting address of the 1KB block that contains the address
0xF283?
WINDOW_ALIGN(0xF283, 1024) will return 0xF000 */
#define WINDOW_ALIGN(_p, _width) (((unsigned int)_p) & (0-_width))

#endif	/* __DPU_COMMON_H */

