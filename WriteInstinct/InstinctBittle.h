#define BITTLE
#define NUM_SKILLS 32
#define I2C_EEPROM

const char bdF[] PROGMEM = { 
15, 0, 0, 1,
  56,  56,  72,  72, -21, -21, -35, -35,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   5,   5,   9,   9,
  50,  50,  56,  56,  -4,  -4,  -1,  -1,
  53,  53,  60,  60, -12, -12,  -9,  -9,
  55,  55,  64,  64, -19, -19, -17, -17,
  58,  58,  67,  67, -26, -26, -25, -25,
  60,  60,  70,  70, -33, -33, -32, -32,
  61,  61,  72,  72, -35, -35, -35, -35,
  61,  61,  72,  72, -35, -35, -35, -35,
  61,  61,  72,  72, -35, -35, -35, -35,
};
const char bk[] PROGMEM = { 
35, 0, 0, 1,
  46,  54,  46,  54,  -5, -23,  -5, -23,
  43,  58,  43,  58,  -5, -24,  -5, -24,
  40,  63,  40,  63,  -4, -24,  -4, -24,
  37,  67,  37,  67,  -3, -23,  -3, -23,
  34,  71,  34,  71,  -2, -22,  -2, -22,
  31,  74,  31,  74,  -1, -21,  -1, -21,
  28,  75,  28,  75,   1, -16,   1, -16,
  24,  72,  24,  72,   3,  -9,   3,  -9,
  21,  67,  21,  67,   5,  -1,   5,  -1,
  18,  64,  18,  64,   7,   0,   7,   0,
  19,  63,  19,  63,   1,  -2,   1,  -2,
  23,  61,  23,  61,  -7,  -3,  -7,  -3,
  29,  58,  29,  58, -14,  -4, -14,  -4,
  34,  56,  34,  56, -18,  -4, -18,  -4,
  38,  54,  38,  54, -19,  -5, -19,  -5,
  43,  52,  43,  52, -21,  -5, -21,  -5,
  48,  49,  48,  49, -22,  -5, -22,  -5,
  53,  46,  53,  46, -23,  -5, -23,  -5,
  57,  43,  57,  43, -24,  -5, -24,  -5,
  62,  40,  62,  40, -24,  -4, -24,  -4,
  66,  37,  66,  37, -23,  -3, -23,  -3,
  70,  34,  70,  34, -22,  -2, -22,  -2,
  72,  31,  72,  31, -22,  -1, -22,  -1,
  74,  28,  74,  28, -18,   1, -18,   1,
  74,  24,  74,  24, -12,   3, -12,   3,
  69,  21,  69,  21,  -4,   5,  -4,   5,
  65,  18,  65,  18,   0,   7,   0,   7,
  63,  19,  63,  19,  -1,   1,  -1,   1,
  61,  23,  61,  23,  -3,  -7,  -3,  -7,
  59,  29,  59,  29,  -4, -14,  -4, -14,
  57,  34,  57,  34,  -4, -18,  -4, -18,
  55,  38,  55,  38,  -5, -19,  -5, -19,
  52,  43,  52,  43,  -5, -21,  -5, -21,
  50,  48,  50,  48,  -5, -22,  -5, -22,
  47,  53,  47,  53,  -5, -23,  -5, -23,
};
const char bkL[] PROGMEM = { 
26, 0, 0, 1,
  51,  58,  51,  53,  -7, -24,  -5, -13,
  51,  65,  47,  55,  -7, -23,  -5, -13,
  49,  70,  43,  57,  -7, -22,  -5, -13,
  48,  74,  39,  58,  -7, -21,  -4, -13,
  47,  77,  35,  60,  -7, -16,  -3, -13,
  45,  76,  31,  60,  -6, -10,  -1, -11,
  44,  69,  26,  58,  -6,   2,   2,  -6,
  42,  66,  22,  58,  -6,   2,   2,  -6,
  44,  64,  28,  57,  -9,   0,  -8,  -6,
  47,  62,  34,  56, -13,  -2, -16,  -6,
  48,  59,  41,  55, -13,  -4, -20,  -6,
  50,  56,  47,  53, -13,  -4, -22,  -7,
  51,  53,  53,  52, -13,  -5, -23,  -7,
  53,  50,  58,  51, -13,  -5, -24,  -7,
  55,  46,  65,  50, -13,  -5, -23,  -7,
  57,  42,  70,  49, -13,  -4, -22,  -7,
  58,  38,  74,  48, -13,  -3, -21,  -7,
  60,  34,  77,  46, -13,  -2, -16,  -6,
  60,  30,  76,  45, -11,  -1, -10,  -6,
  58,  25,  69,  44,  -6,   2,   2,  -6,
  58,  23,  66,  42,  -6,  -1,   2,  -8,
  57,  29,  64,  45,  -6, -10,   0, -11,
  56,  37,  62,  48,  -6, -19,  -2, -13,
  55,  42,  59,  48,  -6, -21,  -4, -13,
  53,  48,  56,  50,  -7, -22,  -4, -13,
  52,  54,  53,  52,  -7, -23,  -5, -13,
};
const char bkR[] PROGMEM = { 
26, 0, 0, 1,
  51,  53,  51,  58,  -5, -13,  -7, -24,
  47,  55,  51,  65,  -5, -13,  -7, -23,
  43,  57,  49,  70,  -5, -13,  -7, -22,
  39,  58,  48,  74,  -4, -13,  -7, -21,
  35,  60,  47,  77,  -3, -13,  -7, -16,
  31,  60,  45,  76,  -1, -11,  -6, -10,
  26,  58,  44,  69,   2,  -6,  -6,   2,
  22,  58,  42,  66,   2,  -6,  -6,   2,
  28,  57,  44,  64,  -8,  -6,  -9,   0,
  34,  56,  47,  62, -16,  -6, -13,  -2,
  41,  55,  48,  59, -20,  -6, -13,  -4,
  47,  53,  50,  56, -22,  -7, -13,  -4,
  53,  52,  51,  53, -23,  -7, -13,  -5,
  58,  51,  53,  50, -24,  -7, -13,  -5,
  65,  50,  55,  46, -23,  -7, -13,  -5,
  70,  49,  57,  42, -22,  -7, -13,  -4,
  74,  48,  58,  38, -21,  -7, -13,  -3,
  77,  46,  60,  34, -16,  -6, -13,  -2,
  76,  45,  60,  30, -10,  -6, -11,  -1,
  69,  44,  58,  25,   2,  -6,  -6,   2,
  66,  42,  58,  23,   2,  -8,  -6,  -1,
  64,  45,  57,  29,   0, -11,  -6, -10,
  62,  48,  56,  37,  -2, -13,  -6, -19,
  59,  48,  55,  42,  -4, -13,  -6, -21,
  56,  50,  53,  48,  -4, -13,  -7, -22,
  53,  52,  52,  54,  -5, -13,  -7, -23,
};
const char crF[] PROGMEM = { 
36, 0, -3, 1,
  61,  68,  54,  61, -26, -39, -13, -26,
  66,  61,  58,  55, -26, -39, -13, -26,
  70,  54,  61,  49, -26, -37, -12, -25,
  73,  46,  65,  43, -24, -35, -11, -23,
  77,  39,  67,  36, -23, -33, -10, -21,
  80,  33,  70,  31, -21, -30,  -8, -19,
  83,  26,  72,  25, -19, -26,  -6, -15,
  85,  19,  74,  18, -16, -20,  -3,  -9,
  86,  16,  76,  14, -13, -12,  -1,   0,
  87,  19,  76,  16,  -9, -11,   3,   2,
  93,  24,  82,  21, -16, -14,  -5,  -2,
  96,  29,  85,  26, -24, -17, -12,  -5,
  95,  34,  84,  30, -28, -20, -17,  -7,
  92,  39,  81,  35, -31, -22, -20,  -9,
  89,  44,  79,  39, -34, -24, -22, -11,
  84,  49,  74,  44, -36, -25, -24, -12,
  79,  54,  70,  48, -38, -26, -26, -13,
  72,  59,  65,  52, -39, -26, -26, -13,
  65,  64,  59,  56, -39, -26, -26, -13,
  60,  68,  54,  60, -38, -26, -26, -13,
  52,  72,  48,  62, -37, -25, -25, -12,
  45,  75,  41,  66, -35, -24, -23, -11,
  37,  79,  35,  69, -32, -22, -20,  -9,
  30,  81,  29,  71, -29, -20, -17,  -7,
  24,  83,  24,  73, -25, -17, -14,  -4,
  19,  85,  18,  75, -19, -14,  -7,  -2,
  16,  87,  14,  76, -10, -11,   1,   1,
  20,  90,  17,  79, -12, -12,   1,   0,
  25,  96,  22,  85, -15, -20,  -2,  -9,
  30,  97,  26,  85, -18, -26,  -5, -15,
  35,  94,  31,  83, -20, -30,  -8, -18,
  40,  91,  36,  80, -23, -33, -10, -21,
  45,  86,  40,  76, -24, -36, -11, -24,
  51,  81,  45,  72, -25, -37, -12, -25,
  55,  76,  49,  68, -26, -38, -13, -26,
  60,  70,  53,  62, -26, -39, -13, -26,
};
const char crL[] PROGMEM = { 
29, 0, -3, 1,
  62,  69,  54,  57, -28, -40, -13, -18,
  63,  60,  59,  55, -28, -40, -13, -18,
  64,  51,  62,  53, -28, -37, -12, -18,
  65,  42,  67,  52, -28, -34, -10, -17,
  67,  33,  70,  50, -27, -30,  -8, -17,
  69,  23,  73,  49, -27, -22,  -5, -17,
  70,  18,  75,  46, -27, -14,  -2, -15,
  72,  17,  76,  45, -27,  -7,   2, -14,
  73,  24,  82,  46, -29, -13,  -5, -14,
  72,  29,  85,  48, -30, -17, -14, -14,
  72,  36,  83,  49, -30, -20, -18, -14,
  70,  42,  79,  51, -31, -22, -22, -15,
  68,  49,  74,  52, -31, -25, -24, -15,
  66,  55,  69,  53, -31, -26, -26, -15,
  65,  61,  62,  55, -31, -26, -26, -15,
  62,  67,  55,  56, -31, -26, -26, -15,
  61,  72,  48,  57, -31, -25, -25, -15,
  59,  77,  40,  58, -31, -25, -23, -15,
  57,  81,  32,  60, -31, -22, -19, -14,
  55,  84,  25,  61, -30, -19, -15, -15,
  51,  87,  18,  61, -28, -16,  -7, -14,
  51,  88,  15,  63, -25, -11,   2, -14,
  52,  96,  20,  63, -27, -19,  -1, -14,
  54,  98,  26,  64, -27, -27,  -5, -17,
  55,  97,  31,  63, -27, -32,  -8, -17,
  56,  93,  37,  61, -27, -36, -10, -17,
  58,  87,  42,  60, -28, -39, -12, -17,
  60,  79,  48,  59, -28, -40, -13, -18,
  61,  70,  53,  58, -28, -40, -13, -18,
};
const char crR[] PROGMEM = { 
29, 0, -3, 1,
  61,  64,  55,  61, -26, -31, -15, -26,
  67,  62,  56,  54, -26, -31, -15, -26,
  72,  60,  57,  47, -25, -31, -15, -24,
  77,  59,  58,  39, -25, -31, -15, -22,
  81,  56,  60,  31, -22, -30, -14, -19,
  84,  54,  61,  24, -19, -30, -15, -14,
  87,  51,  61,  16, -16, -27, -14,  -5,
  88,  51,  63,  15, -11, -25, -14,   2,
  96,  52,  63,  21, -19, -27, -14,  -2,
  98,  54,  64,  26, -27, -27, -17,  -5,
  97,  55,  63,  32, -32, -27, -17,  -8,
  93,  57,  61,  38, -36, -27, -17, -10,
  87,  58,  60,  44, -39, -28, -17, -12,
  79,  60,  59,  49, -40, -28, -18, -13,
  70,  62,  58,  54, -40, -28, -18, -13,
  62,  63,  55,  59, -40, -28, -18, -13,
  52,  64,  54,  62, -37, -28, -18, -12,
  43,  65,  52,  67, -35, -28, -17, -10,
  34,  67,  51,  70, -31, -27, -17,  -8,
  26,  69,  49,  73, -25, -27, -17,  -5,
  18,  70,  46,  75, -15, -27, -15,  -2,
  17,  72,  45,  76,  -7, -27, -14,   2,
  22,  73,  46,  82, -12, -29, -14,  -5,
  28,  72,  48,  85, -16, -30, -14, -14,
  35,  72,  49,  83, -19, -30, -14, -18,
  41,  70,  50,  79, -22, -31, -14, -22,
  48,  68,  52,  74, -25, -31, -15, -24,
  54,  66,  53,  69, -26, -31, -15, -26,
  60,  65,  54,  62, -26, -31, -15, -26,
};
const char rnF[] PROGMEM = { 
21, 0, 0, 1,
  51,  63,  58,  72,  -2, -20,   5, -13,
  56,  52,  62,  65,   1, -20,  10, -17,
  61,  41,  65,  55,   5, -18,  15, -18,
  64,  32,  65,  47,  10, -14,  24, -17,
  67,  25,  65,  40,  16,  -8,  33, -12,
  70,  19,  65,  34,  17,   2,  40,  -3,
  76,  17,  72,  30,   8,  10,  27,   5,
  80,  25,  79,  37,  -2,   5,  15,   2,
  80,  34,  81,  44, -10,   1,   6,   1,
  75,  42,  79,  51, -16,  -2,  -4,   2,
  68,  49,  76,  57, -19,  -2, -10,   3,
  58,  54,  69,  61, -21,   1, -15,   8,
  47,  59,  60,  64, -20,   3, -17,  13,
  35,  63,  50,  66, -16,   8, -17,  20,
  28,  66,  43,  66, -11,  14, -14,  29,
  21,  67,  36,  62,  -2,  20,  -8,  43,
  18,  73,  30,  70,   7,  12,   2,  32,
  21,  79,  33,  77,   8,   0,   4,  19,
  29,  80,  41,  80,   2,  -7,   2,  10,
  38,  77,  48,  80,  -1, -14,   2,   0,
  45,  70,  54,  77,  -2, -19,   2,  -8,
};
const char rnL[] PROGMEM = { 
19, 0, 0, 1,
  49,  65,  57,  66,  -4, -20,   2,  -6,
  51,  49,  61,  62,  -4, -20,   5,  -8,
  53,  31,  65,  59,  -3, -14,  11, -10,
  55,  17,  67,  53,  -3,  -4,  17,  -9,
  57,   7,  67,  50,  -2,  13,  27,  -5,
  58,  12,  64,  50,   0,  14,  40,  -4,
  60,  21,  72,  52,  -3,   8,  28,  -3,
  61,  29,  81,  54,  -7,   2,  13,  -3,
  60,  38,  84,  56,  -7,  -1,   3,  -3,
  57,  45,  79,  58, -10,  -2, -11,  -2,
  52,  51,  70,  60, -10,   0, -19,  -1,
  46,  57,  54,  61, -10,   2, -21,   0,
  42,  61,  39,  63,  -9,   5, -17,   1,
  38,  65,  26,  64,  -5,  11,  -5,   2,
  36,  67,  23,  66,  -2,  17,   6,   4,
  39,  71,  32,  67,  -3,  15,   1,   5,
  41,  78,  39,  68,  -3,   3,  -1,   1,
  44,  80,  47,  68,  -3,  -7,  -2,  -1,
  47,  75,  54,  68,  -4, -16,  -1,  -4,
};
const char rnR[] PROGMEM = { 
19, 0, 0, 1,
  47,  55,  59,  76,   0, -10,  -2, -15,
  54,  50,  60,  64,   0, -10,  -1, -20,
  59,  45,  62,  48,   3, -10,   0, -20,
  63,  41,  64,  33,   7,  -7,   2, -13,
  65,  37,  65,  22,  13,  -3,   3,   2,
  65,  37,  65,  26,  21,  -2,   6,   4,
  73,  40,  67,  35,  12,  -3,   4,   0,
  80,  42,  69,  42,  -2,  -3,  -1,  -2,
  80,  45,  68,  49, -10,  -4,  -1,  -2,
  70,  48,  67,  56, -19,  -4,  -5,  -1,
  56,  50,  64,  60, -21,  -4,  -8,   4,
  37,  52,  59,  63, -16,  -3,  -9,   9,
  21,  55,  56,  66,  -8,  -3, -10,  14,
  10,  56,  51,  67,   6,  -3,  -7,  23,
   8,  58,  49,  66,  17,  -2,  -4,  33,
  17,  59,  51,  69,  10,  -2,  -4,  34,
  26,  60,  53,  78,   4,  -5,  -3,  19,
  35,  60,  55,  83,   0,  -7,  -3,   7,
  42,  59,  58,  81,  -2, -10,  -2,  -6,
};
const char trF[] PROGMEM = { 
35, 0, 10, 1,
  45,  54,  69,  81,   9,  -7,   7,  -8,
  48,  51,  71,  79,   9,  -7,   9, -11,
  51,  46,  72,  77,  10,  -6,  12, -15,
  53,  41,  72,  72,  12,  -6,  17, -16,
  55,  35,  72,  69,  14,  -4,  21, -18,
  57,  30,  73,  64,  16,  -2,  25, -18,
  58,  24,  72,  59,  19,   3,  31, -18,
  59,  19,  70,  52,  22,   9,  38, -13,
  60,  13,  68,  46,  26,  19,  47,  -5,
  60,  15,  64,  47,  30,  19,  58,  -4,
  67,  19,  73,  51,  19,  17,  43,  -4,
  71,  23,  81,  54,   9,  14,  28,  -3,
  70,  27,  83,  57,   6,  12,  21,  -2,
  68,  31,  84,  60,   1,  11,  14,  -1,
  67,  35,  85,  63,  -1,  10,   9,  -1,
  64,  38,  85,  65,  -3,   9,   3,   1,
  60,  41,  83,  67,  -5,   9,  -1,   3,
  57,  45,  82,  69,  -6,   9,  -6,   6,
  52,  47,  80,  71,  -7,   9, -10,   8,
  48,  50,  78,  72,  -7,  10, -13,  12,
  43,  52,  74,  72,  -6,  11, -15,  16,
  38,  55,  70,  72,  -5,  13, -17,  20,
  34,  57,  67,  73,  -3,  15, -18,  24,
  28,  58,  62,  72,  -1,  18, -19,  30,
  21,  59,  55,  71,   5,  21, -16,  37,
  15,  60,  48,  68,  15,  24, -10,  45,
  12,  60,  44,  65,  23,  29,  -2,  55,
  17,  65,  49,  71,  18,  22,  -4,  48,
  21,  70,  52,  80,  15,  12,  -3,  32,
  25,  71,  55,  83,  13,   6,  -3,  23,
  29,  69,  58,  84,  11,   3,  -2,  17,
  33,  67,  62,  85,  10,   0,  -2,  10,
  36,  64,  64,  85,   9,  -3,   0,   4,
  40,  61,  66,  83,   9,  -5,   2,   0,
  43,  57,  68,  82,   9,  -6,   5,  -5,
};
const char trL[] PROGMEM = { 
36, 0, 10, 1,
  42,  51,  69,  76,   9,  -7,   7,  -1,
  43,  46,  71,  75,   9,  -6,   9,  -2,
  44,  41,  72,  74,   9,  -6,  12,  -3,
  45,  35,  72,  74,   9,  -4,  17,  -4,
  46,  30,  72,  73,   9,  -2,  21,  -5,
  47,  26,  73,  72,   9,   1,  25,  -6,
  48,  19,  72,  70,   9,   5,  31,  -5,
  49,  13,  70,  68,  10,  13,  38,  -5,
  49,   8,  68,  65,  10,  24,  47,  -2,
  51,   9,  64,  64,  10,  24,  58,   0,
  53,  13,  73,  66,   7,  20,  43,  -1,
  52,  18,  80,  67,   5,  17,  32,  -1,
  52,  22,  83,  68,   4,  15,  21,   0,
  51,  26,  84,  68,   4,  13,  14,   1,
  50,  30,  85,  68,   4,  11,   9,   1,
  48,  34,  85,  69,   4,  10,   3,   3,
  48,  37,  83,  70,   3,   9,  -1,   3,
  46,  41,  82,  70,   3,   9,  -6,   5,
  45,  44,  80,  72,   3,   9, -10,   5,
  43,  47,  78,  72,   3,   9, -12,   5,
  42,  49,  74,  72,   3,  10, -14,   6,
  41,  52,  71,  73,   3,  11, -16,   8,
  40,  54,  67,  73,   3,  13, -18,   9,
  38,  56,  62,  73,   4,  15, -19,  10,
  36,  58,  58,  73,   5,  17, -18,  12,
  34,  59,  51,  73,   7,  20, -13,  13,
  32,  60,  46,  74,  10,  24,  -5,  14,
  32,  62,  47,  74,  10,  22,  -4,  15,
  34,  68,  51,  76,  10,  10,  -4,  12,
  35,  69,  54,  77,  10,   3,  -3,   9,
  36,  68,  57,  77,   9,   1,  -2,   7,
  37,  65,  60,  77,   9,  -2,  -1,   6,
  38,  62,  63,  77,   9,  -4,  -1,   5,
  39,  59,  65,  76,   9,  -6,   1,   2,
  41,  56,  67,  76,   9,  -6,   3,   1,
  41,  51,  69,  76,   9,  -7,   6,  -1,
};
const char trR[] PROGMEM = { 
36, 0, 10, 1,
  42,  45,  70,  81,   9,   3,   6,  -8,
  45,  44,  72,  79,   9,   3,   5, -12,
  48,  42,  72,  75,   9,   3,   6, -13,
  51,  42,  73,  72,  10,   3,   7, -16,
  53,  40,  73,  68,  12,   3,   8, -18,
  55,  39,  73,  64,  14,   3,  10, -18,
  57,  37,  73,  59,  16,   4,  11, -18,
  58,  34,  73,  52,  19,   7,  12, -13,
  59,  33,  74,  47,  22,   9,  14,  -7,
  60,  32,  74,  45,  26,  10,  15,  -2,
  66,  33,  75,  50,  15,  10,  13,  -4,
  69,  35,  76,  53,   7,  10,  11,  -3,
  69,  36,  77,  56,   2,   9,   9,  -3,
  67,  36,  77,  59,  -1,   9,   6,  -2,
  64,  38,  77,  63,  -3,   9,   5,  -2,
  61,  39,  76,  65,  -5,   9,   3,   0,
  57,  40,  76,  67,  -6,   9,   2,   2,
  53,  41,  75,  68,  -7,   9,   1,   5,
  49,  42,  75,  71,  -7,   9,  -1,   7,
  45,  44,  75,  72,  -6,   9,  -2,  11,
  40,  45,  74,  72,  -5,   9,  -3,  15,
  35,  45,  73,  72,  -4,   9,  -4,  19,
  29,  47,  73,  73,  -2,   9,  -5,  22,
  24,  47,  72,  72,   2,   9,  -6,  28,
  18,  48,  70,  71,   7,   9,  -5,  35,
  12,  49,  68,  69,  14,  10,  -5,  43,
   6,  50,  65,  66,  26,  10,  -2,  52,
  11,  52,  64,  68,  22,   9,   0,  52,
  15,  54,  66,  77,  19,   5,  -1,  38,
  19,  52,  67,  82,  17,   4,   0,  25,
  23,  51,  68,  84,  14,   4,   0,  18,
  27,  51,  68,  85,  12,   3,   1,  11,
  31,  49,  69,  85,  11,   3,   2,   5,
  35,  48,  69,  85,  10,   4,   3,   0,
  38,  47,  70,  83,   9,   3,   3,  -3,
  41,  46,  70,  81,   9,   3,   6,  -8,
};
const char vt[] PROGMEM = { 
21, 0, 0, 1,
  57,  43,  60,  47, -18,   7, -17,   7,
  50,  43,  53,  47,  -5,   7,  -5,   7,
  43,  43,  47,  47,   7,   7,   7,   7,
  43,  43,  47,  47,   7,   7,   7,   7,
  43,  43,  47,  47,   7,   7,   7,   7,
  43,  47,  47,  50,   7,   0,   7,   0,
  43,  54,  47,  58,   7, -13,   7, -13,
  43,  60,  47,  65,   7, -25,   7, -25,
  43,  66,  47,  71,   7, -35,   7, -35,
  43,  63,  47,  67,   7, -30,   7, -29,
  43,  57,  47,  60,   7, -18,   7, -17,
  43,  50,  47,  53,   7,  -5,   7,  -5,
  43,  43,  47,  47,   7,   7,   7,   7,
  43,  43,  47,  47,   7,   7,   7,   7,
  43,  43,  47,  47,   7,   7,   7,   7,
  43,  43,  47,  47,   7,   7,   7,   7,
  47,  43,  50,  47,   0,   7,   0,   7,
  54,  43,  58,  47, -13,   7, -13,   7,
  60,  43,  65,  47, -25,   7, -25,   7,
  66,  43,  71,  47, -35,   7, -35,   7,
  63,  43,  67,  47, -30,   7, -29,   7,
};
const char wkF[] PROGMEM = { 
57, 0, 0, 1,
  16,  57,  61,  47,  13,  17, -14,  11,
  17,  58,  51,  48,  17,  18, -15,  12,
  18,  59,  37,  50,  16,  19, -11,  12,
  19,  59,  32,  51,  15,  21,  -8,  13,
  21,  59,  27,  52,  14,  23,  -4,  14,
  24,  60,  22,  53,  12,  24,   2,  15,
  26,  60,  17,  54,  11,  27,  10,  16,
  28,  60,  14,  56,  10,  29,  17,  15,
  30,  60,  11,  57,  10,  31,  26,  16,
  32,  60,  12,  58,   9,  33,  26,  17,
  34,  60,  14,  58,   8,  37,  22,  19,
  35,  59,  16,  59,   8,  40,  21,  20,
  37,  57,  18,  59,   8,  46,  20,  22,
  39,  60,  21,  60,   7,  44,  18,  24,
  41,  66,  22,  60,   7,  34,  18,  26,
  42,  72,  25,  60,   7,  24,  16,  28,
  44,  76,  26,  60,   7,  16,  16,  30,
  46,  79,  28,  60,   7,   9,  15,  32,
  47,  80,  30,  60,   7,   3,  14,  36,
  48,  79,  32,  60,   8,  -4,  14,  38,
  50,  74,  34,  59,   8, -12,  13,  43,
  50,  66,  35,  65,  10, -18,  13,  33,
  51,  55,  37,  71,  11, -19,  12,  25,
  52,  41,  39,  75,  11, -17,  11,  17,
  54,  36,  41,  79,  12, -15,  10,   8,
  55,  31,  43,  79,  13, -11,  11,   2,
  56,  27,  44,  79,  14,  -7,  11,   0,
  57,  22,  46,  75,  15,   0,  11,  -8,
  57,  19,  47,  67,  17,   9,  11, -14,
  58,  17,  48,  56,  18,  14,  12, -15,
  59,  17,  50,  44,  19,  17,  12, -13,
  59,  19,  51,  35,  21,  15,  13,  -9,
  59,  21,  52,  30,  23,  14,  14,  -6,
  60,  23,  53,  24,  24,  13,  15,   0,
  60,  25,  54,  19,  27,  12,  16,   5,
  60,  27,  56,  15,  29,  11,  15,  14,
  60,  29,  57,  12,  31,  10,  16,  21,
  60,  31,  58,  11,  33,   9,  17,  27,
  60,  33,  58,  12,  37,   9,  19,  26,
  59,  35,  59,  15,  40,   8,  20,  22,
  57,  36,  59,  18,  46,   8,  22,  20,
  60,  38,  60,  19,  44,   7,  24,  19,
  66,  40,  60,  21,  34,   7,  26,  18,
  72,  42,  60,  23,  24,   7,  28,  17,
  76,  43,  60,  25,  16,   7,  30,  16,
  79,  45,  60,  27,   9,   7,  32,  15,
  80,  47,  60,  29,   3,   7,  36,  15,
  79,  48,  60,  31,  -4,   7,  38,  14,
  74,  49,  59,  33, -12,   8,  43,  13,
  66,  51,  65,  35, -18,   8,  33,  13,
  55,  51,  71,  36, -19,  10,  25,  13,
  41,  52,  75,  39, -17,  11,  17,  11,
  36,  53,  79,  41, -15,  12,   8,  10,
  31,  54,  79,  42, -11,  13,   2,  10,
  27,  55,  79,  44,  -7,  14,   0,  11,
  22,  56,  75,  45,   0,  15,  -8,  11,
  19,  57,  67,  47,   9,  16, -14,  11,
};
const char wkL[] PROGMEM = { 
42, 0, 0, 1,
  56,  70,  74,  62,  -8,  18, -22,  -4,
  56,  70,  62,  64,  -8,  21, -24,  -6,
  57,  70,  49,  64,  -8,  25, -23,  -5,
  57,  69,  39,  65,  -8,  30, -18,  -5,
  58,  68,  33,  65,  -8,  34, -13,  -4,
  59,  67,  30,  66,  -8,  39,  -9,  -4,
  60,  66,  26,  66,  -7,  43,  -4,  -3,
  61,  71,  23,  67,  -7,  37,   3,  -3,
  61,  77,  24,  67,  -7,  28,   5,  -2,
  62,  81,  27,  68,  -6,  19,   3,  -2,
  63,  83,  30,  68,  -6,  13,   1,  -1,
  64,  86,  33,  69,  -6,   4,  -1,  -1,
  64,  85,  36,  69,  -5,  -9,  -2,   0,
  65,  81,  39,  70,  -5, -18,  -3,   0,
  64,  72,  42,  70,  -3, -23,  -3,   1,
  65,  60,  46,  72,  -2, -26,  -5,  -2,
  65,  48,  49,  74,  -2, -25,  -5,  -4,
  66,  42,  52,  73,  -1, -22,  -5,  -4,
  67,  38,  54,  73,  -1, -19,  -5,  -8,
  67,  33,  56,  72,   0, -13,  -4,  -9,
  68,  31,  58,  70,   0,  -9,  -4, -11,
  68,  29,  61,  67,   1,  -3,  -3, -12,
  68,  32,  64,  64,   1,  -4,  -3, -13,
  69,  35,  65,  61,   2,  -5,  -2, -14,
  69,  38,  67,  58,   3,  -6,   0, -13,
  70,  42,  68,  56,   3,  -8,   1, -12,
  70,  45,  70,  54,   5,  -8,   3, -10,
  69,  48,  71,  52,   7,  -9,   6,  -9,
  71,  50,  73,  51,   4,  -7,   7,  -7,
  73,  52,  73,  51,   2,  -7,  10,  -5,
  73,  55,  73,  52,   0,  -6,  13,  -7,
  73,  57,  74,  53,  -1,  -6,  16,  -7,
  75,  60,  74,  54,  -5,  -5,  20,  -7,
  72,  62,  73,  55,  -8,  -4,  24,  -6,
  71,  64,  72,  56, -10,  -3,  28,  -6,
  68,  64,  75,  57, -11,   0,  28,  -6,
  65,  66,  80,  57, -13,   1,  20,  -6,
  62,  67,  85,  58, -14,   3,  11,  -6,
  61,  68,  87,  59, -14,   5,   5,  -6,
  60,  69,  89,  60, -13,   8,  -1,  -5,
  58,  70,  88,  60, -11,  10,  -9,  -5,
  57,  69,  83,  61, -10,  15, -18,  -5,
};
const char wkR[] PROGMEM = { 
42, 0, 0, 1,
  29,  68,  67,  61,  -3,   1, -12,  -3,
  32,  68,  64,  64,  -4,   1, -13,  -3,
  35,  69,  61,  65,  -5,   2, -14,  -2,
  38,  69,  58,  67,  -6,   3, -13,   0,
  42,  70,  56,  68,  -8,   3, -12,   1,
  45,  70,  54,  70,  -8,   5, -10,   3,
  48,  69,  52,  71,  -9,   7,  -9,   6,
  50,  71,  51,  73,  -7,   4,  -7,   7,
  52,  73,  51,  73,  -7,   2,  -5,  10,
  55,  73,  52,  73,  -6,   0,  -7,  13,
  57,  73,  53,  74,  -6,  -1,  -7,  16,
  60,  75,  54,  74,  -5,  -5,  -7,  20,
  62,  72,  55,  73,  -4,  -8,  -6,  24,
  64,  71,  56,  72,  -3, -10,  -6,  28,
  64,  68,  57,  75,   0, -11,  -6,  28,
  66,  65,  57,  80,   1, -13,  -6,  20,
  67,  62,  58,  85,   3, -14,  -6,  11,
  68,  61,  59,  87,   5, -14,  -6,   5,
  69,  60,  60,  89,   8, -13,  -5,  -1,
  70,  58,  60,  88,  10, -11,  -5,  -9,
  69,  57,  61,  83,  15, -10,  -5, -18,
  70,  56,  62,  74,  18,  -8,  -4, -22,
  70,  56,  64,  62,  21,  -8,  -6, -24,
  70,  57,  64,  49,  25,  -8,  -5, -23,
  69,  57,  65,  39,  30,  -8,  -5, -18,
  68,  58,  65,  33,  34,  -8,  -4, -13,
  67,  59,  66,  30,  39,  -8,  -4,  -9,
  66,  60,  66,  26,  43,  -7,  -3,  -4,
  71,  61,  67,  23,  37,  -7,  -3,   3,
  77,  61,  67,  24,  28,  -7,  -2,   5,
  81,  62,  68,  27,  19,  -6,  -2,   3,
  83,  63,  68,  30,  13,  -6,  -1,   1,
  86,  64,  69,  33,   4,  -6,  -1,  -1,
  85,  64,  69,  36,  -9,  -5,   0,  -2,
  81,  65,  70,  39, -18,  -5,   0,  -3,
  72,  64,  70,  42, -23,  -3,   1,  -3,
  60,  65,  72,  46, -26,  -2,  -2,  -5,
  48,  65,  74,  49, -25,  -2,  -4,  -5,
  42,  66,  73,  52, -22,  -1,  -4,  -5,
  38,  67,  73,  54, -19,  -1,  -8,  -5,
  33,  67,  72,  56, -13,   0,  -9,  -4,
  31,  68,  70,  58,  -9,   0, -11,  -4,
};

const char balance[] PROGMEM = { 
1, 0, 0, 1,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,};
const char buttUp[] PROGMEM = { 
1, 0, 15, 1,
   20,  40,   0,   0,   5,   5,   3,   3,  90,  90,  45,  45, -60, -60,   5,   5,};
const char calib[] PROGMEM = { 
1, 0, 0, 1,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,};
const char dropped[] PROGMEM = { 
1, 0, -75, 1,
    0,  30,   0,   0,  -5,  -5,  15,  15, -75, -75,  45,  45,  60,  60, -30, -30,};
const char lifted[] PROGMEM = { 
1, 0, 75, 1,
    0, -20,   0,   0,   0,   0,   0,   0,  60,  60,  75,  75,  45,  45,  75,  75,};
const char rest[] PROGMEM = { 
1, 0, 0, 1,
  -30, -80, -45,   0,  -3,  -3,   3,   3,  75,  75,  75,  75, -55, -55, -55, -55,};
const char sit[] PROGMEM = { 
1, 0, -30, 1,
    0,   0, -45,   0,  -5,  -5,  20,  20,  45,  45, 105, 105,  45,  45, -45, -45,};
const char str[] PROGMEM = { 
1, 0, 20, 1,
    0,  30,   0,   0,  -5,  -5,   0,   0, -75, -75,  30,  30,  60,  60,   0,   0,};
const char zero[] PROGMEM = { 
1, 0, 0, 1,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,};

const char bf[] PROGMEM = { 
-8, 0, 0, 1,
 2, 7, 2, 
    0,   0,   0,   0,   0,   0,   0,   0,  75,  75,  75,  75, -55, -55, -40, -40,	10, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30, -20, -20, -55, -55,  60,  60,	 0, 4,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,   5,   5,  60,  60,  40,  40,	 0, 2,
    0,   0,   0,   0,   0,   0,   0,   0,  25,  25,  45,  45,  60,  60,  30,  30,	 0, 2,
    0,   0,   0,   0,   0,   0,   0,   0,  60,  60,  45,  45,  75,  75,  20,  20,	 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  60,  60, 110, 110, -55, -55, 100, 100,	 0, 3,
    0,   0,   0,   0,   0,   0,   0,   0, -10, -10, 100, 100, -65, -65, -60, -60,	 0, 2,
    0,   0,   0,   0,   0,   0,   0,   0,  45,  45, -10, -10, -55, -55,  45,  45,	 0, 2,
};
const char hi[] PROGMEM = { 
-3, 0, -30, 1,
 1, 2, 3, 
    0, -20, -60,   0,   0,   0,   0,   0,  30,  30,  90,  80,  60,  60, -40, -30,	 4, 1,
   35,  -5, -60,   0,   0,   0,   0,   0, -75,  30,  75,  60,  40,  75, -30,   0,	10, 0,
   40,   0, -35,   0,   0,   0,   0,   0, -60,  30,  75,  60,  60,  75, -30,   0,	10, 0,
};
const char pee[] PROGMEM = { 
-4, 0, 10, 1,
 2, 3, 3, 
   30,  20,   0,   0,  15, -10,  60, -10,  40,  40,  90,  45,  10,  60,  70,  45,	 6, 0,
   45,  20,   0,   0,  15, -10,  60, -10,  60,  53, 115,  60, -30,  40,  50,  21,	 2,10,
   30,  20,   0,   0,  15, -10,  60, -10,  40,  40,  90,  45,  10,  50,  70,  45,	16, 0,
   30,  20,   0,   0,  15, -10,  60, -10,  40,  40, 103,  45,  10,  50,  80,  45,	16, 0,
};
const char pu[] PROGMEM = { 
-8, 0, -15, 1,
 6, 7, 3, 
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 5, 0,
   15,   0,   0,   0,   0,   0,   0,   0,  30,  35,  40,  29,  50,  15,  15,  15,	 5, 0,
   30,   0,   0,   0,   0,   0,   0,   0,  27,  35,  40,  60,  50,  15,  20,  45,	 5, 0,
   15,   0,   0,   0,   0,   0,   0,   0,  45,  35,  40,  60,  25,  20,  20,  60,	 5, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  50,  35,  75,  60,  20,  30,  20,  60,	 6, 0,
  -15,   0,   0,   0,   0,   0,   0,   0,  60,  60,  70,  70,  15,  15,  60,  60,	 6, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  95,  95,  60,  60,  60,  60,	 6, 1,
   30,   0,   0,   0,   0,   0,   0,   0,  75,  70,  80,  80, -50, -50,  60,  60,	 8, 0,
};
const char rc[] PROGMEM = { 
-3, 0, 0, 2,
 0, 0, 0, 
    0,   0,   0,   0,   0,   0,   0,   0, -88, -43,  67,  87,  42, -35,  42,  42,	10, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -83, -88,  87,  42,  42,  42,  42, -40,	10, 0,
   -8, -20, -11,   0,  -1,  -1,   0,   0,  18,  18,  18,  18, -14, -14, -14, -14,	 8, 0,
};
const char stp[] PROGMEM = { 
-22, 0, 0, 1,
 0, 0, 0, 
    0,   0,   0,   0,   0,   0,   0,   0,  25,  40,  30,  40,  40,  20,  30,  20,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  25,  35,  35,  -5,  40,  25,  25,  90,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  45,  25,  35,  -5, -70,  35,  25,  90,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -70,  25,  35,  -5,  45,  35,  25,  90,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -50,  25,  30,  30,  70,  35,  30,  30,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -50,  45,  25,  30,  70,   0,  35,  30,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -40,  60,  20,  25,  70, -75,  50,  35,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -45, -60,  35,  35,  50,  35,  50,  35,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -45, -40,  35,  35,  50,  65,  50,  35,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  40,  40,  50,  50,  60,  60,  90,  90,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  40,  50,  65,  15,  60,  30,  40,  75,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  40,  60,  80,  10,  60,  20,  60,  90,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  60,  80,  15,  60,  30,  65,  80,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -15,  60,  80,  35,  50,  70,  65,  55,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  55, 125,  40,  30,  55,  65,  60,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  55, 115,  40,  30,  55, -85,  60,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   5,  55,  60,  40,  35,  55, -60,  60,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   5,  70,  60,  35,  35, -30, -20,  75,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   5, -15,  60,  35,  35,  35, -20,  75,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  65, -10,  80,  90,  35,  30, -60,  90,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  65, -10,  70, 125,  45,  30, -45,  90,	 8, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  65, -10,  70,  60,  45,  30, -45, -45,	 8, 0,
};
#if !defined(MAIN_SKETCH) || !defined(I2C_EEPROM)
		//if it's not the main sketch to save data or there's no external EEPROM, 
		//the list should always contain all information.
  const char* skillNameWithType[]={"bdFI","bkI","bkLI","bkRI","crFI","crLI","crRI","rnFI","rnLI","rnRI","trFI","trLI","trRI","vtI","wkFI","wkLI","wkRI","balanceI","buttUpI","calibI","droppedI","liftedI","restI","sitI","strI","zeroN","bfI","hiI","peeI","puI","rcI","stpI",};
  const char* progmemPointer[] = {bdF, bk, bkL, bkR, crF, crL, crR, rnF, rnL, rnR, trF, trL, trR, vt, wkF, wkL, wkR, balance, buttUp, calib, dropped, lifted, rest, sit, str, zero, bf, hi, pee, pu, rc, stp, };
#else	//only need to know the pointers to newbilities, because the intuitions have been saved onto external EEPROM,
	//while the newbilities on progmem are assigned to new addresses
  const char* progmemPointer[] = {zero, };
#endif
//the total byte of instincts is 5346
//the maximal array size is 461 bytes of wkF. 
//Make sure to leave enough memory for SRAM to work properly. Any single skill should be smaller than 400 bytes for safety.
