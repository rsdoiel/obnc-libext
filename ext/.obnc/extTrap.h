/*GENERATED BY OBNC 0.16.1*/

#ifndef extTrap_h
#define extTrap_h

#include <obnc/OBNC.h>

typedef void (*extTrap__Handler_)(OBNC_INTEGER exception_, const char file_[], OBNC_INTEGER file_len, OBNC_INTEGER line_);

#define extTrap__handle_ ext__extTrap__handle_
extern extTrap__Handler_ extTrap__handle_;

#define extTrap__SetHandler_ ext__extTrap__SetHandler_
void extTrap__SetHandler_(extTrap__Handler_ h_);

#define extTrap__Init ext__extTrap__Init
void extTrap__Init(void);

#endif
