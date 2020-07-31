#ifndef __HOST_H
#define __HOST_H

#include <sys/time.h>

/* Everything in this file can be used on the host */

#define TIME_DIFFERENCE(_start, _end) \
    ((_end.tv_sec + _end.tv_usec / 1000000.0) - \
    (_start.tv_sec + _start.tv_usec / 1000000.0))

#endif	/* __HOST_H */

