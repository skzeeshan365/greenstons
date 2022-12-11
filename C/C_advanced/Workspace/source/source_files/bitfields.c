#include <stdio.h>
#include <stdbool.h>

//Border styles
#define SOLID 0
#define DOTTED 1
#define DASHED 2

//primary colors
#define RED 1
#define GREEN 2
#define BLUE 4

//Secondary colors
#define BLACK 0
#define YELLOW (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN (BLUE | GREEN)
#define WHITE (RED | GREEN | BLUE)

const char *colors[8] = {"black", "red", "green", "yellow", "blue", "magenta", "cyan", "white"};

typedef struct box_props
{
    bool opaque :1;
    unsigned short int filled_color :3;
    unsigned short int : 4;
    bool border :1;
    unsigned short int border_color : 3;
    unsigned short int border_style : 2;
    unsigned short int : 2;
} box_props;

void display(const box_props);

int main()
{
    box_props box = {true, GREEN, false, WHITE, DOTTED};

    printf("Struct size: %d\n", sizeof(box));
    printf("\nOriginal settings\n");
    display(box);

    box.opaque = false;
    box.filled_color = CYAN;
    box.border = true;
    box.filled_color = BLACK;
    box.border_style = DOTTED;

    printf("\nModified settings\n");
    display(box);
}

void display(const box_props box)
{
    printf("Box is: %s\n", box.opaque == true ? "OPAQUE" : "TRANSPARENT");
    printf("The fill color is: %s\n", colors[box.filled_color]);
    printf("Border %s\n", box.border == true ? "SHOWN" : "HIDDEN");
    printf("Border color: %s\n", colors[box.border_color]);
    
    switch (box.border_style)
    {
    case SOLID:
        printf("solid.\n");
        break;
    case DOTTED:
        printf("dotted.\n");
        break;
    case DASHED:
        printf("dashed.\n");
        break;
    default:
        printf("unknown type.\n");
    }
}
