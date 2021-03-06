#ifndef animation_sinus__h
#define animation_sinus__h

#include "A_Tools.h"

class LED_sinus1 : public LED_Animation {
public:
    MYOWNCONSTRUCTOR(LED_sinus1);
    void animation(void);
    LED c[3];
};

class LED_sinus2 : public LED_Animation {
public:
    MYOWNCONSTRUCTOR(LED_sinus2);
    void animation(void);

    int8_t height;
    int8_t direction;
};

class LED_sinus3 : public LED_Animation {
public:
    MYOWNCONSTRUCTOR(LED_sinus3);
    void animation(void);
    LED c[2];
};

class LED_sinus4 : public LED_Animation {
public:
    MYOWNCONSTRUCTOR(LED_sinus4);
    void animation(void);
    LED c_sinus;
    LED c_background;
};

class LED_sinus5 : public LED_Animation {
public:
    MYOWNCONSTRUCTOR(LED_sinus5);
    void animation(void);
    LED c_sinus;
    LED c_background1;
    LED c_background2;
};

#define LED_lissajou1_history	40
class LED_lissajou1 : public LED_Animation {
public:
    MYOWNCONSTRUCTOR(LED_lissajou1);
    void animation(void);
    void shift_history(struct coordinates c);
    LED colour;
    int numpoints;
    int a, b;
    struct coordinates history[LED_lissajou1_history];
};

#define LED_rose1_history	40
class LED_rose1 : public LED_Animation {
public:
    MYOWNCONSTRUCTOR(LED_rose1);
    void animation(void);
    void shift_history(struct coordinates c);
    LED colour;
    int numpoints;
    int a;
    struct coordinates history[LED_lissajou1_history];
};

#endif
