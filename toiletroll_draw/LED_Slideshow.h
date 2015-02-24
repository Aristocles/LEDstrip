#ifndef LED_Slideshow__h
#define LED_Slideshow__h

// ==============================
#define LED_Slideshow_MAX    30
enum {
    COLOUR_RED, COLOUR_WHITE,COLOUR_BLUE, COLOUR_YELLOW, COLOUR_GREEN, COLOUR_BROWN, COLOUR_BLACK,
    COLOUR_MAGENTA, COLOUR_CYAN, COLOUR_REALBLACK,
    COLOUR_MAX
};
class LED_Slideshow {
    public:
    LED_Slideshow(LEDstrip *led, uint16_t VIEW_HEIGHT);
    virtual ~LED_Slideshow(void);
    virtual void display();
    virtual void destroy(void);
    virtual void create_colourmap(void);
    void add_colourmap(char c, uint8_t value, uint8_t r, uint8_t g, uint8_t b);
    LED find_colourmap(char c);
    void loop(void);

    const char **imgs;
    uint8_t imgnr, imgnrs;

    LED colours[LED_Slideshow_MAX];
    uint8_t colourmap[LED_Slideshow_MAX];

    void set_imgs(uint8_t nrs);
    char shown;
    LEDstrip *_led;
    uint16_t _VIEW_HEIGHT;
};

#endif