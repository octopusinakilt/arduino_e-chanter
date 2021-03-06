/* for 18-point low A 444Hz */

const int drone_len = 72;
volatile uint16_t  drone_idx = 0;
unsigned char drone_sw [72] =
{ 49, 60, 70, 70, 59, 53, 59, 66, 67, 59, 48, 41, 44, 56, 64, 56,
  44, 41, 44, 45, 38, 31, 34, 40, 43, 47, 50, 52, 51, 46, 44, 51, 56, 55, 48, 43,
  45, 53, 63, 65, 57, 51, 55, 59, 62, 62, 54, 42, 37, 44, 51, 46, 35, 34, 41, 48,
  49, 47, 48, 49, 49, 52, 57, 56, 47, 36, 35, 46, 55, 56, 50, 45 };

const int tone_lg_len = 144;
volatile uint16_t tone_lg_idx = 0;
const unsigned char tone_lg_sw [144] =
{ 55, 73, 58, 25, 20, 40, 66, 64, 25, 17, 56, 69, 50, 46, 54, 57,
  59, 60, 59, 50, 46, 65, 72, 42, 19, 26, 52, 71, 49, 14, 32, 68, 62, 45, 50, 56,
  58, 59, 60, 57, 46, 52, 72, 62, 29, 19, 36, 63, 67, 31, 15, 50, 70, 52, 45, 53,
  57, 59, 60, 60, 52, 45, 61, 73, 47, 20, 24, 47, 70, 54, 17, 26, 65, 65, 46, 48,
  56, 58, 59, 60, 58, 47, 49, 70, 66, 33, 18, 33, 59, 69, 36, 13, 44, 71, 55, 45,
  52, 57, 58, 60, 60, 53, 45, 58, 74, 53, 23, 22, 44, 68, 59, 21, 21, 61, 67, 48,
  47, 55, 58, 59, 60, 59, 48, 47, 68, 69, 37, 18, 29, 56, 70, 43, 13, 38, 70, 58,
  45, 51, 57, 58, 59, 60, 55, 45 };

const int tone_la_len = 18;
volatile uint16_t tone_la_idx = 0;
const unsigned char tone_la_sw [18] =
{ 56, 91, 56, 5, 18, 62, 67, 53, 56, 44, 27, 57, 77, 36, 26, 71, 67, 31 };

const int tone_b_len = 16;
volatile uint16_t tone_b_idx = 0;
const unsigned char tone_b_sw [16] =
{ 52, 88, 57, 20, 26, 51, 62, 51, 43, 61, 65, 35, 39, 73, 55, 21 };

const int tone_c_len = 72;
volatile uint16_t tone_c_idx = 0;
const unsigned char tone_c_sw [72] =
{ 52, 75, 31, 16, 66, 59, 34, 51, 61, 61, 50, 39, 57, 53, 42, 72, 54, 10,
  47, 71, 39, 42, 60, 61, 57, 40, 48, 60, 41, 59, 71, 20, 25, 71, 52, 35, 55, 61,
  60, 47, 41, 60, 48, 46, 75, 42, 11, 57, 66, 35, 46, 61, 61, 54, 39, 53, 57, 40,
  66, 64, 13, 35, 73, 45, 38, 58, 61, 59, 43, 44, 61, 44 };

const int tone_d_len = 27;
volatile uint16_t tone_d_idx = 0;
const unsigned char tone_d_sw [27] =
{ 40, 85, 74, 27, 27, 55, 56, 46, 53, 60, 63, 55, 27, 21, 65, 89, 48, 19,
  42, 60, 50, 48, 57, 62, 62, 42, 17 };

const int tone_e_len = 12;
volatile uint16_t tone_e_idx = 0;
const unsigned char tone_e_sw [12] =
{ 69, 64, 13, 33, 66, 55, 56, 45, 34, 65, 61, 37 };

const int tone_f_len = 54;
volatile uint16_t tone_f_idx = 0;
const unsigned char tone_f_sw [54] =
{ 56, 79, 40, 33, 71, 63, 29, 62, 81, 22, 10, 67, 74, 34, 39, 75, 55, 30,
  72, 73, 11, 19, 75, 66, 29, 47, 76, 46, 35, 80, 62, 4, 31, 80, 57, 28, 56, 75,
  38, 42, 84, 48, 2, 44, 81, 48, 29, 64, 70, 32, 52, 85, 35, 4 };

const int tone_hg_len = 72;
volatile uint16_t tone_hg_idx = 0;
const unsigned char tone_hg_sw [72] =
{ 48, 65, 60, 40, 39, 45, 46, 53, 59, 48, 44, 61, 64, 45, 37, 44,
  45, 50, 59, 52, 43, 56, 66, 51, 37, 42, 46, 48, 57, 56, 43, 50, 66, 57, 39, 40,
  46, 46, 55, 58, 46, 46, 63, 62, 42, 38, 45, 46, 51, 59, 50, 43, 58, 65, 48, 37,
  43, 46, 49, 58, 54, 43, 53, 66, 54, 38, 41, 46, 47, 56, 57, 45 };

const int tone_ha_len = 9;
volatile uint16_t tone_ha_idx = 0;
const unsigned char tone_ha_sw [9] =
{ 49, 62, 54, 38, 46, 52, 49, 52, 49 };

