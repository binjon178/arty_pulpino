#define NumberOfStimuli 10

#define CLIP_IMM_0 11

#define CLIP_IMM_1 24

#define CLIP_IMM_2 31

#define CLIP_IMM_3 28

#define CLIP_IMM_4 15

#define CLIP_IMM_5 28

#define CLIP_IMM_6 27

#define CLIP_IMM_7 9

#define CLIP_IMM_8 9

#define CLIP_IMM_9 5

unsigned int op_a_clip[] = {
0xFFFE35B5,
0x0018918A,
0x0008621F,
0x0001C1FD,
0xFFF35449,
0x0002D90A,
0x0005D5CB,
0x00079BC1,
0x001507BD,
0xFFF9CC12,
};

unsigned int op_a_clipu[] = {
0xFFF6B5C9,
0x001E39A1,
0x00097A7A,
0x001BD04E,
0x001DD76A,
0xFFF38EE8,
0x0017D598,
0xFFF3B0EE,
0x000EB8BF,
0xFFF99648,
};

unsigned int res_clip[] = {
0xFFFFFC00,
0x0018918A,
0x0008621F,
0x0001C1FD,
0xFFFFC000,
0x0002D90A,
0x0005D5CB,
0x000000FF,
0x000000FF,
0xFFFFFFF0,
};

unsigned int res_clipu[] = {
0x00000000,
0x001E39A1,
0x00097A7A,
0x001BD04E,
0x00003FFF,
0x00000000,
0x0017D598,
0x00000000,
0x000000FF,
0x00000000,
};

unsigned int op_a_clip_reg[] = {
0x00071095,
0xFFF6008B,
0xFFF33FC3,
0x000ADD34,
0x001DF94C,
0x00069806,
0xFFFD9392,
0xFFFE7590,
0x000D1EC9,
0xFFFB8766,
};

unsigned int op_b_clip_reg[] = {
0x000DF6B3,
0x00189F2D,
0xFFF58259,
0xFFFCBEA7,
0x00004C53,
0xFFFFDBF7,
0x0003DDAC,
0x000C7EC6,
0x00017D72,
0x0003417D,
};

unsigned int res_clip_reg[] = {
0x00071095,
0xFFF6008B,
0x000A7DA6,
0xFFFCBEA7,
0x00004C53,
0xFFFFDBF7,
0xFFFD9392,
0xFFFE7590,
0x00017D72,
0xFFFCBE82,
};

unsigned int op_a_clipu_reg[] = {
0x001A08BF,
0x00052D8F,
0xFFFDC006,
0xFFFF6571,
0x001B1115,
0xFFF0D2A6,
0x001BE2ED,
0x00116260,
0xFFFE3133,
0x0007515C,
};

unsigned int op_b_clipu_reg[] = {
0x001F8DD7,
0x00176EF3,
0xFFF61B0D,
0x001E7F67,
0xFFFA5B81,
0x00127BDF,
0xFFF4E317,
0x000BEC78,
0xFFF619C2,
0x001D4E6A,
};

unsigned int res_clipu_reg[] = {
0x001A08BF,
0x00052D8F,
0xFFF61B0D,
0x00000000,
0xFFFA5B81,
0x00000000,
0xFFF4E317,
0x000BEC78,
0xFFF619C2,
0x0007515C,
};
