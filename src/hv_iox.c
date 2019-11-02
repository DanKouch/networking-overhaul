#include <hv_iox.h>
#include <data.h>


int getIMDStatus() {
#ifdef NOI2C
    return 1;
#endif
    return data->bms->imdStatus >= 4;
}