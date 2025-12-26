#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char colors[10][16];
char walPath[999]; /*the program hates it when i do char *walPath*/
char magickCommand[999];

int main(int argc, char **argv)
{
	sprintf(walPath, "%s/.cache/wal/colors", getenv("HOME"));
	FILE *walColors = fopen(walPath, "r");
	if (walColors != NULL)
	{
		for (int i = 0; i < 16; i++)
		{
			fgets(colors[i], 10, walColors);
		}
		sprintf(magickCommand, "magick -size 16x1 xc:white -fill \"%s\" -draw \'point 0,0\' -fill \"%s\" -draw \'point 1,0\' -fill \"%s\" -draw \'point 2,0\' -fill \"%s\" -draw \'point 3,0\' -fill \"%s\" -draw \'point 4,0\' -fill \"%s\" -draw \'point 5,0\' -fill \"%s\" -draw \'point 6,0\' -fill \"%s\" -draw \'point 7,0\' -fill \"%s\" -draw \'point 8,0\' -fill \"%s\" -draw \'point 9,0\' -fill \"%s\" -draw \'point 10,0\' -fill \"%s\" -draw \'point 11,0\' -fill \"%s\" -draw \'point 12,0\' -fill \"%s\" -draw \'point 13,0\' -fill \"%s\" -draw \'point 14,0\' -fill \"%s\" -draw \'point 15,0\' -resize 16x16\\! temp.png", colors[0], colors[1], colors[2], colors[3], colors[4], colors[5], colors[6], colors[7], colors[8], colors[9], colors[10], colors[11], colors[12], colors[13], colors[14], colors[15]); /*i hate this*/
		system(magickCommand);
		system("magick -size 16x16 gradient:\"#00000000-#000000ff\" temp1.png");
		system("magick temp.png temp1.png -compose overlay -composite ultrawal.png");
		system("rm temp.png temp1.png");
	}
	else
	{
		puts("pywal color file not found");
	}
	return EXIT_SUCCESS;
}
