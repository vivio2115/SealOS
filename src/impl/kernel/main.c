#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to SealOS\n");
    print_str("        .---.\n");
    print_str("       /o   o\\\n");
    print_str("    __(=  \"  =)__\n");
    print_str("     //\\'-=-'/\\\\\n");
    print_str("        )   (_\n");
    print_str("       /      `\"=-._\n");
    print_str("      /       \\     ``\"=.\n");
    print_str("     /  /   \\  \\         `=..--.\n");
    print_str(" ___/  /     \\  \\___      _,  , `\\\n");
    print_str("`-----' `\"\"\"\"`'-----``\"\"\"`  \\  \\_/\n");
    print_str("                             `-`\n");
    print_str("64-bit kernel loaded\n");
}