#ifndef __PFS_HELPER_H
#define __PFS_HELPER_H

#define EKPFS_SIZE 0x20
#define EEKPFS_SIZE 0x100
#define PFS_SEED_SIZE 0x10
#define PFS_FINAL_KEY_SIZE 0x20
#define SIZEOF_PFS_KEY_BLOB 0x158
#define CONTENT_KEY_SEED_SIZE 0x10
#define SELF_KEY_SEED_SIZE 0x10
#define EEKC_SIZE 0x20
#define MAX_FAKE_KEYS 32
#define SIZEOF_RSA_KEY 0x48
#define EKPFS_SIZE 0x20
#define EEKPFS_SIZE 0x100
#define PFS_SEED_SIZE 0x10
#define PFS_FINAL_KEY_SIZE 0x20
#define SIZEOF_PFS_KEY_BLOB 0x158


static const uint8_t s_ypkg_n[0x100] PAYLOAD_RDATA = {
  0x27, 0x3E, 0xBD, 0x7C, 0x3A, 0xE3, 0x8E, 0x58, 0x90, 0x45, 0x35, 0xC8, 0xAF, 0x22, 0x05, 0xB8,
  0xF9, 0xD1, 0x80, 0xFD, 0x3D, 0xA8, 0x3A, 0xF1, 0xB1, 0x50, 0xA0, 0xA2, 0x62, 0x2D, 0xCF, 0x40,
  0x93, 0xFF, 0x67, 0x24, 0xEF, 0x8D, 0xE5, 0x05, 0xC0, 0x34, 0x50, 0xA0, 0xC2, 0x4B, 0x7F, 0x68,
  0xDB, 0x6B, 0x1B, 0xD6, 0xCD, 0x2B, 0xA6, 0x5B, 0xC9, 0xE2, 0x97, 0x8B, 0xFD, 0x22, 0xFB, 0x3F,
  0x4A, 0x10, 0x2C, 0x57, 0xF4, 0x6C, 0xCF, 0x4C, 0xD2, 0xA2, 0x69, 0xC2, 0x53, 0xD3, 0x81, 0x94,
  0x34, 0x50, 0xBD, 0x80, 0xE1, 0x05, 0x18, 0x8E, 0x79, 0xB7, 0xBB, 0x9F, 0xBF, 0xBE, 0xC9, 0xFB,
  0xA8, 0x28, 0x75, 0xEA, 0x77, 0x52, 0xFF, 0xFE, 0x2E, 0x69, 0x80, 0x0E, 0x57, 0x09, 0x58, 0x03,
  0x4F, 0x95, 0x81, 0xDF, 0x0C, 0xCC, 0xF8, 0x0D, 0xB1, 0x96, 0xED, 0x79, 0x0D, 0x02, 0xA5, 0xD8,
  0xB2, 0x1B, 0x13, 0x30, 0x42, 0x2C, 0x83, 0xB9, 0x6A, 0x69, 0x52, 0xDC, 0xF3, 0x14, 0x67, 0xE7,
  0x64, 0x13, 0xAC, 0xC6, 0x6D, 0x2C, 0xF9, 0x01, 0x67, 0xBD, 0x00, 0x3D, 0xCB, 0xEA, 0xF8, 0x5F,
  0x4E, 0x47, 0x9F, 0xED, 0xFC, 0x3B, 0x33, 0x68, 0x19, 0x60, 0xBE, 0x5B, 0xBF, 0x8A, 0x4F, 0xA9,
  0x63, 0x1E, 0x24, 0x1D, 0xDE, 0x0C, 0x77, 0xFF, 0x9D, 0xE7, 0x20, 0xBF, 0x88, 0x15, 0xC3, 0x30,
  0x3D, 0xEB, 0x87, 0x4F, 0xE7, 0xC9, 0x03, 0x48, 0xA2, 0x16, 0xCF, 0x56, 0xEB, 0x18, 0x44, 0xB8,
  0x44, 0xC6, 0x23, 0x2B, 0x68, 0x02, 0x55, 0xAA, 0x7E, 0x08, 0x6C, 0x7D, 0xF2, 0xA0, 0xD7, 0xA0,
  0x9B, 0x25, 0x9D, 0x35, 0xDE, 0x7D, 0x49, 0xCD, 0x1D, 0x80, 0x17, 0x71, 0xC3, 0x8B, 0x05, 0x43,
  0xC1, 0x0E, 0x2A, 0xF9, 0x8B, 0x45, 0x2C, 0x2A, 0xD1, 0xF0, 0x9A, 0xE5, 0xE7, 0x71, 0xCF, 0xC6,
};

static const unsigned int s_ypkg_e = UINT32_C(0x10001);

static const uint8_t s_ypkg_d[0x100] PAYLOAD_RDATA = {
  0xB1, 0xC6, 0x89, 0x79, 0x8A, 0xFE, 0x6F, 0xD6, 0xC7, 0x80, 0xC5, 0x7D, 0x92, 0x80, 0xA6, 0x37,
  0x39, 0xEC, 0x4A, 0x40, 0x83, 0x37, 0x1F, 0x4D, 0xF5, 0xD7, 0x1A, 0x96, 0x79, 0x90, 0x99, 0x85,
  0x68, 0xC0, 0xC9, 0x6B, 0x45, 0x2D, 0xB4, 0x12, 0x09, 0x83, 0xDF, 0x1B, 0x56, 0x48, 0xC1, 0xE0,
  0x07, 0x22, 0x3F, 0x79, 0x99, 0x7D, 0x23, 0xC0, 0x24, 0x50, 0xDE, 0x9A, 0x6C, 0xE5, 0x63, 0x93,
  0xAB, 0x42, 0xD0, 0x73, 0x93, 0x46, 0x48, 0xAB, 0xF4, 0xAF, 0x67, 0x71, 0xB5, 0x43, 0x27, 0x1A,
  0x0E, 0xBB, 0x78, 0xAC, 0x44, 0x66, 0x22, 0x4A, 0xBA, 0xDB, 0x23, 0x93, 0x50, 0x3C, 0x2B, 0xC7,
  0x6A, 0xE2, 0x15, 0x97, 0x3C, 0x9D, 0xF4, 0xDF, 0x3D, 0xCE, 0xE0, 0x09, 0xB0, 0xA5, 0x8C, 0xC5,
  0xA1, 0x7C, 0x6E, 0xDA, 0x49, 0x82, 0x43, 0xD5, 0x58, 0x22, 0x13, 0x3D, 0x39, 0x97, 0x13, 0x0C,
  0x03, 0x11, 0x44, 0x8F, 0x52, 0xB8, 0x73, 0xF3, 0x90, 0x6B, 0xE9, 0xA2, 0x9E, 0x5E, 0x7E, 0x66,
  0x26, 0xD1, 0x20, 0xCE, 0xB9, 0x6B, 0xD4, 0x77, 0x1D, 0xAD, 0x51, 0xE6, 0xC0, 0x7B, 0xB8, 0xB9,
  0x2B, 0xF4, 0xA9, 0xA4, 0x27, 0x5B, 0x14, 0x4E, 0x0C, 0xBC, 0xCC, 0x68, 0x63, 0x9B, 0x0F, 0xD6,
  0xA3, 0x0B, 0xA0, 0xF6, 0x8A, 0x09, 0x83, 0x28, 0x21, 0xD2, 0x9E, 0xA4, 0xFB, 0xD1, 0xB8, 0xA1,
  0xA4, 0xCF, 0x1B, 0xD3, 0x8F, 0x2C, 0x49, 0xD1, 0x66, 0x26, 0x9A, 0x0B, 0x44, 0x07, 0xBE, 0x11,
  0x6E, 0x49, 0x56, 0x5C, 0x22, 0xB1, 0xB2, 0x63, 0x3E, 0xE2, 0x8B, 0xFB, 0x01, 0xBD, 0xBC, 0xC2,
  0xF8, 0xEE, 0xFD, 0xDB, 0xDD, 0x35, 0x87, 0x22, 0xF1, 0xF8, 0x40, 0x1A, 0x27, 0xAA, 0x1E, 0xCA,
  0x7B, 0xFA, 0x8D, 0x0E, 0xA8, 0xD9, 0xC6, 0x1C, 0x05, 0xDE, 0xD4, 0xE2, 0x0E, 0xCD, 0x76, 0x7F,
};




static const uint8_t s_ypkg_p[0x80] PAYLOAD_RDATA= {
  0x2D, 0xE8, 0xB4, 0x65, 0xBE, 0x05, 0x78, 0x6A, 0x89, 0x31, 0xC9, 0x5A, 0x44, 0xDE, 0x50, 0xC1,
  0xC7, 0xFD, 0x9D, 0x3E, 0x21, 0x42, 0x17, 0x40, 0x79, 0xF9, 0xC9, 0x41, 0xC1, 0xFC, 0xD7, 0x0F,
  0x34, 0x76, 0xA3, 0xE2, 0xC0, 0x1B, 0x5A, 0x20, 0x0F, 0xAF, 0x2F, 0x52, 0xCD, 0x83, 0x34, 0x72,
  0xAF, 0xB3, 0x12, 0x33, 0x21, 0x2C, 0x20, 0xB0, 0xC6, 0xA0, 0x2D, 0xB1, 0x59, 0xE3, 0xA7, 0xB0,
  0x4E, 0x1C, 0x4C, 0x5B, 0x5F, 0x10, 0x9A, 0x50, 0x18, 0xCC, 0x86, 0x79, 0x25, 0xFF, 0x10, 0x02,
  0x8F, 0x90, 0x03, 0xA9, 0x37, 0xBA, 0xF2, 0x1C, 0x13, 0xCC, 0x09, 0x45, 0x15, 0xB8, 0x55, 0x74,
  0x0A, 0x28, 0x24, 0x04, 0xD1, 0x19, 0xAB, 0xB3, 0xCA, 0x44, 0xB6, 0xF8, 0x3D, 0xB1, 0x2A, 0x72,
  0x88, 0x35, 0xE4, 0x86, 0x6B, 0x55, 0x47, 0x08, 0x25, 0x16, 0xAB, 0x69, 0x1D, 0xBF, 0xF6, 0xFE,
};

static const uint8_t s_ypkg_q[0x80] PAYLOAD_RDATA= {
  0x23, 0x80, 0x77, 0x84, 0x4D, 0x6F, 0x9B, 0x24, 0x51, 0xFE, 0x2A, 0x6B, 0x28, 0x80, 0xA1, 0x9E,
  0xBD, 0x6D, 0x18, 0xCA, 0x8D, 0x7D, 0x9E, 0x79, 0x5A, 0xE0, 0xB8, 0xEB, 0xD1, 0x3D, 0xF3, 0xD9,
  0x02, 0x90, 0x2A, 0xA7, 0xB5, 0x7E, 0x9A, 0xA2, 0xD7, 0x2F, 0x21, 0xA8, 0x50, 0x7D, 0x8C, 0xA1,
  0x91, 0x2F, 0xBF, 0x97, 0xBE, 0x92, 0xC2, 0xC1, 0x0D, 0x8C, 0x0C, 0x1F, 0xDE, 0x31, 0x35, 0x15,
  0x39, 0x90, 0xCC, 0x97, 0x47, 0x2E, 0x7F, 0x09, 0xE9, 0xC3, 0x9C, 0xCE, 0x91, 0xB2, 0xC8, 0x58,
  0x76, 0xE8, 0x70, 0x1D, 0x72, 0x5F, 0x4A, 0xE6, 0xAA, 0x36, 0x22, 0x94, 0xC6, 0x52, 0x90, 0xB3,
  0x9F, 0x9B, 0xF0, 0xEF, 0x57, 0x8E, 0x53, 0xC3, 0xE3, 0x30, 0xC9, 0xD7, 0xB0, 0x3A, 0x0C, 0x79,
  0x1B, 0x97, 0xA8, 0xD4, 0x81, 0x22, 0xD2, 0xB0, 0x82, 0x62, 0x7D, 0x00, 0x58, 0x47, 0x9E, 0xC7,
};

static const uint8_t s_ypkg_dmp1[0x80] PAYLOAD_RDATA= {
  0x25, 0x54, 0xDB, 0xFD, 0x86, 0x45, 0x97, 0x9A, 0x1E, 0x17, 0xF0, 0xE3, 0xA5, 0x92, 0x0F, 0x12,
  0x2A, 0x5C, 0x4C, 0xA6, 0xA5, 0xCF, 0x7F, 0xE8, 0x5B, 0xF3, 0x65, 0x1A, 0xC8, 0xCF, 0x9B, 0xB9,
  0x2A, 0xC9, 0x90, 0x5D, 0xD4, 0x08, 0xCF, 0xF6, 0x03, 0x5A, 0x5A, 0xFC, 0x9E, 0xB6, 0xDB, 0x11,
  0xED, 0xE2, 0x3D, 0x62, 0xC1, 0xFC, 0x88, 0x5D, 0x97, 0xAC, 0x31, 0x2D, 0xC3, 0x15, 0xAD, 0x70,
  0x05, 0xBE, 0xA0, 0x5A, 0xE6, 0x34, 0x9C, 0x44, 0x78, 0x2B, 0xE5, 0xFE, 0x38, 0x56, 0xD4, 0x68,
  0x83, 0x13, 0xA4, 0xE6, 0xFA, 0xD2, 0x9C, 0xAB, 0xAC, 0x89, 0x5F, 0x10, 0x8F, 0x75, 0x6F, 0x04,
  0xBC, 0xAE, 0xB9, 0xBC, 0xB7, 0x1D, 0x42, 0xFA, 0x4E, 0x94, 0x1F, 0xB4, 0x0A, 0x27, 0x9C, 0x6B,
  0xAB, 0xC7, 0xD2, 0xEB, 0x27, 0x42, 0x52, 0x29, 0x41, 0xC8, 0x25, 0x40, 0x54, 0xE0, 0x48, 0x6D,
};

static const uint8_t s_ypkg_dmq1[0x80]PAYLOAD_RDATA = {
  0x4D, 0x35, 0x67, 0x38, 0xBC, 0x90, 0x3E, 0x3B, 0xAA, 0x6C, 0xBC, 0xF2, 0xEB, 0x9E, 0x45, 0xD2,
  0x09, 0x2F, 0xCA, 0x3A, 0x9C, 0x02, 0x36, 0xAD, 0x2E, 0xC1, 0xB1, 0xB2, 0x6D, 0x7C, 0x1F, 0x6B,
  0xA1, 0x8F, 0x62, 0x20, 0x8C, 0xD6, 0x6C, 0x36, 0xD6, 0x5A, 0x54, 0x9E, 0x30, 0xA9, 0xA8, 0x25,
  0x3D, 0x94, 0x12, 0x3E, 0x0D, 0x16, 0x1B, 0xF0, 0x86, 0x42, 0x72, 0xE0, 0xD6, 0x9C, 0x39, 0x68,
  0xDB, 0x11, 0x80, 0x96, 0x18, 0x2B, 0x71, 0x41, 0x48, 0x78, 0xE8, 0x17, 0x8B, 0x7D, 0x00, 0x1F,
  0x16, 0x68, 0xD2, 0x75, 0x97, 0xB5, 0xE0, 0xF2, 0x6D, 0x0C, 0x75, 0xAC, 0x16, 0xD9, 0xD5, 0xB1,
  0xB5, 0x8B, 0xE8, 0xD0, 0xBF, 0xA7, 0x1F, 0x61, 0x5B, 0x08, 0xF8, 0x68, 0xE7, 0xF0, 0xD1, 0xBC,
  0x39, 0x60, 0xBF, 0x55, 0x9C, 0x7C, 0x20, 0x30, 0xE8, 0x50, 0x28, 0x44, 0x02, 0xCE, 0x51, 0x2A,
};




static const uint8_t s_ypkg_iqmp[0x80] PAYLOAD_RDATA= {
  0xF5, 0x73, 0xB8, 0x7E, 0x5C, 0x98, 0x7C, 0x87, 0x67, 0xF1, 0xDA, 0xAE, 0xA0, 0xF9, 0x4B, 0xAB,
  0x77, 0xD8, 0xCE, 0x64, 0x6A, 0xC1, 0x4F, 0xA6, 0x9B, 0xB9, 0xAA, 0xCC, 0x76, 0x09, 0xA4, 0x3F,
  0xB9, 0xFA, 0xF5, 0x62, 0x84, 0x0A, 0xB8, 0x49, 0x02, 0xDF, 0x9E, 0xC4, 0x1A, 0x37, 0xD3, 0x56,
  0x0D, 0xA4, 0x6E, 0x15, 0x07, 0x15, 0xA0, 0x8D, 0x97, 0x9D, 0x92, 0x20, 0x43, 0x52, 0xC3, 0xB2,
  0xFD, 0xF7, 0xD3, 0xF3, 0x69, 0xA2, 0x28, 0x4F, 0x62, 0x6F, 0x80, 0x40, 0x5F, 0x3B, 0x80, 0x1E,
  0x5E, 0x38, 0x0D, 0x8B, 0x56, 0xA8, 0x56, 0x58, 0xD8, 0xD9, 0x6F, 0xEA, 0x12, 0x2A, 0x40, 0x16,
  0xC1, 0xED, 0x3D, 0x27, 0x16, 0xA0, 0x63, 0x97, 0x61, 0x39, 0x55, 0xCC, 0x8A, 0x05, 0xFA, 0x08,
  0x28, 0xFD, 0x55, 0x56, 0x31, 0x94, 0x65, 0x05, 0xE7, 0xD3, 0x57, 0x6C, 0x0D, 0x1C, 0x67, 0x0B,
};

	static const uint8_t eekpfs_flatz[EEKPFS_SIZE] PAYLOAD_RDATA = {0xB7, 0x67, 0xD3, 0x81, 0x21, 0x31, 0x58, 0xA2, 0xAB, 0xFD, 0x0D, 0x0D, 0x57, 0x82, 0x0D, 0x6E, 0x95, 0x7B, 0x00, 0xFC, 0xAD, 0x80, 0xBF, 0x2F, 0x36, 0x7C, 0x53, 0x51, 0x03, 0xC1, 0x0C, 0x42, 0xD3, 0xD3, 0x4C, 0x39, 0x4C, 0x00, 0x62, 0x58, 0x32, 0xBF, 0xF4, 0x9A, 0xE4, 0x5E, 0x13, 0x48, 0xA7, 0xFD, 0xB3, 0xD5, 0xDE, 0xBD, 0x0F, 0xFB, 0x35, 0x13, 0xDD, 0x3F, 0x12, 0x32, 0xD5, 0xC8, 0x32, 0x15, 0x7C, 0x0A, 0x69, 0x54, 0x05, 0x52, 0xAD, 0x4B, 0x0B, 0x4A, 0x8E, 0x5B, 0x39, 0x78, 0xCC, 0xE1, 0x76, 0xBA, 0xD8, 0xD9, 0x70, 0x74, 0x50, 0x65, 0x43, 0x30, 0x7C, 0xF7, 0x40, 0x35, 0x42, 0x7E, 0x36, 0xF8, 0x09, 0xE0, 0x0D, 0x23, 0xC7, 0x3A, 0x7C, 0x65, 0x98, 0x73, 0x7B, 0x85, 0x6A, 0xCB, 0xB1, 0x16, 0x5C, 0x02, 0x95, 0xDC, 0x52, 0x6B, 0x6A, 0x85, 0x9B, 0xF0, 0xC4, 0x3D, 0xAC, 0x13, 0x64, 0xCD, 0x0D, 0x2F, 0xDF, 0x61, 0xBB, 0x5E, 0x84, 0xF0, 0x83, 0x3F, 0x26, 0x88, 0x37, 0xCA, 0x8D, 0xC8, 0x3C, 0x05, 0x70, 0xA5, 0x4C, 0x17, 0xD5, 0x73, 0x4B, 0x0F, 0x6A, 0xE5, 0x89, 0x2D, 0x28, 0x1C, 0x72, 0x8B, 0x6B, 0xC3, 0xD0, 0xC5, 0x21, 0xB1, 0x51, 0xB7, 0x99, 0x15, 0x39, 0x99, 0x21, 0x5F, 0xF6, 0xBC, 0x72, 0x41, 0xC3, 0xAC, 0xC8, 0x9F, 0x38, 0x8D, 0x82, 0x42, 0x76, 0xD5, 0x28, 0xFA, 0x76, 0x86, 0xF6, 0x8B, 0x5B, 0xAC, 0x63, 0xBE, 0x4F, 0x77, 0x91, 0xA4, 0xE7, 0x48, 0xBC, 0x9B, 0xF6, 0x84, 0xEE, 0xFB, 0x6E, 0x63, 0x8E, 0x5A, 0xB8, 0xF7, 0xF7, 0x2C, 0x76, 0xBA, 0x1D, 0xB7, 0x8D, 0xCC, 0x55, 0x7F, 0x4D, 0x73, 0xB8, 0xBE, 0xC3, 0x13, 0xA6, 0x38, 0xB4, 0x7E, 0x1F, 0x48, 0x4A, 0xBD, 0xA8, 0x70, 0xF4, 0x8F, 0x00, 0x4A, 0x58, 0x18, 0x69, 0xE9};



/* we mark our key using some pattern that we can check later */
static const uint8_t s_fake_key_seed[0x10] PAYLOAD_RDATA = {
	0x46, 0x41, 0x4B, 0x45, 0x46, 0x41, 0x4B, 0x45, 0x46, 0x41, 0x4B, 0x45, 0x46, 0x41, 0x4B, 0x45,
};

struct fake_key_desc {
	uint8_t key[0x20];
	int occupied;
};

struct ekc {
	uint8_t content_key_seed[CONTENT_KEY_SEED_SIZE];
	uint8_t self_key_seed[SELF_KEY_SEED_SIZE];
};

struct pfs_key_blob {
	uint8_t ekpfs[EKPFS_SIZE];
	uint8_t eekpfs[EEKPFS_SIZE];
	struct ekc eekc;
	uint32_t key_ver;
	uint32_t pubkey_ver;
	uint32_t type;
	uint32_t finalized;
	uint32_t is_disc;
	uint32_t pad;
};



typedef struct pfs_key_blob pfs_key_blob_t;

TYPE_CHECK_SIZE(pfs_key_blob_t, SIZEOF_PFS_KEY_BLOB);



struct rsa_buffer {
	uint8_t* ptr;
	size_t size;
};




#endif
