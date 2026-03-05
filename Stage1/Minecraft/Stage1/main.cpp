#include "common.h"
#include "audio_kill.h"

void Stage1_Main() {
    // 1. Silent Mode: Kill the XAudio2 threads immediately
    SilenceMinecraftMusic();

    // 2. Identify the Version for Panorama Behavior
    // If the version is the 0.066.0054.0 build, use Ping-Pong
    bool isEarlyBuild = CheckTitleVersion(0x00660054);

    float rotationY = 0.0f;
    float direction = 1.0f;
    float speed = 0.05f;

    while (ExploitStage == 1) {
        if (isEarlyBuild) {
            // Ping-Pong Logic (Left to Right)
            rotationY += (speed * direction);
            if (rotationY > 45.0f || rotationY < -45.0f) {
                direction *= -1.0f; // Reverse direction at the edges
            }
        } else {
            // Endless Loop Logic
            rotationY += speed;
            if (rotationY > 360.0f) rotationY = 0.0f;
        }

        // Apply the rotation to the Minecraft Camera offset
        // (Offset 0x82... will vary by TU, we'll refine this in testing)
        WriteMemoryFloat(GAME_CAMERA_Y_OFFSET, rotationY);

        // Signal to move to Stage 2 (Triggered by the Buffer Overflow)
        if (MemoryMassageComplete()) {
            ExploitStage = 2;
            SetLEDQuadrant(1); // Light up Top-Left
        }
    }
}
