#ifndef TASK_PRIORITIES_H_
#define TASK_PRIORITIES_H_

#ifndef tskIDLE_PRIORITY
#define tskIDLE_PRIORITY 0
#endif

#define tskLED_PRIORITY                 (tskIDLE_PRIORITY+1)
#define tskFPGA_COMM_PRIORITY           (tskIDLE_PRIORITY+1)
#define tskWATCHDOG_PRIORITY            (tskIDLE_PRIORITY+1)

#define tskSENSOR_PRIORITY              (tskIDLE_PRIORITY+2)

#define tskHOTSWAP_PRIORITY             (tskIDLE_PRIORITY+2)
#define tskLM75SENSOR_PRIORITY          (tskIDLE_PRIORITY+2)
#define tskINA220SENSOR_PRIORITY        (tskIDLE_PRIORITY+2)

#define tskPAYLOAD_PRIORITY             (tskIDLE_PRIORITY+3)

#define tskIPMI_HANDLERS_PRIORITY       (tskIDLE_PRIORITY+4)
#define tskIPMI_PRIORITY                (tskIDLE_PRIORITY+4)

#define tskIPMB_RX_PRIORITY             (tskIDLE_PRIORITY+5)
#define tskIPMB_TX_PRIORITY             (tskIDLE_PRIORITY+5)

#endif
