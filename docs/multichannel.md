# Audio Lab Multi-channel System

# Overview

The multi-channel audio system in the IDM audio lab consists of **an 8+1 system** - 8 full-range speakers, 1 subwoofer - arrayed in a *double quad* configuration. Each corner of the lab has a full-rangee speaker high in the ceiling and low near the floor. The subwoofer is at floor level in one corner of the room. 

The room layout below shows the speaker positions and audio channel numbers - for reeference, the control room is at the bottom of the plan.

<img src = "./img/audiolab_speakers.png" width="75%" title="Audio Speaker Positions" alt="Audio Speaker Positions">

As the image above shows, the full-range speakers are numbered 1-8 and the subwoofer is numbered 17. The red-colored speakers (1, 3, 5, 7) are at ceiling level and the blue-colored speakers (2, 4, 6, 8, and 17) are near the floor.

The audio for the multi-channel system is controlled by an equipment rack in the closet at the back of the room. The top of the rack consists of a [Furman power conditioner](https://www.furmanpower.com/) and two audio interfaces - a [MOTU 16A](https://motu.com/products/avb/16a) and a [MOTU 828mk3](https://cdn-data.motu.com/manuals/firewire-usb-audio/828mk3_Hybrid_Manual_Mac.pdf). The bottom of the rack contains a pair of [QSC](https://www.qsc.com/) 8-channel power amplifiers.

# Interfaces

![Multi-Channel System Interfaces](./img/audiolab_racktop.jpg "Multi-Channel System Interfaces")

To work with the multi-channel system, **use the power switch on the Furman** to turn on the interfaces. *DO NOT SWITCH OFF THE INTERFACES INDIVIDUALLY.*

The audio interfaces are connected to one another via optical cablee, with the 16A as the primary interface.

**You connect to the entire system using the USB cable connected to the 16A**, coiled on the shelf to the right. *Do NOT connect a computer directly to the 828mk3*; it is configured as an expander and acts like an extra set of channels for the 16A.

<img src = "./img/audiolab_usb.jpg" width="50%" title="USB input for MOTU 16A" alt="USB input for MOTU 16A">

To work with the system, you will need to download and install the [MOTU AVB / Pro Audio Installer](https://motu.com/download) for your operating system. This will allow your computer to recognize the 16A interface.

**The system is designed to work at a 48kHz sampling rate**. If you are using a DAW that allows you to select a different rate for the 16A, you may encounter problems using the subwoofer or the mic inputs on the 828. The interfaces list 48 as their sampling rate when operating normally:

<img src = "./img/audiolab_motu.jpg" width="50%" title="Interface Close-Up" alt="Interface Close-Up">

# Amplifiers

The full-range speakers are amplified by a pair of 8-channel power amplifiers at the bottom of the equipment rack. **Only the bottom amplifier is currently in use.**

![Multi-Channel System Amps](./img/audiolab_amps.jpg "Multi-Channel System Amps")

In addition to the interfaces, you will need to **turn on the bottom amplifier** to work with the system.

# Computer I/O

The MOTU 16A provides 16 channels of audio I/O into your computer. The 828mk3 acts as an expander, adding another 8 channels.

16A Outputs:
• Channels 1-8 are the full range speakers in the room.
   • The high speakers are channels 1,3,5,7.
   • The low speakers are channels 2,4,6,8.
• Channel 17 is the subwoofer, via an ADAT link to Main Out L on the 828mk3.

16A Inputs:
• Channels 17-18 are linked via ADAT to the Mic/Instr inputs 1 and 2 on the front panel of the 828mk3. The Mic/Instr Jacks on the front of the 828mk3 allow you to connect mic or line-level audio sources in the room; they appear as inputs 17-18 on the 16A.

To use the 16A, you need to make sure your audio software has it selected as an audio interface. In Max/MSP, your Audio Status window should look like this:

<img src = "./img/audiolab_maxstatus.png" width="50%" title="Max Audio Status" alt="Max Audio Status">

To send outputs to the different speakers, you would use output channels 1-8 and 17 (for the subwoofer). Similarly, inputs 17 and 18 listen to the front-panel inputs on the 828mk3. In Max/MSP, your **adc~** and **dac~** objects can be assigned to read and write audio to specific channels:

![Max Patch Output](./img/audiolab_outputpatch.png "Max Patch Output")

The [testpatches](https://github.com/IDMNYU/audiolab/tree/master/testpatches) folder of this Github repo has a number of patches to help you test the system.

[return to main page](./index.md)
