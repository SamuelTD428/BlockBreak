BlockBreak is a non-persistent software only hypervisor exploit for Xbox 360 that works on the latest (17559) software version. This repository contains the exploit files that can be used on an Xbox 360 console to run unsigned code. This exploit can be triggered using Minecraft: Xbox 360 Edition.

**This exploit is NOT persistent!** This means your console will only be in a hacked state (able to run homebrew/unsigned code) for as long as it's kept on. **Once you reboot or power off your console you'll need to run the exploit again**. The exploit cannot be made persistent.

**Your Xbox 360 console must be on dashboard version 17559 in order to use this exploit**. While the exploit can be ported to any system software version I have only built the exploit for the 17559 dashboard version.

For information on how to use the exploit see the Quick Start section below.

# Quick Start
To run BlockBreak exploit you'll need a copy of Minecraft: Xbox 360 Edition and a USB stick. The following steps give a brief overview of how to run the exploit.
1. Download the BlockBreak-USB.zip file from the releases section and extract the files.
2. Format a USB stick to FAT32.
3. Copy the contents of the folder matching the Minecraft: Xbox 360 Edition you want to use for the exploit to the root of the USB stick.
    * The root of the USB stick should contain the following files/folders: BadUpdatePayload, Content, name.txt.
4. Place the unsigned executable you want to run when the exploit triggers into the BadUpdatePayload folder on the USB stick and name it "default.xex" (replace any existing file in the folder). This xex file must be in retail format and have all restrictions removed (see the wiki for how to do this).
5. Insert the USB stick into your Xbox 360 console and power it on.
6. Sign into the Player 1 profile and run the game you're using to trigger the exploit.
    * If you're using Rock Band Blitz, there is no profile included. You can use any local/offline profile, or run the game completely signed out.
7. Follow the instructions for the game you chose to load the hacked game save file and begin the exploit process.
8. The console's ring of light will flash different colors/segments during the exploit process to indicate progress. For information on what the different values mean see the [LED Patterns and Meanings](https://github.com/grimdoomer/Xbox360BadUpdate/wiki/How-To-Use#led-patterns-and-meanings) section of the wiki.
9. Once the exploit triggers successfully the RoL should be fully lit in green. The hypervisor has now been patched to run unsigned executables and your unsigned default.xex file will be run.

The exploit has a 80% success rate and can take up to 1-2 minutes to trigger successfully. If after 3-5 minutes the exploit hasn't triggered you'll need to power off your Xbox 360 console and repeat the process from step 5.

# FAQ
**Q: Why do I have to re-run the exploit every time I turn my console on?**  
A: The exploit is not-persistent, it only works for as long as the console is kept on. Once the console is turned off or rebooted you'll need to run the exploit again.

**Q: What does this provide over the RGH Hack/should I use this instead of RGH?**  
A: This is a software only exploit that doesn't require you open your console or perform any soldering to use. Other than that it's inferior to the RGH exploit in every way and should be considered a "proof of concept" and not something you use in place of RGH.

**Q: Can this be turned into a softmod?**  
A: No, the Xbox 360 boot chain is very secure with no attack surface to try and exploit. There will never exist a software only boot-to-hacked-state exploit akin to a "softmod".

**Q: Does this work on winchester consoles?**  
A: Yes it has been confirmed to work on winchester consoles.

**Q: I ran the exploit and nothing happened?**  
A: The exploit has a 80% success rate. If after running for 3-5 minutes the exploit hasn't triggered you'll need to reboot your console and try again.

**Q: Why does the exploit only run a single unsigned xex?**  
A: My goal was to hack the hypervisor, not to develop a robust all-in-one homebrew solution. Someone else will need to develop a post-exploit executable that patches in all the quality of life things you would get from something like the RGH exploit.
