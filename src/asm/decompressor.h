#ifndef DECOMPRESSOR_H
#define DECOMPRESSOR_H

#define DECOMPRESSOR_ENTRY_OFFSET 1
#define DECOMPRESSOR_DELTA_SIZE_OFFSET 19
#define DECOMPRESSOR_DELTA_START_OFFSET 33
#define DECOMPRESSOR_PRGM_SIZE_OFFSET 41
#define DECOMPRESSOR_COMPRESSED_COPY_OFFSET 61
#define DECOMPRESSOR_COMPRESSED_END_OFFSET 49
#define DECOMPRESSOR_UNCOMPRESSED_END_OFFSET 53
#define DECOMPRESSOR_COMPRESSED_START_OFFSET 65
#define DECOMPRESSOR_UNCOMPRESSED_SIZE_OFFSET 70
#define DECOMPRESSOR_RESIZE_OFFSET 80
#define DECOMPRESSOR_RESIZE_SIZE_OFFSET 76

extern unsigned char decompressor[];
extern unsigned int decompressor_len;

#endif