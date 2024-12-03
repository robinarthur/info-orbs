#ifndef CONFIG_H
#define CONFIG_H


// ============= CONFIGURE THESE FIELDS BEFORE FLASHING ====================================================
#define WIFI_SSID "iPhone" // wifi name (please use 2.4gz network)
#define WIFI_PASS "testtesttest" // wifi password
#define TIMEZONE_API_LOCATION "Europe/Berlin" // Use timezone from this list: https://timezonedb.com/time-zones
#define WEATHER_LOCAION "Berlin, BC" //city/state for the weather
#define STOCK_TICKER_LIST "BTC/USD, ETH/USD, GME, AMC, " // Choose your 5 stokcs to display on the stock tracker
#define WEATHER_UNITS_METRIC //Comment this line out(or delete it) if you want imperial units for the weather
#define FORMAT_24_HOUR true // toggle 24 hour clock vs 12 hour clock, chnage between true/false
#define SHOW_AM_PM_INDICATOR false // am/pm on the clock if using 12 hour
#define SHOW_SECOND_TICKS true // ticking indeicator on the centre clock
#define INVERTED_ORBS false // Set to true if using InfoOrbs upside down. Inverts screens and re-orders screens and buttons.
//#define WEB_DATA_WIDGET_URL "" // use this to make your own widgets using an API/Webdata source
//#define WEB_DATA_STOCK_WIDGET_URL "http://<insert host here>/stocks.php?stocks=SPY,VT,GOOG,TSLA,GME" // use this as an alternative to the stock ticker widget
// ============= END CONFIG ==============================================================================


#undef TFT_MOSI
#undef TFT_MISO
#undef TFT_SCLK
#undef TFT_CS
#undef TFT_DC


#undef ILI9341_DRIVER
#define GC9A01_DRIVER

#define TFT_SDA_READ

#define TFT_MOSI 17
#define TFT_MISO -1
#define TFT_SCLK 23
#define TFT_CS 15
#define TFT_DC 19
#define TFT_RST 18

#define SCREEN_1_CS 13
#define SCREEN_2_CS 33
#define SCREEN_3_CS 32
#define SCREEN_4_CS 25
#define SCREEN_5_CS 21

#if INVERTED_ORBS
    #define BUTTON_OK 27
    #define BUTTON_LEFT 14
    #define BUTTON_RIGHT 26
#else
    #define BUTTON_OK 27
    #define BUTTON_LEFT 26
    #define BUTTON_RIGHT 14
#endif

#define BUTTON_MODE INPUT_PULLDOWN
#define BUSY_PIN 2


#define NTP_SERVER "pool.ntp.org"

#define SCREEN_SIZE 240
#define TFT_WIDTH SCREEN_SIZE
#define TFT_HEIGHT SCREEN_SIZE
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8N
#define LOAD_GFXFF
#define SMOOTH_FONT
#define SPI_FREQUENCY 27000000

#define SHADOWING 1

#define TIMEZONE_API_KEY "97R9WKDPBLIO"
#define TIMEZONE_API_URL "http://api.timezonedb.com/v2.1/get-time-zone"
#define WEATHER_API_KEY "XW2RDGD6XK432AF25BNK2A3C7"


#define BG_COLOR 0x20a1         // clock shadow colour(Light brown)
#define FOREGROUND_COLOR 0xfc80  // orange for clock

#define MAX_RETRIES 3

#endif
