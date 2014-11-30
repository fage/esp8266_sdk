#ifndef __USER_DEVICE_H__
#define __USER_DEVICE_H__

#define ESP_PARAM_SAVE_SEC_0    1
#define ESP_PARAM_SAVE_SEC_1    2
#define ESP_PARAM_SEC_FLAG      3

#define packet_size   (2 * 1024)

#define token_size 41

struct esp_platform_saved_param {
    uint8 devkey[40];
    uint8 token[40];
    uint8 activeflag;
    uint8 pad[3];
};

struct esp_platform_sec_flag_param {
    uint8 flag;
    uint8 pad[3];
};

enum {
    DEVICE_CONNECTING = 40,
    DEVICE_ACTIVE_DONE,
    DEVICE_ACTIVE_FAIL,
    DEVICE_CONNECT_SERVER_FAIL
};

#endif
