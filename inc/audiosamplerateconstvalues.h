#ifndef AUDIOSAMPLERATECONSTVALUES_H
#define AUDIOSAMPLERATECONSTVALUES_H

#include <cstdint>

/* ------------------------------- 8000 Hz ------------------------------- */

constexpr const uint32_t sampleRate8000 = 8000;

/***************************************
23.98 fps (NTSC) to 24 fps (NTSC)
7992 (7992.00799)
(8000 to 7992; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate8000Pullup2398FpsTo24Fps = 7992;

/***************************************
23.98 fps (NTSC) to 25 fps (PAL)
7672 (7672.32767)
(8000 to 7672; 4.27529% Pullup)
***************************************/

constexpr const uint32_t sampleRate8000Pullup2398FpsTo25Fps = 7672;

/***************************************
23.98 fps (NTSC) to 29.97 fps (NTSC)
6400 (6400.0)
(8000 to 6400; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate8000Pullup2398FpsTo2997Fps = 6400;

/***************************************
23.98 fps (NTSC) to 30 fps (NTSC)
6394 (6393.60639)
(8000 to 6394; 25.1173% Pullup)
***************************************/

constexpr const uint32_t sampleRate8000Pullup2398FpsTo30Fps = 6394;

/***************************************
24 fps (NTSC) to 23.98 fps (NTSC)
8008 (8008.0)
(8000 to 8008; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate8000Pulldown24FpsTo2398Fps = 8008;

/***************************************
24 fps (NTSC) to 25 fps (PAL)
7680 (7680.0)
(8000 to 7680; 4.16667% Pullup)
***************************************/

constexpr const uint32_t sampleRate8000Pullup24FpsTo25Fps = 7680;

/***************************************
24 fps (NTSC) to 29.97 fps (NTSC)
6406 (6406.4)
(8000 to 6406; 24.88292% Pullup)
***************************************/

constexpr const uint32_t sampleRate8000Pullup24FpsTo2997Fps = 6406;

/***************************************
24 fps (NTSC) to 30 fps (NTSC)
6400 (6400.0)
(8000 to 6400; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate8000Pullup24FpsTo30Fps = 6400;

/***************************************
25 fps (PAL) to 23.98 fps (NTSC)
8342 (8341.66667)
(8000 to 8342; 4.275% Pulldown)
***************************************/

constexpr const uint32_t sampleRate8000Pulldown25FpsTo2398Fps = 8342;

/***************************************
25 fps (PAL) to 24 fps (NTSC)
8333 (8333.33333)
(8000 to 8333; 4.1625% Pulldown)
***************************************/

constexpr const uint32_t sampleRate8000Pulldown25FpsTo24Fps = 8333;

/***************************************
25 fps (PAL) to 29.97 fps (NTSC)
6673 (6673.33333)
(8000 to 6673; 19.88611% Pullup)
***************************************/

constexpr const uint32_t sampleRate8000Pullup25FpsTo2997Fps = 6673;

/***************************************
25 fps (PAL) to 30 fps (NTSC)
6667 (6666.66667)
(8000 to 6667; 19.994% Pullup)
***************************************/

constexpr const uint32_t sampleRate8000Pullup25FpsTo30Fps = 6667;

/***************************************
29.97 fps (NTSC) to 23.98 fps (NTSC)
10000 (10000.0)
(8000 to 10000; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate8000Pulldown2997FpsTo2398Fps = 10000;

/***************************************
29.97 fps (NTSC) to 24 fps (NTSC)
9990 (9990.00999)
(8000 to 9990; 24.875% Pulldown)
***************************************/

constexpr const uint32_t sampleRate8000Pulldown2997FpsTo24Fps = 9990;

/***************************************
29.97 fps (NTSC) to 25 fps (PAL)
9590 (9590.40959)
(8000 to 9590; 19.875% Pulldown)
***************************************/

constexpr const uint32_t sampleRate8000Pulldown2997FpsTo25Fps = 9590;

/***************************************
29.97 fps (NTSC) to 30 fps (NTSC)
7992 (7992.00799)
(8000 to 7992; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate8000Pullup2997FpsTo30Fps = 7992;

/***************************************
30 fps (NTSC) to 23.98 fps (NTSC)
10010 (10010.0)
(8000 to 10010; 25.125% Pulldown)
***************************************/

constexpr const uint32_t sampleRate8000Pulldown30FpsTo2398Fps = 10010;

/***************************************
30 fps (NTSC) to 24 fps (NTSC)
10000 (10000.0)
(8000 to 10000; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate8000Pulldown30FpsTo24Fps = 10000;

/***************************************
30 fps (NTSC) to 25 fps (PAL)
9600 (9600.0)
(8000 to 9600; 20.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate8000Pulldown30FpsTo25Fps = 9600;

/***************************************
30 fps (NTSC) to 29.97 fps (NTSC)
8008 (8008.0)
(8000 to 8008; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate8000Pulldown30FpsTo2997Fps = 8008;

/* ------------------------------ 11025 Hz ------------------------------- */

constexpr const uint32_t sampleRate11025 = 11025;

/***************************************
23.98 fps (NTSC) to 24 fps (NTSC)
11014 (11013.98601)
(11025 to 11014; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate11025Pullup2398FpsTo24Fps = 11014;

/***************************************
23.98 fps (NTSC) to 25 fps (PAL)
10573 (10573.42657)
(11025 to 10573; 4.27504% Pullup)
***************************************/

constexpr const uint32_t sampleRate11025Pullup2398FpsTo25Fps = 10573;

/***************************************
23.98 fps (NTSC) to 29.97 fps (NTSC)
8820 (8820.0)
(11025 to 8820; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate11025Pullup2398FpsTo2997Fps = 8820;

/***************************************
23.98 fps (NTSC) to 30 fps (NTSC)
8811 (8811.18881)
(11025 to 8811; 25.12768% Pullup)
***************************************/

constexpr const uint32_t sampleRate11025Pullup2398FpsTo30Fps = 8811;

/***************************************
24 fps (NTSC) to 23.98 fps (NTSC)
11036 (11036.025)
(11025 to 11036; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate11025Pulldown24FpsTo2398Fps = 11036;

/***************************************
24 fps (NTSC) to 25 fps (PAL)
10584 (10584.0)
(11025 to 10584; 4.16667% Pullup)
***************************************/

constexpr const uint32_t sampleRate11025Pullup24FpsTo25Fps = 10584;

/***************************************
24 fps (NTSC) to 29.97 fps (NTSC)
8829 (8828.82)
(11025 to 8829; 24.87258% Pullup)
***************************************/

constexpr const uint32_t sampleRate11025Pullup24FpsTo2997Fps = 8829;

/***************************************
24 fps (NTSC) to 30 fps (NTSC)
8820 (8820.0)
(11025 to 8820; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate11025Pullup24FpsTo30Fps = 8820;

/***************************************
25 fps (PAL) to 23.98 fps (NTSC)
11496 (11495.85938)
(11025 to 11496; 4.27211% Pulldown)
***************************************/

constexpr const uint32_t sampleRate11025Pulldown25FpsTo2398Fps = 11496;

/***************************************
25 fps (PAL) to 24 fps (NTSC)
11484 (11484.375)
(11025 to 11484; 4.16327% Pulldown)
***************************************/

constexpr const uint32_t sampleRate11025Pulldown25FpsTo24Fps = 11484;

/***************************************
25 fps (PAL) to 29.97 fps (NTSC)
9197 (9196.6875)
(11025 to 9197; 19.87605% Pullup)
***************************************/

constexpr const uint32_t sampleRate11025Pullup25FpsTo2997Fps = 9197;

/***************************************
25 fps (PAL) to 30 fps (NTSC)
9188 (9187.5)
(11025 to 9188; 19.99347% Pullup)
***************************************/

constexpr const uint32_t sampleRate11025Pullup25FpsTo30Fps = 9188;

/***************************************
29.97 fps (NTSC) to 23.98 fps (NTSC)
13781 (13781.25)
(11025 to 13781; 24.99773% Pulldown)
***************************************/

constexpr const uint32_t sampleRate11025Pulldown2997FpsTo2398Fps = 13781;

/***************************************
29.97 fps (NTSC) to 24 fps (NTSC)
13767 (13767.48252)
(11025 to 13767; 24.87075% Pulldown)
***************************************/

constexpr const uint32_t sampleRate11025Pulldown2997FpsTo24Fps = 13767;

/***************************************
29.97 fps (NTSC) to 25 fps (PAL)
13217 (13216.78322)
(11025 to 13217; 19.88209% Pulldown)
***************************************/

constexpr const uint32_t sampleRate11025Pulldown2997FpsTo25Fps = 13217;

/***************************************
29.97 fps (NTSC) to 30 fps (NTSC)
11014 (11013.98601)
(11025 to 11014; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate11025Pullup2997FpsTo30Fps = 11014;

/***************************************
30 fps (NTSC) to 23.98 fps (NTSC)
13795 (13795.03125)
(11025 to 13795; 25.12472% Pulldown)
***************************************/

constexpr const uint32_t sampleRate11025Pulldown30FpsTo2398Fps = 13795;

/***************************************
30 fps (NTSC) to 24 fps (NTSC)
13781 (13781.25)
(11025 to 13781; 24.99773% Pulldown)
***************************************/

constexpr const uint32_t sampleRate11025Pulldown30FpsTo24Fps = 13781;

/***************************************
30 fps (NTSC) to 25 fps (PAL)
13230 (13230.0)
(11025 to 13230; 20.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate11025Pulldown30FpsTo25Fps = 13230;

/***************************************
30 fps (NTSC) to 29.97 fps (NTSC)
11036 (11036.025)
(11025 to 11036; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate11025Pulldown30FpsTo2997Fps = 11036;

/* ------------------------------ 16000 Hz ------------------------------- */

constexpr const uint32_t sampleRate16000 = 16000;

/***************************************
23.98 fps (NTSC) to 24 fps (NTSC)
15984 (15984.01598)
(16000 to 15984; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate16000Pullup2398FpsTo24Fps = 15984;

/***************************************
23.98 fps (NTSC) to 25 fps (PAL)
15345 (15344.65534)
(16000 to 15345; 4.26849% Pullup)
***************************************/

constexpr const uint32_t sampleRate16000Pullup2398FpsTo25Fps = 15345;

/***************************************
23.98 fps (NTSC) to 29.97 fps (NTSC)
12800 (12800.0)
(16000 to 12800; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate16000Pullup2398FpsTo2997Fps = 12800;

/***************************************
23.98 fps (NTSC) to 30 fps (NTSC)
12787 (12787.21279)
(16000 to 12787; 25.12708% Pullup)
***************************************/

constexpr const uint32_t sampleRate16000Pullup2398FpsTo30Fps = 12787;

/***************************************
24 fps (NTSC) to 23.98 fps (NTSC)
16016 (16016.0)
(16000 to 16016; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate16000Pulldown24FpsTo2398Fps = 16016;

/***************************************
24 fps (NTSC) to 25 fps (PAL)
15360 (15360.0)
(16000 to 15360; 4.16667% Pullup)
***************************************/

constexpr const uint32_t sampleRate16000Pullup24FpsTo25Fps = 15360;

/***************************************
24 fps (NTSC) to 29.97 fps (NTSC)
12813 (12812.8)
(16000 to 12813; 24.87318% Pullup)
***************************************/

constexpr const uint32_t sampleRate16000Pullup24FpsTo2997Fps = 12813;

/***************************************
24 fps (NTSC) to 30 fps (NTSC)
12800 (12800.0)
(16000 to 12800; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate16000Pullup24FpsTo30Fps = 12800;

/***************************************
25 fps (PAL) to 23.98 fps (NTSC)
16683 (16683.33333)
(16000 to 16683; 4.26875% Pulldown)
***************************************/

constexpr const uint32_t sampleRate16000Pulldown25FpsTo2398Fps = 16683;

/***************************************
25 fps (PAL) to 24 fps (NTSC)
16667 (16666.66667)
(16000 to 16667; 4.16875% Pulldown)
***************************************/

constexpr const uint32_t sampleRate16000Pulldown25FpsTo24Fps = 16667;

/***************************************
25 fps (PAL) to 29.97 fps (NTSC)
13347 (13346.66667)
(16000 to 13347; 19.87713% Pullup)
***************************************/

constexpr const uint32_t sampleRate16000Pullup25FpsTo2997Fps = 13347;

/***************************************
25 fps (PAL) to 30 fps (NTSC)
13333 (13333.33333)
(16000 to 13333; 20.003% Pullup)
***************************************/

constexpr const uint32_t sampleRate16000Pullup25FpsTo30Fps = 13333;

/***************************************
29.97 fps (NTSC) to 23.98 fps (NTSC)
20000 (20000.0)
(16000 to 20000; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate16000Pulldown2997FpsTo2398Fps = 20000;

/***************************************
29.97 fps (NTSC) to 24 fps (NTSC)
19980 (19980.01998)
(16000 to 19980; 24.875% Pulldown)
***************************************/

constexpr const uint32_t sampleRate16000Pulldown2997FpsTo24Fps = 19980;

/***************************************
29.97 fps (NTSC) to 25 fps (PAL)
19181 (19180.81918)
(16000 to 19181; 19.88125% Pulldown)
***************************************/

constexpr const uint32_t sampleRate16000Pulldown2997FpsTo25Fps = 19181;

/***************************************
29.97 fps (NTSC) to 30 fps (NTSC)
15984 (15984.01598)
(16000 to 15984; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate16000Pullup2997FpsTo30Fps = 15984;

/***************************************
30 fps (NTSC) to 23.98 fps (NTSC)
20020 (20020.0)
(16000 to 20020; 25.125% Pulldown)
***************************************/

constexpr const uint32_t sampleRate16000Pulldown30FpsTo2398Fps = 20020;

/***************************************
30 fps (NTSC) to 24 fps (NTSC)
20000 (20000.0)
(16000 to 20000; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate16000Pulldown30FpsTo24Fps = 20000;

/***************************************
30 fps (NTSC) to 25 fps (PAL)
19200 (19200.0)
(16000 to 19200; 20.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate16000Pulldown30FpsTo25Fps = 19200;

/***************************************
30 fps (NTSC) to 29.97 fps (NTSC)
16016 (16016.0)
(16000 to 16016; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate16000Pulldown30FpsTo2997Fps = 16016;

/* ------------------------------ 22050 Hz ------------------------------- */

constexpr const uint32_t sampleRate22050 = 22050;

/***************************************
23.98 fps (NTSC) to 24 fps (NTSC)
22028 (22027.97203)
(22050 to 22028; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate22050Pullup2398FpsTo24Fps = 22028;

/***************************************
23.98 fps (NTSC) to 25 fps (PAL)
21147 (21146.85315)
(22050 to 21147; 4.27011% Pullup)
***************************************/

constexpr const uint32_t sampleRate22050Pullup2398FpsTo25Fps = 21147;

/***************************************
23.98 fps (NTSC) to 29.97 fps (NTSC)
17640 (17640.0)
(22050 to 17640; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate22050Pullup2398FpsTo2997Fps = 17640;

/***************************************
23.98 fps (NTSC) to 30 fps (NTSC)
17622 (17622.37762)
(22050 to 17622; 25.12768% Pullup)
***************************************/

constexpr const uint32_t sampleRate22050Pullup2398FpsTo30Fps = 17622;

/***************************************
24 fps (NTSC) to 23.98 fps (NTSC)
22072 (22072.05)
(22050 to 22072; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate22050Pulldown24FpsTo2398Fps = 22072;

/***************************************
24 fps (NTSC) to 25 fps (PAL)
21168 (21168.0)
(22050 to 21168; 4.16667% Pullup)
***************************************/

constexpr const uint32_t sampleRate22050Pullup24FpsTo25Fps = 21168;

/***************************************
24 fps (NTSC) to 29.97 fps (NTSC)
17658 (17657.64)
(22050 to 17658; 24.87258% Pullup)
***************************************/

constexpr const uint32_t sampleRate22050Pullup24FpsTo2997Fps = 17658;

/***************************************
24 fps (NTSC) to 30 fps (NTSC)
17640 (17640.0)
(22050 to 17640; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate22050Pullup24FpsTo30Fps = 17640;

/***************************************
25 fps (PAL) to 23.98 fps (NTSC)
22992 (22991.71875)
(22050 to 22992; 4.27211% Pulldown)
***************************************/

constexpr const uint32_t sampleRate22050Pulldown25FpsTo2398Fps = 22992;

/***************************************
25 fps (PAL) to 24 fps (NTSC)
22969 (22968.75)
(22050 to 22969; 4.1678% Pulldown)
***************************************/

constexpr const uint32_t sampleRate22050Pulldown25FpsTo24Fps = 22969;

/***************************************
25 fps (PAL) to 29.97 fps (NTSC)
18393 (18393.375)
(22050 to 18393; 19.88256% Pullup)
***************************************/

constexpr const uint32_t sampleRate22050Pullup25FpsTo2997Fps = 18393;

/***************************************
25 fps (PAL) to 30 fps (NTSC)
18375 (18375.0)
(22050 to 18375; 20.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate22050Pullup25FpsTo30Fps = 18375;

/***************************************
29.97 fps (NTSC) to 23.98 fps (NTSC)
27562 (27562.5)
(22050 to 27562; 24.99773% Pulldown)
***************************************/

constexpr const uint32_t sampleRate22050Pulldown2997FpsTo2398Fps = 27562;

/***************************************
29.97 fps (NTSC) to 24 fps (NTSC)
27535 (27534.96503)
(22050 to 27535; 24.87528% Pulldown)
***************************************/

constexpr const uint32_t sampleRate22050Pulldown2997FpsTo24Fps = 27535;

/***************************************
29.97 fps (NTSC) to 25 fps (PAL)
26434 (26433.56643)
(22050 to 26434; 19.88209% Pulldown)
***************************************/

constexpr const uint32_t sampleRate22050Pulldown2997FpsTo25Fps = 26434;

/***************************************
29.97 fps (NTSC) to 30 fps (NTSC)
22028 (22027.97203)
(22050 to 22028; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate22050Pullup2997FpsTo30Fps = 22028;

/***************************************
30 fps (NTSC) to 23.98 fps (NTSC)
27590 (27590.0625)
(22050 to 27590; 25.12472% Pulldown)
***************************************/

constexpr const uint32_t sampleRate22050Pulldown30FpsTo2398Fps = 27590;

/***************************************
30 fps (NTSC) to 24 fps (NTSC)
27562 (27562.5)
(22050 to 27562; 24.99773% Pulldown)
***************************************/

constexpr const uint32_t sampleRate22050Pulldown30FpsTo24Fps = 27562;

/***************************************
30 fps (NTSC) to 25 fps (PAL)
26460 (26460.0)
(22050 to 26460; 20.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate22050Pulldown30FpsTo25Fps = 26460;

/***************************************
30 fps (NTSC) to 29.97 fps (NTSC)
22072 (22072.05)
(22050 to 22072; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate22050Pulldown30FpsTo2997Fps = 22072;

/* ------------------------------ 32000 Hz ------------------------------- */

constexpr const uint32_t sampleRate32000 = 32000;

/***************************************
23.98 fps (NTSC) to 24 fps (NTSC)
31968 (31968.03197)
(32000 to 31968; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate32000Pullup2398FpsTo24Fps = 31968;

/***************************************
23.98 fps (NTSC) to 25 fps (PAL)
30689 (30689.31069)
(32000 to 30689; 4.27189% Pullup)
***************************************/

constexpr const uint32_t sampleRate32000Pullup2398FpsTo25Fps = 30689;

/***************************************
23.98 fps (NTSC) to 29.97 fps (NTSC)
25600 (25600.0)
(32000 to 25600; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate32000Pullup2398FpsTo2997Fps = 25600;

/***************************************
23.98 fps (NTSC) to 30 fps (NTSC)
25574 (25574.42557)
(32000 to 25574; 25.12708% Pullup)
***************************************/

constexpr const uint32_t sampleRate32000Pullup2398FpsTo30Fps = 25574;

/***************************************
24 fps (NTSC) to 23.98 fps (NTSC)
32032 (32032.0)
(32000 to 32032; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate32000Pulldown24FpsTo2398Fps = 32032;

/***************************************
24 fps (NTSC) to 25 fps (PAL)
30720 (30720.0)
(32000 to 30720; 4.16667% Pullup)
***************************************/

constexpr const uint32_t sampleRate32000Pullup24FpsTo25Fps = 30720;

/***************************************
24 fps (NTSC) to 29.97 fps (NTSC)
25626 (25625.6)
(32000 to 25626; 24.87318% Pullup)
***************************************/

constexpr const uint32_t sampleRate32000Pullup24FpsTo2997Fps = 25626;

/***************************************
24 fps (NTSC) to 30 fps (NTSC)
25600 (25600.0)
(32000 to 25600; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate32000Pullup24FpsTo30Fps = 25600;

/***************************************
25 fps (PAL) to 23.98 fps (NTSC)
33367 (33366.66667)
(32000 to 33367; 4.27187% Pulldown)
***************************************/

constexpr const uint32_t sampleRate32000Pulldown25FpsTo2398Fps = 33367;

/***************************************
25 fps (PAL) to 24 fps (NTSC)
33333 (33333.33333)
(32000 to 33333; 4.16562% Pulldown)
***************************************/

constexpr const uint32_t sampleRate32000Pulldown25FpsTo24Fps = 33333;

/***************************************
25 fps (PAL) to 29.97 fps (NTSC)
26693 (26693.33333)
(32000 to 26693; 19.88162% Pullup)
***************************************/

constexpr const uint32_t sampleRate32000Pullup25FpsTo2997Fps = 26693;

/***************************************
25 fps (PAL) to 30 fps (NTSC)
26667 (26666.66667)
(32000 to 26667; 19.9985% Pullup)
***************************************/

constexpr const uint32_t sampleRate32000Pullup25FpsTo30Fps = 26667;

/***************************************
29.97 fps (NTSC) to 23.98 fps (NTSC)
40000 (40000.0)
(32000 to 40000; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate32000Pulldown2997FpsTo2398Fps = 40000;

/***************************************
29.97 fps (NTSC) to 24 fps (NTSC)
39960 (39960.03996)
(32000 to 39960; 24.875% Pulldown)
***************************************/

constexpr const uint32_t sampleRate32000Pulldown2997FpsTo24Fps = 39960;

/***************************************
29.97 fps (NTSC) to 25 fps (PAL)
38362 (38361.63836)
(32000 to 38362; 19.88125% Pulldown)
***************************************/

constexpr const uint32_t sampleRate32000Pulldown2997FpsTo25Fps = 38362;

/***************************************
29.97 fps (NTSC) to 30 fps (NTSC)
31968 (31968.03197)
(32000 to 31968; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate32000Pullup2997FpsTo30Fps = 31968;

/***************************************
30 fps (NTSC) to 23.98 fps (NTSC)
40040 (40040.0)
(32000 to 40040; 25.125% Pulldown)
***************************************/

constexpr const uint32_t sampleRate32000Pulldown30FpsTo2398Fps = 40040;

/***************************************
30 fps (NTSC) to 24 fps (NTSC)
40000 (40000.0)
(32000 to 40000; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate32000Pulldown30FpsTo24Fps = 40000;

/***************************************
30 fps (NTSC) to 25 fps (PAL)
38400 (38400.0)
(32000 to 38400; 20.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate32000Pulldown30FpsTo25Fps = 38400;

/***************************************
30 fps (NTSC) to 29.97 fps (NTSC)
32032 (32032.0)
(32000 to 32032; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate32000Pulldown30FpsTo2997Fps = 32032;

/* ------------------------------ 44100 Hz ------------------------------- */

constexpr const uint32_t sampleRate44100 = 44100;

/***************************************
23.98 fps (NTSC) to 24 fps (NTSC)
44056 (44055.94406)
(44100 to 44056; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate44100Pullup2398FpsTo24Fps = 44056;

/***************************************
23.98 fps (NTSC) to 25 fps (PAL)
42294 (42293.70629)
(44100 to 42294; 4.27011% Pullup)
***************************************/

constexpr const uint32_t sampleRate44100Pullup2398FpsTo25Fps = 42294;

/***************************************
23.98 fps (NTSC) to 29.97 fps (NTSC)
35280 (35280.0)
(44100 to 35280; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate44100Pullup2398FpsTo2997Fps = 35280;

/***************************************
23.98 fps (NTSC) to 30 fps (NTSC)
35245 (35244.75524)
(44100 to 35245; 25.12413% Pullup)
***************************************/

constexpr const uint32_t sampleRate44100Pullup2398FpsTo30Fps = 35245;

/***************************************
24 fps (NTSC) to 23.98 fps (NTSC)
44144 (44144.1)
(44100 to 44144; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate44100Pulldown24FpsTo2398Fps = 44144;

/***************************************
24 fps (NTSC) to 25 fps (PAL)
42336 (42336.0)
(44100 to 42336; 4.16667% Pullup)
***************************************/

constexpr const uint32_t sampleRate44100Pullup24FpsTo25Fps = 42336;

/***************************************
24 fps (NTSC) to 29.97 fps (NTSC)
35315 (35315.28)
(44100 to 35315; 24.87611% Pullup)
***************************************/

constexpr const uint32_t sampleRate44100Pullup24FpsTo2997Fps = 35315;

/***************************************
24 fps (NTSC) to 30 fps (NTSC)
35280 (35280.0)
(44100 to 35280; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate44100Pullup24FpsTo30Fps = 35280;

/***************************************
25 fps (PAL) to 23.98 fps (NTSC)
45983 (45983.4375)
(44100 to 45983; 4.26984% Pulldown)
***************************************/

constexpr const uint32_t sampleRate44100Pulldown25FpsTo2398Fps = 45983;

/***************************************
25 fps (PAL) to 24 fps (NTSC)
45938 (45937.5)
(44100 to 45938; 4.1678% Pulldown)
***************************************/

constexpr const uint32_t sampleRate44100Pulldown25FpsTo24Fps = 45938;

/***************************************
25 fps (PAL) to 29.97 fps (NTSC)
36787 (36786.75)
(44100 to 36787; 19.87931% Pullup)
***************************************/

constexpr const uint32_t sampleRate44100Pullup25FpsTo2997Fps = 36787;

/***************************************
25 fps (PAL) to 30 fps (NTSC)
36750 (36750.0)
(44100 to 36750; 20.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate44100Pullup25FpsTo30Fps = 36750;

/***************************************
29.97 fps (NTSC) to 23.98 fps (NTSC)
55125 (55125.0)
(44100 to 55125; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate44100Pulldown2997FpsTo2398Fps = 55125;

/***************************************
29.97 fps (NTSC) to 24 fps (NTSC)
55070 (55069.93007)
(44100 to 55070; 24.87528% Pulldown)
***************************************/

constexpr const uint32_t sampleRate44100Pulldown2997FpsTo24Fps = 55070;

/***************************************
29.97 fps (NTSC) to 25 fps (PAL)
52867 (52867.13287)
(44100 to 52867; 19.87982% Pulldown)
***************************************/

constexpr const uint32_t sampleRate44100Pulldown2997FpsTo25Fps = 52867;

/***************************************
29.97 fps (NTSC) to 30 fps (NTSC)
44056 (44055.94406)
(44100 to 44056; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate44100Pullup2997FpsTo30Fps = 44056;

/***************************************
30 fps (NTSC) to 23.98 fps (NTSC)
55180 (55180.125)
(44100 to 55180; 25.12472% Pulldown)
***************************************/

constexpr const uint32_t sampleRate44100Pulldown30FpsTo2398Fps = 55180;

/***************************************
30 fps (NTSC) to 24 fps (NTSC)
55125 (55125.0)
(44100 to 55125; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate44100Pulldown30FpsTo24Fps = 55125;

/***************************************
30 fps (NTSC) to 25 fps (PAL)
52920 (52920.0)
(44100 to 52920; 20.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate44100Pulldown30FpsTo25Fps = 52920;

/***************************************
30 fps (NTSC) to 29.97 fps (NTSC)
44144 (44144.1)
(44100 to 44144; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate44100Pulldown30FpsTo2997Fps = 44144;

/* ------------------------------ 48000 Hz ------------------------------- */

constexpr const uint32_t sampleRate48000 = 48000;

/***************************************
23.98 fps (NTSC) to 24 fps (NTSC)
47952 (47952.04795)
(48000 to 47952; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate48000Pullup2398FpsTo24Fps = 47952;

/***************************************
23.98 fps (NTSC) to 25 fps (PAL)
46034 (46033.96603)
(48000 to 46034; 4.27076% Pullup)
***************************************/

constexpr const uint32_t sampleRate48000Pullup2398FpsTo25Fps = 46034;

/***************************************
23.98 fps (NTSC) to 29.97 fps (NTSC)
38400 (38400.0)
(48000 to 38400; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate48000Pullup2398FpsTo2997Fps = 38400;

/***************************************
23.98 fps (NTSC) to 30 fps (NTSC)
38362 (38361.63836)
(48000 to 38362; 25.12382% Pullup)
***************************************/

constexpr const uint32_t sampleRate48000Pullup2398FpsTo30Fps = 38362;

/***************************************
24 fps (NTSC) to 23.98 fps (NTSC)
48048 (48048.0)
(48000 to 48048; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate48000Pulldown24FpsTo2398Fps = 48048;

/***************************************
24 fps (NTSC) to 25 fps (PAL)
46080 (46080.0)
(48000 to 46080; 4.16667% Pullup)
***************************************/

constexpr const uint32_t sampleRate48000Pullup24FpsTo25Fps = 46080;

/***************************************
24 fps (NTSC) to 29.97 fps (NTSC)
38438 (38438.4)
(48000 to 38438; 24.87642% Pullup)
***************************************/

constexpr const uint32_t sampleRate48000Pullup24FpsTo2997Fps = 38438;

/***************************************
24 fps (NTSC) to 30 fps (NTSC)
38400 (38400.0)
(48000 to 38400; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate48000Pullup24FpsTo30Fps = 38400;

/***************************************
25 fps (PAL) to 23.98 fps (NTSC)
50050 (50050.0)
(48000 to 50050; 4.27083% Pulldown)
***************************************/

constexpr const uint32_t sampleRate48000Pulldown25FpsTo2398Fps = 50050;

/***************************************
25 fps (PAL) to 24 fps (NTSC)
50000 (50000.0)
(48000 to 50000; 4.16667% Pulldown)
***************************************/

constexpr const uint32_t sampleRate48000Pulldown25FpsTo24Fps = 50000;

/***************************************
25 fps (PAL) to 29.97 fps (NTSC)
40040 (40040.0)
(48000 to 40040; 19.88012% Pullup)
***************************************/

constexpr const uint32_t sampleRate48000Pullup25FpsTo2997Fps = 40040;

/***************************************
25 fps (PAL) to 30 fps (NTSC)
40000 (40000.0)
(48000 to 40000; 20.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate48000Pullup25FpsTo30Fps = 40000;

/***************************************
29.97 fps (NTSC) to 23.98 fps (NTSC)
60000 (60000.0)
(48000 to 60000; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate48000Pulldown2997FpsTo2398Fps = 60000;

/***************************************
29.97 fps (NTSC) to 24 fps (NTSC)
59940 (59940.05994)
(48000 to 59940; 24.875% Pulldown)
***************************************/

constexpr const uint32_t sampleRate48000Pulldown2997FpsTo24Fps = 59940;

/***************************************
29.97 fps (NTSC) to 25 fps (PAL)
57542 (57542.45754)
(48000 to 57542; 19.87917% Pulldown)
***************************************/

constexpr const uint32_t sampleRate48000Pulldown2997FpsTo25Fps = 57542;

/***************************************
29.97 fps (NTSC) to 30 fps (NTSC)
47952 (47952.04795)
(48000 to 47952; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate48000Pullup2997FpsTo30Fps = 47952;

/***************************************
30 fps (NTSC) to 23.98 fps (NTSC)
60060 (60060.0)
(48000 to 60060; 25.125% Pulldown)
***************************************/

constexpr const uint32_t sampleRate48000Pulldown30FpsTo2398Fps = 60060;

/***************************************
30 fps (NTSC) to 24 fps (NTSC)
60000 (60000.0)
(48000 to 60000; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate48000Pulldown30FpsTo24Fps = 60000;

/***************************************
30 fps (NTSC) to 25 fps (PAL)
57600 (57600.0)
(48000 to 57600; 20.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate48000Pulldown30FpsTo25Fps = 57600;

/***************************************
30 fps (NTSC) to 29.97 fps (NTSC)
48048 (48048.0)
(48000 to 48048; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate48000Pulldown30FpsTo2997Fps = 48048;

/* ------------------------------ 88200 Hz ------------------------------- */

constexpr const uint32_t sampleRate88200 = 88200;

/***************************************
23.98 fps (NTSC) to 24 fps (NTSC)
88112 (88111.88811)
(88200 to 88112; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate88200Pullup2398FpsTo24Fps = 88112;

/***************************************
23.98 fps (NTSC) to 25 fps (PAL)
84587 (84587.41259)
(88200 to 84587; 4.27134% Pullup)
***************************************/

constexpr const uint32_t sampleRate88200Pullup2398FpsTo25Fps = 84587;

/***************************************
23.98 fps (NTSC) to 29.97 fps (NTSC)
70560 (70560.0)
(88200 to 70560; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate88200Pullup2398FpsTo2997Fps = 70560;

/***************************************
23.98 fps (NTSC) to 30 fps (NTSC)
70490 (70489.51049)
(88200 to 70490; 25.12413% Pullup)
***************************************/

constexpr const uint32_t sampleRate88200Pullup2398FpsTo30Fps = 70490;

/***************************************
24 fps (NTSC) to 23.98 fps (NTSC)
88288 (88288.2)
(88200 to 88288; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate88200Pulldown24FpsTo2398Fps = 88288;

/***************************************
24 fps (NTSC) to 25 fps (PAL)
84672 (84672.0)
(88200 to 84672; 4.16667% Pullup)
***************************************/

constexpr const uint32_t sampleRate88200Pullup24FpsTo25Fps = 84672;

/***************************************
24 fps (NTSC) to 29.97 fps (NTSC)
70631 (70630.56)
(88200 to 70631; 24.87435% Pullup)
***************************************/

constexpr const uint32_t sampleRate88200Pullup24FpsTo2997Fps = 70631;

/***************************************
24 fps (NTSC) to 30 fps (NTSC)
70560 (70560.0)
(88200 to 70560; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate88200Pullup24FpsTo30Fps = 70560;

/***************************************
25 fps (PAL) to 23.98 fps (NTSC)
91967 (91966.875)
(88200 to 91967; 4.27098% Pulldown)
***************************************/

constexpr const uint32_t sampleRate88200Pulldown25FpsTo2398Fps = 91967;

/***************************************
25 fps (PAL) to 24 fps (NTSC)
91875 (91875.0)
(88200 to 91875; 4.16667% Pulldown)
***************************************/

constexpr const uint32_t sampleRate88200Pulldown25FpsTo24Fps = 91875;

/***************************************
25 fps (PAL) to 29.97 fps (NTSC)
73574 (73573.5)
(88200 to 73574; 19.87931% Pullup)
***************************************/

constexpr const uint32_t sampleRate88200Pullup25FpsTo2997Fps = 73574;

/***************************************
25 fps (PAL) to 30 fps (NTSC)
73500 (73500.0)
(88200 to 73500; 20.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate88200Pullup25FpsTo30Fps = 73500;

/***************************************
29.97 fps (NTSC) to 23.98 fps (NTSC)
110250 (110250.0)
(88200 to 110250; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate88200Pulldown2997FpsTo2398Fps = 110250;

/***************************************
29.97 fps (NTSC) to 24 fps (NTSC)
110140 (110139.86014)
(88200 to 110140; 24.87528% Pulldown)
***************************************/

constexpr const uint32_t sampleRate88200Pulldown2997FpsTo24Fps = 110140;

/***************************************
29.97 fps (NTSC) to 25 fps (PAL)
105734 (105734.26573)
(88200 to 105734; 19.87982% Pulldown)
***************************************/

constexpr const uint32_t sampleRate88200Pulldown2997FpsTo25Fps = 105734;

/***************************************
29.97 fps (NTSC) to 30 fps (NTSC)
88112 (88111.88811)
(88200 to 88112; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate88200Pullup2997FpsTo30Fps = 88112;

/***************************************
30 fps (NTSC) to 23.98 fps (NTSC)
110360 (110360.25)
(88200 to 110360; 25.12472% Pulldown)
***************************************/

constexpr const uint32_t sampleRate88200Pulldown30FpsTo2398Fps = 110360;

/***************************************
30 fps (NTSC) to 24 fps (NTSC)
110250 (110250.0)
(88200 to 110250; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate88200Pulldown30FpsTo24Fps = 110250;

/***************************************
30 fps (NTSC) to 25 fps (PAL)
105840 (105840.0)
(88200 to 105840; 20.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate88200Pulldown30FpsTo25Fps = 105840;

/***************************************
30 fps (NTSC) to 29.97 fps (NTSC)
88288 (88288.2)
(88200 to 88288; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate88200Pulldown30FpsTo2997Fps = 88288;

/* ------------------------------ 96000 Hz ------------------------------- */

constexpr const uint32_t sampleRate96000 = 96000;

/***************************************
23.98 fps (NTSC) to 24 fps (NTSC)
95904 (95904.0959)
(96000 to 95904; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate96000Pullup2398FpsTo24Fps = 95904;

/***************************************
23.98 fps (NTSC) to 25 fps (PAL)
92068 (92067.93207)
(96000 to 92068; 4.27076% Pullup)
***************************************/

constexpr const uint32_t sampleRate96000Pullup2398FpsTo25Fps = 92068;

/***************************************
23.98 fps (NTSC) to 29.97 fps (NTSC)
76800 (76800.0)
(96000 to 76800; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate96000Pullup2398FpsTo2997Fps = 76800;

/***************************************
23.98 fps (NTSC) to 30 fps (NTSC)
76723 (76723.27672)
(96000 to 76723; 25.12545% Pullup)
***************************************/

constexpr const uint32_t sampleRate96000Pullup2398FpsTo30Fps = 76723;

/***************************************
24 fps (NTSC) to 23.98 fps (NTSC)
96096 (96096.0)
(96000 to 96096; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate96000Pulldown24FpsTo2398Fps = 96096;

/***************************************
24 fps (NTSC) to 25 fps (PAL)
92160 (92160.0)
(96000 to 92160; 4.16667% Pullup)
***************************************/

constexpr const uint32_t sampleRate96000Pullup24FpsTo25Fps = 92160;

/***************************************
24 fps (NTSC) to 29.97 fps (NTSC)
76877 (76876.8)
(96000 to 76877; 24.8748% Pullup)
***************************************/

constexpr const uint32_t sampleRate96000Pullup24FpsTo2997Fps = 76877;

/***************************************
24 fps (NTSC) to 30 fps (NTSC)
76800 (76800.0)
(96000 to 76800; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate96000Pullup24FpsTo30Fps = 76800;

/***************************************
25 fps (PAL) to 23.98 fps (NTSC)
100100 (100100.0)
(96000 to 100100; 4.27083% Pulldown)
***************************************/

constexpr const uint32_t sampleRate96000Pulldown25FpsTo2398Fps = 100100;

/***************************************
25 fps (PAL) to 24 fps (NTSC)
100000 (100000.0)
(96000 to 100000; 4.16667% Pulldown)
***************************************/

constexpr const uint32_t sampleRate96000Pulldown25FpsTo24Fps = 100000;

/***************************************
25 fps (PAL) to 29.97 fps (NTSC)
80080 (80080.0)
(96000 to 80080; 19.88012% Pullup)
***************************************/

constexpr const uint32_t sampleRate96000Pullup25FpsTo2997Fps = 80080;

/***************************************
25 fps (PAL) to 30 fps (NTSC)
80000 (80000.0)
(96000 to 80000; 20.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate96000Pullup25FpsTo30Fps = 80000;

/***************************************
29.97 fps (NTSC) to 23.98 fps (NTSC)
120000 (120000.0)
(96000 to 120000; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate96000Pulldown2997FpsTo2398Fps = 120000;

/***************************************
29.97 fps (NTSC) to 24 fps (NTSC)
119880 (119880.11988)
(96000 to 119880; 24.875% Pulldown)
***************************************/

constexpr const uint32_t sampleRate96000Pulldown2997FpsTo24Fps = 119880;

/***************************************
29.97 fps (NTSC) to 25 fps (PAL)
115085 (115084.91508)
(96000 to 115085; 19.88021% Pulldown)
***************************************/

constexpr const uint32_t sampleRate96000Pulldown2997FpsTo25Fps = 115085;

/***************************************
29.97 fps (NTSC) to 30 fps (NTSC)
95904 (95904.0959)
(96000 to 95904; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate96000Pullup2997FpsTo30Fps = 95904;

/***************************************
30 fps (NTSC) to 23.98 fps (NTSC)
120120 (120120.0)
(96000 to 120120; 25.125% Pulldown)
***************************************/

constexpr const uint32_t sampleRate96000Pulldown30FpsTo2398Fps = 120120;

/***************************************
30 fps (NTSC) to 24 fps (NTSC)
120000 (120000.0)
(96000 to 120000; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate96000Pulldown30FpsTo24Fps = 120000;

/***************************************
30 fps (NTSC) to 25 fps (PAL)
115200 (115200.0)
(96000 to 115200; 20.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate96000Pulldown30FpsTo25Fps = 115200;

/***************************************
30 fps (NTSC) to 29.97 fps (NTSC)
96096 (96096.0)
(96000 to 96096; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate96000Pulldown30FpsTo2997Fps = 96096;

/* ------------------------------ 176400 Hz ------------------------------ */

constexpr const uint32_t sampleRate176400 = 176400;

/***************************************
23.98 fps (NTSC) to 24 fps (NTSC)
176224 (176223.77622)
(176400 to 176224; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate176400Pullup2398FpsTo24Fps = 176224;

/***************************************
23.98 fps (NTSC) to 25 fps (PAL)
169175 (169174.82517)
(176400 to 169175; 4.27073% Pullup)
***************************************/

constexpr const uint32_t sampleRate176400Pullup2398FpsTo25Fps = 169175;

/***************************************
23.98 fps (NTSC) to 29.97 fps (NTSC)
141120 (141120.0)
(176400 to 141120; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate176400Pullup2398FpsTo2997Fps = 141120;

/***************************************
23.98 fps (NTSC) to 30 fps (NTSC)
140979 (140979.02098)
(176400 to 140979; 25.12502% Pullup)
***************************************/

constexpr const uint32_t sampleRate176400Pullup2398FpsTo30Fps = 140979;

/***************************************
24 fps (NTSC) to 23.98 fps (NTSC)
176576 (176576.4)
(176400 to 176576; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate176400Pulldown24FpsTo2398Fps = 176576;

/***************************************
24 fps (NTSC) to 25 fps (PAL)
169344 (169344.0)
(176400 to 169344; 4.16667% Pullup)
***************************************/

constexpr const uint32_t sampleRate176400Pullup24FpsTo25Fps = 169344;

/***************************************
24 fps (NTSC) to 29.97 fps (NTSC)
141261 (141261.12)
(176400 to 141261; 24.87523% Pullup)
***************************************/

constexpr const uint32_t sampleRate176400Pullup24FpsTo2997Fps = 141261;

/***************************************
24 fps (NTSC) to 30 fps (NTSC)
141120 (141120.0)
(176400 to 141120; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate176400Pullup24FpsTo30Fps = 141120;

/***************************************
25 fps (PAL) to 23.98 fps (NTSC)
183934 (183933.75)
(176400 to 183934; 4.27098% Pulldown)
***************************************/

constexpr const uint32_t sampleRate176400Pulldown25FpsTo2398Fps = 183934;

/***************************************
25 fps (PAL) to 24 fps (NTSC)
183750 (183750.0)
(176400 to 183750; 4.16667% Pulldown)
***************************************/

constexpr const uint32_t sampleRate176400Pulldown25FpsTo24Fps = 183750;

/***************************************
25 fps (PAL) to 29.97 fps (NTSC)
147147 (147147.0)
(176400 to 147147; 19.88012% Pullup)
***************************************/

constexpr const uint32_t sampleRate176400Pullup25FpsTo2997Fps = 147147;

/***************************************
25 fps (PAL) to 30 fps (NTSC)
147000 (147000.0)
(176400 to 147000; 20.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate176400Pullup25FpsTo30Fps = 147000;

/***************************************
29.97 fps (NTSC) to 23.98 fps (NTSC)
220500 (220500.0)
(176400 to 220500; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate176400Pulldown2997FpsTo2398Fps = 220500;

/***************************************
29.97 fps (NTSC) to 24 fps (NTSC)
220280 (220279.72028)
(176400 to 220280; 24.87528% Pulldown)
***************************************/

constexpr const uint32_t sampleRate176400Pulldown2997FpsTo24Fps = 220280;

/***************************************
29.97 fps (NTSC) to 25 fps (PAL)
211469 (211468.53147)
(176400 to 211469; 19.88039% Pulldown)
***************************************/

constexpr const uint32_t sampleRate176400Pulldown2997FpsTo25Fps = 211469;

/***************************************
29.97 fps (NTSC) to 30 fps (NTSC)
176224 (176223.77622)
(176400 to 176224; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate176400Pullup2997FpsTo30Fps = 176224;

/***************************************
30 fps (NTSC) to 23.98 fps (NTSC)
220720 (220720.5)
(176400 to 220720; 25.12472% Pulldown)
***************************************/

constexpr const uint32_t sampleRate176400Pulldown30FpsTo2398Fps = 220720;

/***************************************
30 fps (NTSC) to 24 fps (NTSC)
220500 (220500.0)
(176400 to 220500; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate176400Pulldown30FpsTo24Fps = 220500;

/***************************************
30 fps (NTSC) to 25 fps (PAL)
211680 (211680.0)
(176400 to 211680; 20.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate176400Pulldown30FpsTo25Fps = 211680;

/***************************************
30 fps (NTSC) to 29.97 fps (NTSC)
176576 (176576.4)
(176400 to 176576; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate176400Pulldown30FpsTo2997Fps = 176576;

/* ------------------------------ 192000 Hz ------------------------------ */

constexpr const uint32_t sampleRate192000 = 192000;

/***************************************
23.98 fps (NTSC) to 24 fps (NTSC)
191808 (191808.19181)
(192000 to 191808; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate192000Pullup2398FpsTo24Fps = 191808;

/***************************************
23.98 fps (NTSC) to 25 fps (PAL)
184136 (184135.86414)
(192000 to 184136; 4.27076% Pullup)
***************************************/

constexpr const uint32_t sampleRate192000Pullup2398FpsTo25Fps = 184136;

/***************************************
23.98 fps (NTSC) to 29.97 fps (NTSC)
153600 (153600.0)
(192000 to 153600; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate192000Pullup2398FpsTo2997Fps = 153600;

/***************************************
23.98 fps (NTSC) to 30 fps (NTSC)
153447 (153446.55345)
(192000 to 153447; 25.12464% Pullup)
***************************************/

constexpr const uint32_t sampleRate192000Pullup2398FpsTo30Fps = 153447;

/***************************************
24 fps (NTSC) to 23.98 fps (NTSC)
192192 (192192.0)
(192000 to 192192; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate192000Pulldown24FpsTo2398Fps = 192192;

/***************************************
24 fps (NTSC) to 25 fps (PAL)
184320 (184320.0)
(192000 to 184320; 4.16667% Pullup)
***************************************/

constexpr const uint32_t sampleRate192000Pullup24FpsTo25Fps = 184320;

/***************************************
24 fps (NTSC) to 29.97 fps (NTSC)
153754 (153753.6)
(192000 to 153754; 24.8748% Pullup)
***************************************/

constexpr const uint32_t sampleRate192000Pullup24FpsTo2997Fps = 153754;

/***************************************
24 fps (NTSC) to 30 fps (NTSC)
153600 (153600.0)
(192000 to 153600; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate192000Pullup24FpsTo30Fps = 153600;

/***************************************
25 fps (PAL) to 23.98 fps (NTSC)
200200 (200200.0)
(192000 to 200200; 4.27083% Pulldown)
***************************************/

constexpr const uint32_t sampleRate192000Pulldown25FpsTo2398Fps = 200200;

/***************************************
25 fps (PAL) to 24 fps (NTSC)
200000 (200000.0)
(192000 to 200000; 4.16667% Pulldown)
***************************************/

constexpr const uint32_t sampleRate192000Pulldown25FpsTo24Fps = 200000;

/***************************************
25 fps (PAL) to 29.97 fps (NTSC)
160160 (160160.0)
(192000 to 160160; 19.88012% Pullup)
***************************************/

constexpr const uint32_t sampleRate192000Pullup25FpsTo2997Fps = 160160;

/***************************************
25 fps (PAL) to 30 fps (NTSC)
160000 (160000.0)
(192000 to 160000; 20.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate192000Pullup25FpsTo30Fps = 160000;

/***************************************
29.97 fps (NTSC) to 23.98 fps (NTSC)
240000 (240000.0)
(192000 to 240000; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate192000Pulldown2997FpsTo2398Fps = 240000;

/***************************************
29.97 fps (NTSC) to 24 fps (NTSC)
239760 (239760.23976)
(192000 to 239760; 24.875% Pulldown)
***************************************/

constexpr const uint32_t sampleRate192000Pulldown2997FpsTo24Fps = 239760;

/***************************************
29.97 fps (NTSC) to 25 fps (PAL)
230170 (230169.83017)
(192000 to 230170; 19.88021% Pulldown)
***************************************/

constexpr const uint32_t sampleRate192000Pulldown2997FpsTo25Fps = 230170;

/***************************************
29.97 fps (NTSC) to 30 fps (NTSC)
191808 (191808.19181)
(192000 to 191808; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate192000Pullup2997FpsTo30Fps = 191808;

/***************************************
30 fps (NTSC) to 23.98 fps (NTSC)
240240 (240240.0)
(192000 to 240240; 25.125% Pulldown)
***************************************/

constexpr const uint32_t sampleRate192000Pulldown30FpsTo2398Fps = 240240;

/***************************************
30 fps (NTSC) to 24 fps (NTSC)
240000 (240000.0)
(192000 to 240000; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate192000Pulldown30FpsTo24Fps = 240000;

/***************************************
30 fps (NTSC) to 25 fps (PAL)
230400 (230400.0)
(192000 to 230400; 20.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate192000Pulldown30FpsTo25Fps = 230400;

/***************************************
30 fps (NTSC) to 29.97 fps (NTSC)
192192 (192192.0)
(192000 to 192192; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate192000Pulldown30FpsTo2997Fps = 192192;

/* ------------------------------ 384000 Hz ------------------------------ */

constexpr const uint32_t sampleRate384000 = 384000;

/***************************************
23.98 fps (NTSC) to 24 fps (NTSC)
383616 (383616.38362)
(384000 to 383616; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate384000Pullup2398FpsTo24Fps = 383616;

/***************************************
23.98 fps (NTSC) to 25 fps (PAL)
368272 (368271.72827)
(384000 to 368272; 4.27076% Pullup)
***************************************/

constexpr const uint32_t sampleRate384000Pullup2398FpsTo25Fps = 368272;

/***************************************
23.98 fps (NTSC) to 29.97 fps (NTSC)
307200 (307200.0)
(384000 to 307200; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate384000Pullup2398FpsTo2997Fps = 307200;

/***************************************
23.98 fps (NTSC) to 30 fps (NTSC)
306893 (306893.10689)
(384000 to 306893; 25.12504% Pullup)
***************************************/

constexpr const uint32_t sampleRate384000Pullup2398FpsTo30Fps = 306893;

/***************************************
24 fps (NTSC) to 23.98 fps (NTSC)
384384 (384384.0)
(384000 to 384384; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate384000Pulldown24FpsTo2398Fps = 384384;

/***************************************
24 fps (NTSC) to 25 fps (PAL)
368640 (368640.0)
(384000 to 368640; 4.16667% Pullup)
***************************************/

constexpr const uint32_t sampleRate384000Pullup24FpsTo25Fps = 368640;

/***************************************
24 fps (NTSC) to 29.97 fps (NTSC)
307507 (307507.2)
(384000 to 307507; 24.87521% Pullup)
***************************************/

constexpr const uint32_t sampleRate384000Pullup24FpsTo2997Fps = 307507;

/***************************************
24 fps (NTSC) to 30 fps (NTSC)
307200 (307200.0)
(384000 to 307200; 25.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate384000Pullup24FpsTo30Fps = 307200;

/***************************************
25 fps (PAL) to 23.98 fps (NTSC)
400400 (400400.0)
(384000 to 400400; 4.27083% Pulldown)
***************************************/

constexpr const uint32_t sampleRate384000Pulldown25FpsTo2398Fps = 400400;

/***************************************
25 fps (PAL) to 24 fps (NTSC)
400000 (400000.0)
(384000 to 400000; 4.16667% Pulldown)
***************************************/

constexpr const uint32_t sampleRate384000Pulldown25FpsTo24Fps = 400000;

/***************************************
25 fps (PAL) to 29.97 fps (NTSC)
320320 (320320.0)
(384000 to 320320; 19.88012% Pullup)
***************************************/

constexpr const uint32_t sampleRate384000Pullup25FpsTo2997Fps = 320320;

/***************************************
25 fps (PAL) to 30 fps (NTSC)
320000 (320000.0)
(384000 to 320000; 20.0% Pullup)
***************************************/

constexpr const uint32_t sampleRate384000Pullup25FpsTo30Fps = 320000;

/***************************************
29.97 fps (NTSC) to 23.98 fps (NTSC)
480000 (480000.0)
(384000 to 480000; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate384000Pulldown2997FpsTo2398Fps = 480000;

/***************************************
29.97 fps (NTSC) to 24 fps (NTSC)
479520 (479520.47952)
(384000 to 479520; 24.875% Pulldown)
***************************************/

constexpr const uint32_t sampleRate384000Pulldown2997FpsTo24Fps = 479520;

/***************************************
29.97 fps (NTSC) to 25 fps (PAL)
460340 (460339.66034)
(384000 to 460340; 19.88021% Pulldown)
***************************************/

constexpr const uint32_t sampleRate384000Pulldown2997FpsTo25Fps = 460340;

/***************************************
29.97 fps (NTSC) to 30 fps (NTSC)
383616 (383616.38362)
(384000 to 383616; 0.1% Pullup)
***************************************/

constexpr const uint32_t sampleRate384000Pullup2997FpsTo30Fps = 383616;

/***************************************
30 fps (NTSC) to 23.98 fps (NTSC)
480480 (480480.0)
(384000 to 480480; 25.125% Pulldown)
***************************************/

constexpr const uint32_t sampleRate384000Pulldown30FpsTo2398Fps = 480480;

/***************************************
30 fps (NTSC) to 24 fps (NTSC)
480000 (480000.0)
(384000 to 480000; 25.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate384000Pulldown30FpsTo24Fps = 480000;

/***************************************
30 fps (NTSC) to 25 fps (PAL)
460800 (460800.0)
(384000 to 460800; 20.0% Pulldown)
***************************************/

constexpr const uint32_t sampleRate384000Pulldown30FpsTo25Fps = 460800;

/***************************************
30 fps (NTSC) to 29.97 fps (NTSC)
384384 (384384.0)
(384000 to 384384; 0.1% Pulldown)
***************************************/

constexpr const uint32_t sampleRate384000Pulldown30FpsTo2997Fps = 384384;

#endif
