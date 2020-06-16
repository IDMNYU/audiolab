<a name="top"></a>
# The IDM Analog Synthesizers

- [Overview](#overview)
- [Studio Basics](#studio-basics)
- [The Synthesizers](#the-synthesizers)
  - [Glossary](./glossary.md)
  - [Serge system](./serge.md)
  - [ARP 2600 system](./arp.md)

# Overview

![Analog Studio Panorama](./img/analog_overview.jpg "Analog Studio Panorama")

IDM has a collection of analog synthesizers for the users of the Audio Lab to work with, set up as a self-contained studio in the corner of the room. The studio has two main types of synthesizers, based on the 1970s-era designs of Serge Tcherepnin ([**Serge**](https://en.wikipedia.org/wiki/Serge_synthesizer)) in California and Alan Robert Pearlman ([**ARP**](https://en.wikipedia.org/wiki/ARP_Instruments)) in Massachusetts. The two systems are decribed in these pages. Our collection includes:

- a large (5-panel) Serge modular system built for IDM by [Patch Point](https://www.patch-point.com/) in Berlin, using PCBs designed by [Random\*Source](http://randomsource.net/) based on the "4th Generation" Serge systems from 1979-1980.
- a smaller (2-panel) Serge modular system built by [Luther Bradfute](https://www.lbradfute.com/) in Tennessee based on the [73-75](http://www.73-75.com/) project by [The Human Comparator](http://www.thehumancomparator.net/) in Stockholm. This synthesizer uses the designs from the original 1973 Serge modular systems developed at CalArts.
- two panels of modules by noted synthesizer designer [Ian Fritz](http://ijfritz.byethost4.com/), produced in Serge-compatible format by Paul Akin at [Uglysound Electronics](https://www.facebook.com/uglysoundelectronics/photos/a.541139732601896/560792510636618/?type=1&theater). 
- two Serge-format panels based on Ken Stone's [CGS modules](https://www.elby-designs.com/webtek/cgs/cgs.htm): a [Black Swamp](https://www.muffwiggler.com/forum/viewtopic.php?t=147603) panel designed by Jon Peters, based on the CGS [SWAMP](https://www.modulargrid.net/s/cgs-swamp), built by Charlie Kerr at [Loudest Warning](http://www.loudestwarning.co.uk/); and a 16-stage CGS [Programmer Sequencer](https://www.elby-designs.com/webtek/cgs/cgs359/cgs359.htm) designed and built by Finlay Shakespeare at [Future Sound Systems](http://futuresoundsystems.co.uk/).
- the [Shelfisizer](https://github.com/IDMNYU/shelfisizer), a set of Arduino-based Serge-compatible modules designed and built by Luke.
- a [Vermona DRM1 MKIII](https://www.vermona.com/en/products/drums-percussion/product/drm1-mkiii/) analog drum synthesizer, with a custom patchbay built by Luke to interface with the Serge system.
- a [TTSH](http://build.thehumancomparator.net/), an open-source reimagining of the 1971 ARP 2600, designed by The Human Comparator and custom-built for Luke by Patch Point.
- an [Etherwave Plus](https://www.moogmusic.com/products/etherwave-plus-theremin), a modern kit [Theremin](https://en.wikipedia.org/wiki/Theremin) developed by [Moog Music](https://www.moogmusic.com/).
- a [Prophet-6 Desktop](https://www.sequential.com/product/prophet-6-desktop/) 6-voice analog synthesizer, developed by [Sequential](https://www.sequential.com/) as a modern reissue of their famed [Prophet-5](https://en.wikipedia.org/wiki/Prophet-5) synthesizer from 1978.

In addition, some auxiliary equipment exists in the Audio Lab to help people work with the synthesizers:
- A [Behringer UFX-1204](https://www.behringer.com/Categories/Behringer/Mixers/Analog/UFX1204/p/P0AB2) Mixer with USB output for recording.
- A [MOTU 8A](https://motu.com/products/avb/8a) DC-coupled Audio Interface with a custom-built banana-jack patchbay.
- A [MOTU Micro Express](https://motu.com/products/midi/micro_usb) [MIDI](https://en.wikipedia.org/wiki/MIDI) interface.
- A vintage [IVL Pitchrider 4000](https://www.ivlaudio.com/home) pitch-to-MIDI converter.
- An [Arturia KeyStep](https://www.arturia.com/keystep/overview) MIDI keyboard controller.
- A [Roli Seaboard](https://roli.com/products/seaboard) MIDI/[MPE](https://www.midi.org/articles-old/midi-polyphonic-expression-mpe) keyboard controller.
- Two [CV.OCD](https://six4pix.net/product/cvocd/) MIDI-to-Control Voltage converters, as well as a [Gate Boost](https://www.tindie.com/products/hotchk155/gate-boost-module-for-cvocd-and-others/) module.
- Multiple [Low-Gain Electronics](http://lowgain-audio.com/) passive converter boxes.
- Three vintage [B&K oscilloscopes](https://en.wikipedia.org/wiki/Oscilloscope_history) - two model 1470s, one model 1479B.
- One [Siglent](https://www.siglent.eu/siglent-sds1072cml-plus.html) digital two-channel oscilloscope.
- a [Phenol](https://www.kilpatrickaudio.com/?p=phenol), a low-cost, Serge-compatible modular synthesizer developed by [Kilpatrick Audio](https://www.kilpatrickaudio.com/) used in the audio lab for prototyping new circuits.
- Stereo [Genelec](https://www.genelec.com/) speakers.

# Studio Basics

First, please remember to read the IDM Audio Lab [**Policies, Rules, and Room Reservation Procedure**](./rules.md). 

### Power

The power for *everything* in the analog studio is controlled by two switches, found on the Furman power conditioners on the black racks to the right:
![Furman Power Conditioner](./img/analogpower.jpg "Furman Power Conditioner")
A green light on each conditioner will confirm that you've got power.
**Please use these power switches (and nothing else) to turn on and off all the equipment in the analog studio.**

### Mixer

The mixer for the analog studio is a Behringer UFX-1204, which takes inputs from the various synthesizers and feeds them to the speakers or, by using a USB connector, to your computer for recording.

![Analog Studio Mixer](./img/ufxmixer.jpg "Analog Studio Mixer")

The first four channels of the mixer are mono, and are wired to:

| Channel  | Input     |
| ------------- | --- |
| 1            | the left output of the "Stereo Mixer" module on Panel 1 of the R\*S Serge. |
| 2            | the right output of the "Stereo Mixer" module on Panel 1 of the R\*S Serge. |
| 3            | the output of the "XFader" module on Panel 3 of the R\*S Serge. |
| 4            | the top output on the "Adapter" module on the 73-75 Serge. |


The rest of the mixer consists of 8 additional inputs in stereo pairs and are wired to:

| Channel  | Input     |
| ------------- | --- |
| 5/6            | the left and right outputs of the "DONKS" module on Panel 5 of the R\*S Serge. |
| 7/8            | the left and right output of the TTSH Mixer section. |
| 9/10           | the stereo output of the Vermona DRM1 drum synthesizer. |
| 11/12          | the output of the Theremin. |

In addition, a cable is connected to the mixer's "CD/tape input" RCA jacks that ends in a stereo 3.5mm / 1/8" \* jack for a laptop connection.

> \* *Audio connector trivia*: mini-phone jacks have a diameter of 3.5mm, which is 0.14in, *not* 0.125in (1/8"). In the USA, they are incorrectly referred to as 1/8" jacks because (a) the USA has a [cultural aversion to the metric system](https://www.youtube.com/watch?v=N0U-XEmKPKg) and (b) they look to be about half the size of 1/4" jacks.

**Please don't re-plug the synthesizer channels on the mixer.**

The MUTE buttons on each channel reroute the audio to a secondary ("Alt 3-4") output. The left ("Alt 3") output of this secondary audio bus is connected to one of the Low-Gain converter boxes, so that you could, for example, connect an electric guitar to the mixer, "mute" its channel, and then connect it to the Serge system.

The USB output of the mixer has a cable connected for your use. If you connect it up to your computer, you can record the output of the synthesizers. The mixer shows up as a multi-channel audio interface, with the input channels on the mixer routed on a per-channel basis (e.g. *input channel 3* on the mixer comes into your computer as *input channel 3* of the interface). The "Main Mix" output of the mixer appears on channels 15-16. 

If you are a Mac user, you won't need a driver for the mixer, though you should confirm that you have a connection by looking in the "Audio MIDI Setup" or "Sound" panel under your System Preferences. If you are using a Windows machine, you will have to download and install an ASIO driver for the mixer [here](https://www.behringer.com/Categories/Behringer/Mixers/Analog/UFX1204/p/P0AB2/Downloads).

The mixer can send your computer audio either pre- or post-fader (which includes not only the channel level, but also the internal effects and equalization). The red button at the top of the channel below the white Gain knob lets you set this option. In general, the pre-fader (button up) option will give you a cleaner signal, allowing you to post-process the audio once you've recorded it.

The "Main Mix" of the mixer routes the audio to the two Genelec audio speakers in the analog studio area. They should let you listen to the synths with plenty of volume, so **please don't adjust the gain controls on the Genelecs**.

[back to top](#top)

[return to main page](./index.md)
