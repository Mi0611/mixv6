#pragma once

#include "types.h"

#define ELF_MAGIC 0x464C457FU /* "\x7FELF" in little endian */

/* ELF File header */
struct elfhdr {
    uint32_t magic; /* must equal ELF_MAGIC */
    uint8_t elf[12];
    uint16_t type;
    uint16_t machine;
    uint32_t version;
    uint32_t entry;
    uint32_t phoff;
    uint32_t shoff;
    uint32_t flags;
    uint16_t ehsize;
    uint16_t phentsize;
    uint16_t phnum;
    uint16_t shentsize;
    uint16_t shnum;
    uint16_t shstrndx;
};

/* ELF Program section header */
struct proghdr {
    uint32_t type;
    uint32_t off;
    uint32_t vaddr;
    uint32_t paddr;
    uint32_t filesz;
    uint32_t memsz;
    uint32_t flags;
    uint32_t align;
};

// Values for Proghdr type
#define ELF_PROG_LOAD 1