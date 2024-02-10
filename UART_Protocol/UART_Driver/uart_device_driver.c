#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/ioport.h>
#include <linux/interrupt.h>

#define UART_BASE_ADDR 0x3F8

static void uart_init(void) {
  // Request I/O region
  if (request_region(UART_BASE_ADDR, 8, "uart") == -1) {
    printk(KERN_ERR "Failed to request I/O region\n");
    return;
  }

  // Set baud rate
  outb(0x0B, UART_BASE_ADDR + 1);
  outb(0x03, UART_BASE_ADDR + 0);

  // Set data format (8 bits, no parity, 1 stop bit)
  outb(0x03, UART_BASE_ADDR + 3);

  // Enable interrupts
  outb(0x01, UART_BASE_ADDR + 1);

  // Install interrupt handler
  if (request_irq(4, uart_interrupt, 0, "uart", NULL) == -1) {
    printk(KERN_ERR "Failed to install interrupt handler\n");
    return;
  }
}

static void uart_interrupt(int irq, void *dev_id) {
  // Read data from UART
  unsigned char data = inb(UART_BASE_ADDR + 0);

  // Process data
  // ...

  // Acknowledge interrupt
  outb(0x20, UART_BASE_ADDR + 2);
}

static void uart_exit(void) {
  // Free I/O region
  release_region(UART_BASE_ADDR, 8);

  // Free interrupt handler
  free_irq(4, NULL);
}

module_init(uart_init);
module_exit(uart_exit);

MODULE_LICENSE("GPL");