#include <nds.h>
#include "P_Controls.h"
#include "P_Initializer.h"
#include "SpriteManager.h"
#include <time.h>

int main(void) {
    P_InitNDS();

    // Initialize the sprites
    configureSprites();

    int x = (256 - 32) / 2; // Center horizontally
    int y = 192 - 32;
    int keys;

    while (true) {
        scanKeys();
        keys = keysHeld();

        // Move sprite left or right
        if ((keys & KEY_RIGHT) && (x < (256 - 32))) x += 2;
        if ((keys & KEY_LEFT) && (x > 0)) x -= 2;

        // Update the sprite position
        updateSprite(x, y);

        swiWaitForVBlank();
    }

    return 0;
}