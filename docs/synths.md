# The IDM Analog Synthesizers

- [Overview](#overview)
- [Studio Basics](#studio-basics)
- [The Synthesizers](#synthesizers)
  - [Serge system overview](#serge-system-overview)
  - [Random Source Serge](#random-source-serge)
  - [73-73 Serge](#73-75-serge)
  - [Shelfisizer](#the-shelfisizer)

# Overview

![Analog Studio Panorama](./img/analog_overview.jpg "Analog Studio Panorama")

IDM has a collection of analog synthesizers for the users of the Audio Lab to work with, set up as a self-contained studio in the corner of the room. These include:

- a large [Serge modular system](https://en.wikipedia.org/wiki/Serge_synthesizer) built for IDM by [Patch Point](https://www.patch-point.com/) in Berlin, based on PCBs designed by [Random Source](http://randomsource.net/).
- a smaller Serge modular system built by [Luther Bradfute](https://www.lbradfute.com/) in Tennessee based on the [73-75](http://www.73-75.com/) modular system designed by [The Human Comparator](http://www.thehumancomparator.net/) in Stockholm.
- the [Shelfisizer](https://github.com/IDMNYU/shelfisizer), a set of Arduino-based Serge modules designed and built by Luke.

In addition, a number of additional bits and pieces exist in the Audio Lab to help people work with the synthesizers:
- A [Behringer UFX-1204](https://www.behringer.com/Categories/Behringer/Mixers/Analog/UFX1204/p/P0AB2) Mixer with USB output for recording.
- A [MOTU 8A](https://motu.com/products/avb/8a) DC-coupled Audio Interface with a custom-built banana-jack patchbay.
- A [MOTU Micro Express](https://motu.com/products/midi/micro_usb) MIDI interface.
- A vintage [IVL Pitchrider 4000](https://www.ivlaudio.com/home) pitch-to-MIDI converter.
- A [CV.OCD](https://six4pix.net/product/cvocd/) MIDI-to-Control Voltage converter.
- Multiple [Low-Gain Electronics](http://lowgain-audio.com/) passive converter boxes.
- Three vintage [B&K oscilloscopes](https://en.wikipedia.org/wiki/Oscilloscope_history) - two model 1470s, one model 1479B.
- Stereo Genelec speakers.

# Studio Basics

### Power

The power for *everything* in the analog studio is controled by a single switch, found on the Furman power conditioner on the black rack to the right:
![Furman Power Conditioner](./img/analogpower.jpg "Furman Power Conditioner")
A green light on the conditioner will confirm that you've got power.
**Please use this power switch (and nothing else) to turn on and off all the equipment in the analog studio.**

### Mixer

The mixer for the analog studio is a Behringer UFX-1204, which takes inputs from the various synthesizers and feeds them to the speakers or, by using a USB connector, to your computer for recording.
![Analog Studio Mixer](./img/ufxmixer.jpg "Analog Studio Mixer")
The first four channels of the mixer are mono, and are hard-wired to:
1. the left output of the "Stereo Mixer" module on the Random Source Serge (the rightmost module on the top panel)
2. the right output of the "Stereo Mixer" module on the Random Source Serge (the rightmost module on the top panel)
3. the output of the "XFader" module on the Random Source Serge (the rightmost module on the 3rd panel)
4. the top output on the "Adapter" module on the 73-75 Serge (the rightmost module on the bottom panel)

The rest of the mixer consists of 8 additional inputs in stereo pairs (5/6, 7/8, 9/10, 11/12). Channels 5/6 have a cable connected that ends in a stereo 1/8" jack so you can connect the analog output of your laptop.

The Mute buttons on each channel reroute the audio to a secondary ("Alt 3-4 Output"). The left ("Alt 3") output of this secondary audio bus is connected to one of the Low-Gain converter boxes, so that you could, for example, connect an electric guitar to the mixer, "mute" its channel, and then connect it to the Serge system.

The USB output of the Mixer has a cable connected for your use. If you hook it up to your computer, you can record the output of the synthesizers. The mixer shows up as a multi-channel audio interface, with the input channels on the mixer routed on a per-channel basis (e.g. *input channel 3* on the mixer comes into your computer on *input channel 3* of the interface), and with the "Main Mix" of the mixer coming in on channels 15-16. 

If you are a Mac user, you won't need a driver for the mixer, though you should confirm that you have a connection by looking in the "Audio Midi Setup" or "Sound" panel under your System Preferences. If you are using a Windows machine, you will have to download and install an ASIO driver for the mixer [here](https://www.behringer.com/Categories/Behringer/Mixers/Analog/UFX1204/p/P0AB2/Downloads).

The mixer can send your computer audio either pre- or post-fader (which includes not only the channel level, but also the internal effects and equalization). The red button at the top of the channel below the white Gain knob lets you set this option. In general, the pre-fader (button up) option will give you a cleaner signal, allowing you to post-process the audio once you've recorded it.

The "Main Mix" of the mixer routes the audio to the two Genelec audio speakers in the analog studio area. They should let you listen to the synths with plenty of volume, so please don't adjust the gain controls on the Genelecs.

# The Synthesizers

## Serge System Overview

## Random Source Serge

## 73-75 Serge

## The Shelfisizer




[return](./index.md)
