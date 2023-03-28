#include "bsp_led.h"

void led_gpio_config(void)
{
	// 使能时钟
	rcu_periph_clock_enable(RCU_LED1);
	rcu_periph_clock_enable(RCU_LED2);
	rcu_periph_clock_enable(RCU_LED3);
	rcu_periph_clock_enable(RCU_LED4);
	// 配置GPIO的模式
	gpio_mode_set(PORT_LED1, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, PIN_LED1);
	gpio_mode_set(PORT_LED2, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, PIN_LED2);
	gpio_mode_set(PORT_LED3, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, PIN_LED3);
	gpio_mode_set(PORT_LED4, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, PIN_LED4);
	// 配置GPIO的输出
	gpio_output_options_set(PORT_LED1, GPIO_OTYPE_PP, GPIO_OSPEED_50MHZ, PIN_LED1);
	gpio_output_options_set(PORT_LED2, GPIO_OTYPE_PP, GPIO_OSPEED_50MHZ, PIN_LED2);
	gpio_output_options_set(PORT_LED3, GPIO_OTYPE_PP, GPIO_OSPEED_50MHZ, PIN_LED3);
	gpio_output_options_set(PORT_LED4, GPIO_OTYPE_PP, GPIO_OSPEED_50MHZ, PIN_LED4);
}