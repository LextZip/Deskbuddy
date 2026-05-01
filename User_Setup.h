//#define ILI9341_DRIVER
#define ST7789_DRIVER
#define TFT_WIDTH 240
#define TFT_HEIGHT 320


//Had to change RGB Order
#define TFT_RGB_ORDER TFT_BGR

//

#define TFT_MISO 12
#define TFT_MOSI 13
#define TFT_SCLK 14
#define TFT_CS   15
#define TFT_DC   2
#define TFT_RST  -1

#define TFT_BL   21
#define TFT_BACKLIGHT_ON HIGH

// ---- Font loading ----
#define LOAD_GLCD   // Font 1. Dette er den viktigste
#define LOAD_FONT2  // Små tall/tekst
#define LOAD_FONT4  // Medium
#define LOAD_FONT6  // Stor
#define LOAD_FONT7  // 7-segment
#define LOAD_FONT8  // Ekstra stor
#define LOAD_GFXFF  // FreeFonts

#define SPI_FREQUENCY  40000000
// SPI clock frequency for touch controller
#define SPI_TOUCH_FREQUENCY  2500000