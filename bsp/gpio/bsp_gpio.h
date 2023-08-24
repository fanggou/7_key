#ifndef __BSP_GPIO_H
#define __BSP_GPIO_H


/*枚举类型和结构体定义*/
typedef enum _gpio_pin_direction
{
    kGPIO_DigitalInput = 0U,
    KGPIO_DigitalOutput = 1U,
}gpio_pin_direction_t;

/*GPIO配置结构体*/

typedef struct _gpio_pin_config
{
    gpio_pin_direction_t direction;
    uint8_t outputLogic;
}gpio_pin_config_t;

/*函数声明*/



#endif