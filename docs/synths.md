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

- a large (4-panel) Serge modular system built for IDM by [Patch Point](https://www.patch-point.com/) in Berlin, using PCBs designed by [Random Source](http://randomsource.net/) based on the "4th Generation" Serge systems from 1979-1980.
- a smaller (2-panel) Serge modular system built by [Luther Bradfute](https://www.lbradfute.com/) in Tennessee based on the [73-75](http://www.73-75.com/) modular system designed by [The Human Comparator](http://www.thehumancomparator.net/) in Stockholm. This synthesizer uses the designs from the original 1973 Serge modular systems developed at CalArts.
- the [Shelfisizer](https://github.com/IDMNYU/shelfisizer), a set of Arduino-based Serge-compatible modules designed and built by Luke.

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

![Serge Modular System in use](./img/serge_patched.jpg "Serge Modular System in use")

[Serge synthesizers](https://en.wikipedia.org/wiki/Serge_synthesizer) are analog modular synthesizers that incorporate the  designs of [Serge Tcherepnin](https://en.wikipedia.org/wiki/Serge_Tcherepnin). Tcherepnin, while working at CalArts in the 1970s, developed his line of modular synthesizers after meeting with [Don Buchla](https://en.wikipedia.org/wiki/Don_Buchla) and working with composer [Morton Subotnick](https://en.wikipedia.org/wiki/Morton_Subotnick). Tcherepnin realized that contemporary modular synthesizers were far too expensive to be affordable for students and hobbyists, and so he set out to develop a modular system that was low cost and emphasized flexibility. Tcherepnin made a number of innovative decisions to keep costs down, such as the use of (cheaper) banana jacks instead of audio connectors, and the ["paperfacing"](http://djjondent.blogspot.com/2013/12/two-panel-vintage-paperface-serge.html) of his synthesizer panels so that the aluminum  could be pre-drilled in a grid regardless of the customer's desired module configuration.

In addition, unlike many of his competitors, Serge also sold his systems as *kits*, where the customer would receive a circuit board, a face plate and decal label, a Ziploc bag of discrete electronic components, and detailed assembly instructions. This DIY approach - similar to [HeathKit radios](https://shop.heathkit.com/page/homepage) popular at the time - allowed Serge systems to be purchased for a fraction of the cost of a Buchla system if the buyer didn't mind doing some soldering. Many licensed Serge systems today are still sold as kits, with a number of builders, such as our friends at [Patch Point](https://www.patch-point.com/) in Berlin, available to professionaly assemble the kits into finished synthesizers using high quality components.

Tcherepnin's designs found commercial success as a low-cost alternative to other modular synthesis systems available at the time. His company (Serge Modular Music Systems) sold synthesizers under the **Serge** name until 1986. After that, Tcherepnin licensed his designs *non-exclusively* to a number of manufacturers, such as [Sound Transform Systems](http://www.serge-fans.com/prices.html) in the USA, [Elby Designs](https://www.elby-designs.com/index.html) in Australia, [Random Source](http://randomsource.net/) in Germany, [the Human Comparator](http://73-75.com) in Sweden, and [Loudest Warning](http://loudestwarning.co.uk) in the UK. In addition, a number of synthesizer designers, such as [Bugbrand](https://bugbrand.co.uk), [Modcan](http://www.modcan.com/), [Ciat-Lonbarde](https://ciat-lonbarde.net), and [Kilpatrick Audio](http://kilpatrickaudio.com/), continue to develop new synths using a Serge-inspired or Serge-compatible format.

The [Serge-Fans](http://www.serge-fans.com/history.htm) web page (which doubles as an information site for Sound Transform Systems) is a great resource to learn more about the history of these synthesizers. In addition, there's a nice video interview with Tcherepnin [here](https://www.youtube.com/watch?v=To_gkk9GEpQ).

### What makes a Serge a Serge?

Serge synthesizers have a number of technical characteristics that set them apart from other modular systems of their day, as well as modern modular synthesizers that use the [Eurorack](https://en.wikipedia.org/wiki/Eurorack) format:
- Serge synthesizers are designed to be arrayed horizontally into panels that are **4U** (four [rack units](https://en.wikipedia.org/wiki/Rack_unit)) high, the same as [Buchla](https://en.wikipedia.org/wiki/Buchla_Electronic_Musical_Instruments) systems but distinct from [Moog](https://en.wikipedia.org/wiki/Moog_synthesizer) systems (5U) or Eurorack systems (3U). As a result of this sizing standard, Buchla- and Serge-style synthesizers are sometimes referred to generically as "4U" modular systems.
- Serge systems use **4mm [banana connectors](https://en.wikipedia.org/wiki/Banana_connector)** for all their patchcord connectivity, with a common [ground connection](https://en.wikipedia.org/wiki/Ground_(electricity)) used across all the modules in the system. The use of single conductor wires means that, when patching with a Serge, you're connecting the positive current wire only. This is in contrast to most other modular systems, which use two-conductor audio cables such as 1/8" / 3.5mm [phone jacks](https://en.wikipedia.org/wiki/Phone_connector_(audio)) for connectivity. Serge modules (and other  synths that use banana jacks) tend to work with lower impedance signals to mitigate the cross-talk that occurs from the modules' audio circuitry all sharing the same ground plane.
- Tcherepnin designed his synthesizers with **no systemic distinction between "audio" and "control voltages"**. This was a fairly radical departure from contemporary systems, which either had separate modules for generating different types of signals (Moog) or used different cabling standards to keep different kinds of voltages separate (Buchla). In Serge systems, an oscillator could be listened to, or slowed down below 20Hz to create a time-varying [low-frequency oscillator](https://en.wikipedia.org/wiki/Low-frequency_oscillation). By a similar token, Serge modules that generated ramps, triggers, random signals, and even voltage sequences could be sped up to audio rate to generate triangle waves, square waves, noise, or arbitrary waveforms. Instead of dictating the *use* of any given signal generated by the synthesizer, Serge systems distinguish between the *type* of voltage generated - AC, DC, or trigger - without implying how it should be patched and at what frequency it should be used.
- Serge modules often perform multiple functions depending on which connections are active. For example, envelope generators in Serge systems can also be wired to function as oscillators, envelope followers, filters, or gates. Tcherepnin referred to this feature of his synthesizers as **"patch programmability"**, and this flexibility is considered to be one of the hallmarks of Serge modular systems. The Serge [Dual Universal Slope Generator](https://www.elby-designs.com/webtek/cgs/serge/cgs114/cgs114_dusg.html) from 1976 epitomizes this sensibility, and there are several Eurorack modules on the market (e.g. MakeNoise [MATHS](http://www.makenoisemusic.com/modules/maths) and the Befaco [Rampage](https://www.befaco.org/en/rampage/)) that feature similar multiuse capabilities.

In terms of overall design, Serge modular systems are considered, alongside Buchla, to be classic ["West Coast"](https://reverb.com/news/the-basics-of-east-coast-and-west-coast-synthesis) synthesizers:
- They feature a (comparably) large selection of heterogenous modules, to encourage experimentation through a limitless variety of possible connections. This is in contrast to "East Coast" synthesizers which tend to feature oscillators, filters, and amplifiers that are usually patched in sequence and triggered synchronously.
- They emphasize distortion - frequency and ring modulation, waveshaping - as a synthesis technique to make richer harmonic content from simple waveforms, as opposed to the subtractive synthesis used in "East Coast" synthesizers, with their emphasis on ladder filters shaping harmonically rich oscillators.
- They offer sequencing and other automatic clock-based behaviors, as well as modules that avoid specific musical conventions but can be used for musical effects, such as sample-and-hold modules and clock dividers. This is in lieu of the Western keyboard-centric performance setups common in "East Coast" synthesizers.

### Interface standards

Serge synthesizers are made up of **modules** that are 4U (7") tall and multiples of 1" wide. Most (but not all) Serge systems group modules into a single aluminum enclosure (called a "panel" or "boat") that contains up to 16 inches worth of modules and has a single power connector on the rear. The separation between individual modules on a panel is indicated by the panel graphics, usually with a module's name at the top or bottom, and a visual indicator such as a black rounded rectangle or a gap in the decal around the module.

<img src = "./img/serge824_NTO.jpg" width="50%" title="Serge individual module photo" alt="Serge individual module photo">

Modules may have **inputs**, **outputs**, or both, depending on their function. In general, outputs on Serge synthesizers appear *above* and/or *to the right* of the inputs, and are usually visually indicated on the panel graphics. In the image above, the lower portion of the module (where the knobs are) contain the inputs, while the upper area (bounded by a rectangle) contain the output jacks.

Interface elements on Serge modules consist of jacks (points of connection), LEDs, knobs, toggle switches, push buttons, and, on the TKB module, capacitive touch strips. Interface elements are usually labeled.

Jacks are colored based on the type of voltage they send (or expect to receive). Tcherepnin's original design called for three types of voltage connection with color codes:

| Voltage Type  | Description     | Voltage Range | RS     | 73-75 | Shelfisizer |
| ------------- | --- |           ---            |     ---|    ---|          ---|
| AC            | Bipolar continuous (analog) | -2.5V to 2.5V | Black | Brown | Black |
| DC            | Unipolar continuous (analog) | 0 to 5V       | Light Blue | Light Grey | Dark Blue |
| Trigger       | Unipolar discrete (digital) | 0 *or* 5V      | Red | Red | Red |

Some modules have additional colors, such as lavender jacks for passive connectors on the 73-75 Adaptor module and orange for the AC-coupled (-5V or 5V) comparator jack on the Random Source Smooth/Stepped Generator module.

As noted above, these conventions describe the kind of voltage being delivered, not *how* you're going to use it. As in the image above, the output area of the module has black, blue, and red jacks, but all of them can be used to generate either audio patched into the speakers or control voltage patched into another module.

Patching the output of a module delivering one type of voltage into a module jack that expects a *different* type can have unpredictable results. In general, patching a blue (DC) jack into a black (AC) jack will work as expected, though some modules (such as the voltage-controlled filters) are designed to only modify signals in the audio range, so a slow-moving DC signal may end up getting filtered out. Patching a black (AC) source into a blue (DC) destination may have unusual results - the negative voltage in the signal may end up getting clipped to 0V or rectified (flipped into positive voltage). Modules that expect triggers (red jacks) will "fire" when an AC or DC voltage source from a black or blue jack crosses above 2.5V or so, but processing voltage from a trigger source (red jack) through a DC or AC processing module may transform the signal in a way that eliminates its ability to trigger anything.

Serge modules use small knobs to control parameters, often in conjunction with control voltage. Knobs that *scale* (multiply) an input voltage and knobs that *offset* (add to) an input voltage are distinguished on the panel graphics. Serge scalar knobs are usually *bipolar* and can apply negative scaling by moving the knob to the left. The zero (12 o'clock) position scales the incoming voltage to 0.

Serge modules that work with frequency as a parameter (oscillators, filters, slope generators) often have CV inputs for both linear frequency (scaled by a knob) and [1V/OCT](https://en.wikipedia.org/wiki/CV/gate) standard control voltage, allowing the module to be accurately tuned and played by, e.g. a MIDI-to-CV converter. 

Modules are connected by **patching** within and between module jacks using banana cables.

<img src = "./img/serge_patched2.jpg" title="Serge modules patched together" alt="Serge modules patched together">

Banana cables can be stacked by inserting one cable into the back or side of another. The cables in the IDM Audio Lab are stored against the wall to the left of the analog studio area, and are color-coded by length.

<img src = "./img/pomonacables.jpg" width="25%" title="Banana patch cables" alt="Banana patch cables">

In addition, a box labeled "shorting bars!!!" contain small plastic blocks with two banana connectors that can be used to connect two adjacent jacks on most Serge modules.

<img src = "./img/shortingbars.jpg" width="25%" title="Box of shorting bars" alt="Box of shorting bars">

As mentioned above, patching using banana jacks means that you're only connecting the positive (+) end of the audio signal. The negative (-) signals are fed among the sythesizers using common grounding wires. In the analog studio, these are visible as gray banana cables strung around the backs (and sometimes the front) of the equipment. These cables link together the modular synthesizers, the patchbay to the 8A audio interface, the format converter boxes, and the oscilloscopes.

<img src = "./img/groundjack.jpg" width="50%" title="Grounding cable on the rear of the Shelfisizer" alt="Grounding cable on the rear of the Shelfisizer">

**Do not remove or replug ground wires - this may prevent the equipment from working properly.**

## Random Source Serge

<img src = "./img/serge824_photo.jpg" width="100%" title="Random Source Serge system" alt="Random Source Serge system">

The Random Source Serge was built for IDM in 2018-2019 by Darrin Wiener at Patch Point in Berlin. It's currently configured with four [Random Source "shop" panels](http://randomsource.net/serge_panels) (prebuilt configuration of modules): a La Bestia II, an Edelweiss II, a Mantra, and a TKB (Touch Activated Keyboard Sequencer). These panels incorporate the designs of modules sold by Serge Modular Music Systems sold in 1979-1980, along with a number of innovations by Random Source.

### Panel 1 (La Bestia II)

<img src = "./img/serge824_1.png" width="100%" title="Random Source La Bestia II" alt="Random Source La Bestia II">

#### New Timbral Oscillator

The **New Timbral Oscillator (NTO)** first appeared in 1976, and was (along with a simpler module called the "Precision VCO") the closest thing Tcherepnin designed to an East Coast-style [Voltage Controlled Oscillator](https://en.wikipedia.org/wiki/Voltage-controlled_oscillator).

<img src = "./img/serge824_1_1.png" width="30%" title="NTO" alt="NTO">

1. Rising sawtooth wave (DC OUTPUT)
2. Triangle wave (DC OUTPUT)
3. Sine wave (AC OUTPUT)
4. Variable waveform, controlled by *6*, *9*, *12* (AC OUTPUT)
5. Square wave / trigger (labeled "Puls") (Trigger OUTPUT)
6. CV to control the "variable" waveform of *4* (sums with *12*) (DC INPUT)
7. First 1V/Oct CV of oscillator frequency (sums with *8*, *18* x *19*, *20*, and *21*) (DC INPUT)
8. Second 1V/Oct CV of oscillator frequency (sums with *7*, *18* x *19*, *20*, and *21*) (DC INPUT)
9. Scaling knob for *6*
10. [Linear FM](https://en.wikipedia.org/wiki/Frequency_modulation_synthesis) "Modulator" signal (AC INPUT)
11. First ["Portamento"](https://en.wikipedia.org/wiki/Portamento) (frequency slew) CV (sums with *14* and *17*) (DC INPUT)
12. Adjustment for "variable" waveform of *4* (sums with *6* x *9*)
13. CV to control the amount of linear FM *10* (sums with *16*) (DC INPUT)
14. Second Portamento CV (sums with *11* and *17*) (DC INPUT)
15. [Oscillator Sync](https://en.wikipedia.org/wiki/Oscillator_sync) signal for Saw Output *1* (DC INPUT, triggers at 2.5V).
16. Manual control of the amount of linear FM *10*  (sums with *13*)
17. Manual Portamento control (sums with *11* and *14*)
18. Linear frequency CV input (scaled by *19*, sums with *7*, *8*, *20*, and *21*) (DC INPUT)
19. Scaling knob for *18*
20. Fine tuning knob for the VCO's base frequency (sums with *7*, *8*, *18* x *19*, and *21*)
21. Coarse tuning knob for the VCO's base frequency (sums with *7*, *8*, *18* x *19*, and *20*)

*Notes:*
- Four of the five waveform outputs (*1-5*) represent the standard waveforms used in classic analog subtractive synthesis (Sine, Saw, Triangle, Square), with a fifth output allowing for a variable waveform. Be aware that these outputs are **not of the same voltage type** - the Sine and Variable outputs are the only AC ones. Also note that the NTO produces mathematically accurate (as opposed to "good-sounding") oscillators, intended to be usable as source of control voltage (Saw, Triangle) and triggers ("Puls") as well as audio. As a result, the harmonically rich waveforms (especially the Saw) will sound brighter than the equivalent waveforms on, e.g. a Moog.
- The frequency control of the NTO is a summing bus of the multiple voltage inputs. If you want two different voltages interacting to control the oscillator's frequency, using *both* 1V/OCT inputs (*7* and *8*) will give you a cleaner addition of signals than stacking banana cables into one input.
- Like all Serge modules, feedback is an excellent technique to experiment with, by patching, e.g. the Sine output *3* into the modulator input for the Linear FM *10*.

#### Mixer

The **Mixer** is a utility module that allows you to mix up to three AC sources to a single output using a [high quality operational amplifier](https://www.njr.com/MUSES/) developed by NJR. The mixer is AC-coupled, so it will filter out static (and slow-moving) voltages. The DC-coupled version is called the "Control Voltage Processor".

<img src = "./img/serge824_1_2.png" width="10%" title="Mixer" alt="Mixer">

1. Mixed signal (AC OUTPUT)
2. Phase switch for first input (IN 1)
3. First mixer input (AC INPUT)
4. Second mixer input (AC INPUT)
5. Third mixer input (AC INPUT)
6. Scaling knob for *3*
7. Scaling knob for *4*
8. Scaling knob for *5*

*Notes:*
- The phase switch (*2*) is a **three-way** switch - the middle position will turn the first input signal *off*.
- The scaling knobs (*6-8*) are **logarithmic** audio pots, so 12 o'clock is half power (.707), not half gain (0.5).
- As mentioned above, this module is **AC-coupled**, so slow control voltages will be filtered. In addition, positive-biased audio rate signals will come out with their DC offset removed. For example, if you input the Saw output of the NTO into the mixer, the incoming signal (0-5V DC) will come out -2.5V to 2.5V AC.

#### Wave Multipliers

The **Wave Multipliers** module appeared in 1976 and are considered an important circuit for achieving the "West Coast" sound of the Serge modular. The module contains three self-contained distortion effects that work by shaping the amplitude of the incoming audio signal. Quoting from the 1982 Serge catalog, Tcherepnin describes the three Wave Multipliers:

> The uppermost section is the simplest of the three multiplier sections. but it has two switchable effects. With the switch 
> set at the "HI" position, the module functions to "square-up" an incoming signal. This is not the same as a simple 
> comparator squaring function, though, since there is a rounded flattening of the signal peaks: an effect somewhat similar to 
> overdriving a tube amplifier (except that in this version the process is voltage controllable!). With the switch in the "LO" 
> position, the module is a linear gain controlled VCA. This is useful for various functions such as amplitude modulation and 
> for gating signals into the other sections.
>
> The middle Wave Multiplier provides a sweep of the odd harmonics (1, 3, 5, 7, 9, 11 and 13th) when a sine wave is applied to 
> its input and the knob is turned up or a control voltage is swept from low to high. This effect is similar to overblowing a 
> wind pipe closed at one end, and thus the module can be used to produce the sounds of various wind instruments. A second 
> input is included to allow two signals to be mixed before processing, a technique that we have found to be very usable. This 
> module can be used to explore timbral areas beyond the range of ring modulation because there are more varied harmonics than 
> the sum and difference tones.
>
> The bottom Wave Multiplier performs non-linear wavehaping known as full-wave rectification, but with sophisticated level-
> compensating conditioning as well. Actually the circuit uses three full-wave rectifier sections linked in a very refined 
> controllable format. Each section can double the frequency of a sine or triangle wave applied to its input. Thus sweeping 
> the VC input over its range will produce a smooth timbral transition using the even harmonics (second, fourth, and eighth). 
> Many other partials are present in this basic sound, however, and the sonorities are very rich and varied. A notable feature 
> of this multiplier is that the full-wave rectification is not accompanied by a reduction in the output amplitude. There is 
> no alteration of the essential level of the sound. There are two inputs to provide mixing before processing, and two 
> outputs. One output is a "squared up" version of the other. This output resembles voltage controlled pulse width modulation 
> (only much more interesting). 

<img src = "./img/serge824_1_3.png" width="20%" title="Wave Multipliers" alt="Wave Multipliers">

1. CV input for Multiplier 1 amount (DC INPUT)
2. Processed output of Multiplier 1 (AC OUTPUT)
3. Scaling knob for Multiplier 1 amount
4. Signal input for Multiplier 1 (AC INPUT)
5. High/Low distortion switch for Multiplier 1
6. Processed output of Multiplier 2 (AC OUTPUT)
7. CV input for Multiplier 2 amount (DC INPUT)
8. Second signal input for Multiplier 2 (DC INPUT)
9. Scaling knob for Multiplier 2 amount
10. First signal input for Multiplier 2 (AC INPUT)
11. Second processed ("squared-up") output for Multiplier 3 (DC OUTPUT)
12. First processed output for Multiplier 3 (AC OUTPUT)
13. CV input for Multiplier 2 amount (DC INPUT)
14. Second signal input for Multiplier 3 (AC INPUT)
15. Scaling knob for Multiplier 3 amount
16. First signal input for Multiplier 3 (AC INPUT)

*Notes:*
- The first multiplier can be used in *low* mode as an ordinary [VCA](https://en.wikipedia.org/wiki/Variable-gain_amplifier), and in *high* mode as a simple "clipping" [distortion](https://en.wikipedia.org/wiki/Distortion_(music)) unit. The second multiplier emphasizes odd harmonics through [wave folding](https://www.keithmcmillen.com/blog/simple-synthesis-part-8-wavefolding/); the third emphasizes even harmonic through [full wave rectification](https://www.hackaudio.com/digital-signal-processing/distortion-effects/full-wave-rectification/).
- The second multiplier has a DC-coupled second input (*8*) which allows you to mix an LFO signal in with the input voltage to add to the distortion effect.
- Using the multipliers in series or in feedback (patching an output back into the input) can create some pretty crazy sounds.

#### Smooth / Stepped Generator #1

The **Smooth / Stepped Generator (SSG)** was designed by Tcherepnin in 1974. Along with the Dual Universal Slope Generator, it's one of the most versatile circuits in the canonical Serge system. Depending on how an SSG is patched, it can function as a [slew](https://en.wikipedia.org/wiki/Slew_rate) (envelope follower / lowpass filter), a sample-and-hold circuit, a triangle wave oscillator, or a low-pass gate. When combined with its sidecar **Noise Source** - a small circuit of three jacks - the SSG can be used to develop a wide variety of fluctuating and quantized random voltages, similar to the Buchla 266 [Source of Uncertainty](http://fluxmonkey.com/historicBuchla/266-uncertainty.htm).

The module is divided into two halves: the "Smooth" side at the top, and the "Stepped" at the bottom. In between the two, a Coupler circuit outputs a comparator voltage of the two sides. The sidecar Noise Source provides three different types of random sources to work with, either with the SSG or with other modules in the system.

<img src = "./img/serge824_1_4.png" width="22%" title="SSG" alt="SSG">

1. CV input for the Smooth sides's rate (DC INPUT)
2. CV output for the Smooth side (DC OUTPUT)
3. Scaling knob for *1*
4. Cycle trigger (sends a pulse at the end of a cycle set by the Smooth rate) (Trigger OUTPUT)
5. Knob for Smooth rate amount (sums with *1* x *3*)
6. Signal input for the Smooth side (AC INPUT)
7. Hold jack - when set high, Smooth output *2* will freeze and no longer track the module's input (Trigger INPUT)
8. Sample jack - when set high, Stepped output *14* will sample and hold Stepped input *10* (Trigger INPUT)
9. CV input for the Stepped side's rate (DC INPUT)
10. Signal input for the Stepped side (AC INPUT)
11. Scaling knob for *9*
12. Cycle trigger (sends a pulse at the end of a cycle set by the Stepped rate) (Trigger OUTPUT)
13. Knob for Stepped rate amount (sums with *9* x *11*)
14. CV output for thee Stepped module (DC OUTPUT)
15. "Hot" Coupler output - +5V if Stepped output is higher than the Smooth output; -5V if not (*AC* Trigger OUTPUT)
16. Regular Coupler output - 5V if Stepped output is higher than the Smooth output; 0V if not (Trigger OUTPUT)
17. White noise source (AC OUTPUT)
18. Pink noise source (AC OUTPUT)
19. Sample-and-hold "dirty saw" source (DC OUTPUT)

*Notes:*
- The Smooth side can easily self-oscillate in a triangle pattern by patching the cycle trigger (*4*) into the input (*6*). The rate knob and VC inputs (*5*, *1*, *3*) control the speed of this oscillation. The triangle waveform will appear at the CV output jack (*2*).
- The Stepped side will also internally self-oscillate - by patching cycle trigger *12* to input *10* and adjusting the frequency via *13*, *9*, and *11*. However, no signal will appear at output jack *14* until you send triggers into the Sample jack (*8*). These triggers can come from anywhere, e.g. from the Cycle output of the Smooth side, or from another module. This creates a classic [sample-and-hold](https://en.wikipedia.org/wiki/Sample_and_hold) circuit where the internal oscillating waveform is being "sampled" by the trigger pulse at the Sample jack and "held" as the output voltage at jack *14*.
- By a similar token, *any* input can be used on either side of the SSG. In this case, the Smooth side will work as a [low-pass filter](https://en.wikipedia.org/wiki/Low-pass_filter) with the slew (or smoothing amount) controlled by the rate; the Stepped side will sample-and-hold any input signal - simple waveforms will create different staircase effects based on the frequency difference between the incoming waveform and the "sampling" being performed.
- The sidecar Noise Source module provides ideal outputs to experiment with as inputs for either side of the SSG. The Smooth side can be used to generate slow, time-varying random voltages, while the Stepped side, when sampling a random signal, can be used to create classic "bleep-bloop" noises when patched in as the frequency of an oscillator.
- Sending an audio signal into the input (*6*) of the Smooth side of the SSG and sending an envelope into the CV input (*1*) will, depending where the rate knob (*5*) is set, allow you to use the module as a [low-pass gate](https://electronicmusic.fandom.com/wiki/Lowpass_gate), where the gain on the signal rises with the cutoff frequency of the filter. This setup is great for simulating natural sounding instruments such as percussion where the timbre brightens with the attack of the sound.
- The three Noise Source outputs generate [white noise](https://en.wikipedia.org/wiki/White_noise), [pink or 1/f noise](https://en.wikipedia.org/wiki/Pink_noise), and a "dirty saw" - a circuit designed by Tcherepnin containing a sawtooth wave that wobbles in frequency and has low-amplitude noise injected in its signal.
- The SSG is quite a complex module, and the Serge fans site has [an entire 4-page article](http://www.serge-fans.com/wiz_SSG1.htm) dedicated to patching ideas using it.

#### Dual Slopes #1

The **Dual Slopes** are the Random Source implementation of a 1976 Serge module called the **Dual Transient Generator** (some Serge licensees still use that name; STS sells a related module called the **Voltage-Controlled Timegen Oscillator**). The module consists of the circuit for a Dual Universal Slope Generator (DUSG - see below) with a simplified panel interface, optimized for generating harmonically linked oscillators and clock pulses. The module contains two sides:
- on the left, an envelope generator that's internally wired to act as a self-clocking oscillator. This outputs a falling sawtooth and a pulse (square wave) at a specified frequency. 
- on the right, a second envelope generator that can be triggered either manually or at the end of the left oscillator's slope. This side outputs a triangle wave with controllable rise and fall times.
- both sides can also act as a slew (envelope follower) on a signal input.

<img src = "./img/serge824_1_5.png" width="20%" title="Dual Slopes" alt="Dual Slopes">

1. Ramp output for the left-hand slope generator (DC OUTPUT)
2. Ramp output for the right-hand slope generator (DC OUTPUT)
3. Pulse output for the left-hand slope generator (Trigger OUTPUT)
4. Pulse output for the right-hand slope generator (Trigger OUTPUT)
5. Trigger "link switch", internally patching a trigger generated at the end of the left envelope to trigger the right envelope
6. Manual trigger input for the right-hand slope generator (Trigger INPUT)
7. Signal input to the left-hand slope generator, causing it to act as a low-pass filter / envelope follower (AC INPUT)
8. Signal input to the right-hand slope generator, causing it to act as a low-pass filter / envelope follower (AC INPUT)
9. 1V-per-octave CV input to control the self-clocking frequency of the left-hand slope generator (sums with *11*) (DC INPUT)
10. Control knob for the Rise time on the right-hand slope - a higher value is a faster rise
11. Control knob for the self-clocking frequency of the left-hand slope (sums with *9*)
12. Control knob for the Fall time on the right-hand slope - a higher value is a faster fall
13. CV input to control the Fall time on the left-hand slope (scaled by *15*) (DC INPUT)
14. CV input to control either the Rise or Fall time on the right-hand slope (scaled by *16*) (DC INPUT)
15. Scaling knob for *13*.
16. Scaling knob for *16*.
17. Switch to set whether *14* x *16* controls the Rise or the Fall on the right-hand slope.

*Notes:*
- A very common use of the Dual Slopes is as a **master clock**. The pulse outputs (*3* and *4*) can be used to drive the Sequencer / Programmer, the TKB, the "sample" on an SSG, or the trigger inputs on slope generators and filters.
- The Dual Slopes module highlights Tcherepnin's design mantra that the *distinction between control voltage and audio-rate signals is an artificial one*. The module can generate low frequency ramps and pulse trains, as well as audio-rate waveforms.
- The Dual Slopes module is optimized to leverage a side effect of Serge (and other "West Coast") envelope generators: an envelope, once triggered, *can't be retriggered until it has finished its cycle.* As a result, if the right side of the Dual Slopes has a rise and fall time that's greater than the interval the left side is clocking at, the right-hand slope generator will act as a **frequency divider**, triggering its waveform at 1/2, 1/3, 1/4, etc. of the leeft side's frequency. To hear this effect, turn the left-hand oscillator up to audio rate, turn on the trigger link switch, and listen to the pulse outputs generated by the right (*4*). By manipulating the rise and fall times of the right-hand slope (*10* and *12*), you can generate a [subhamonic series](https://en.wikipedia.org/wiki/Undertone_series) of the left side's frequency.

#### Variable Slope Voltage Controlled Filter

Tcherepnin avoided implementing standard audio filters like those found on Moog and ARP synthesizers until 1976, preferring instead to focus on slews, comparators, waveshapers, and other circuits that felt to him more natural as a designer. The **Variable Slope Voltage Controlled Filter (VCFS)** is a 12dB/octave [state-variable filter](https://en.wikipedia.org/wiki/State_variable_filter) that allows for voltage control over the slope of the filter, as well as its frequency. 

<img src = "./img/serge824_1_6.png" width="20%" title="Variable Slope VCF" alt="Variable Slope VCF">

1. Bandpass filter output (AC OUTPUT)
2. High-pass filter output (AC OUTPUT)
3. Low-pass filter output (AC OUTPUT)
4. Filter input 1 (AC INPUT)
5. Filter input 2 (AC INPUT)
6. Mix knob to control the blend between inputs 1 and 2
7. Q knob for the ["quality"](https://en.wikipedia.org/wiki/Q_factor) (resonance) of the filter. This interacts with the slope to generate the specific behavior of the filter.
8. 1-volt-per-octave CV input to control the filter frequency (sums with *10* x *12* and *14*) (DC INPUT)
9. Voltage control input for the filter's slope (scaled by *11* and summed with *13*) (DC INPUT)
10. VC input for linear control of the filter frequency (scaled by *12* and sums with *8* and *14*)
11. Scaling knob for *9*.
12. Scaling knob for *10*.
13. Knob to set the base slope of the filter
14. Knob to set the base frequency of the filter

*Notes:*
- Patching an envelope signal into either the 1V/OCT (*8*) or linear frequency inputs (*10*) allows you to use the VCFS as a low-pass gate.
- Dynamically adjusting the slope of the VCFS using the CV input *9* using a slow-moving control voltage is a great way to make a filter effect that sounds natural.
- Patching the bandpass output *1* back into the filter at input 2 (*5*) with a separate input signal at input 1 (*4*) will create a resonant ["comb"](https://en.wikipedia.org/wiki/Comb_filter) at the filter's frequency, where the strength of the effect can be varied with the mix control (*6*).

#### Variable Q Voltage Controlled Filter #1

The **Variable Q Voltage Controlled Filter (VCFQ)**, sometimes referred to as the **Variable Resonance Filter**, is a 12dB/octave 2-pole state-variable filter that features low-pass, high-bass, band-pass, and band-reject outputs, voltage control over frequency and Q (resonance) of the filter, and multiple inputs, include one with automatic gain control and a trigger input that generates an impulse into the filter. The VCFQ is an **extended range** design, with a switch that allows it to filter sub-audio control voltage signals.

<img src = "./img/serge824_1_7.png" width="20%" title="Variable Q VCF" alt="Variable Q VCF">

1. Bandpass filter output (AC OUTPUT)
2. High-pass filter output (AC OUTPUT)
3. Notch (band-reject) filter output (AC OUTPUT)
4. Low-pass filter output (AC OUTPUT)
5. Filter input (AC INPUT)
6. Filter input with automatic gain control (AC INPUT)
7. Pulse input to "ring" the filter - output will be the impulse response (Trigger INPUT)
8. High/Low switch to choose the range of the filter between audio ("HIGH") and sub-audio ("LOW") frequencies
9. 1-volt-per-octave CV input to control the filter frequency (sums with *11* x *13* and *15*) (DC INPUT)
10. Voltage control input for the filter's Q (summed with *12*) (DC INPUT)
11. VC input for linear control of the filter frequency (scaled by *13* and sums with *9* and *15*)
12. Knob to set the base Q of the filter
13. Scaling knob for *11*
14. Gain control knob for the filter
15. Knob to set the base frequency of the filter

*Notes:*
- the VCFQ can [self-oscillate](https://en.wikipedia.org/wiki/Self-oscillation) by patching the band-pass output (*1*) into the input (*5*). As you increase the Q, the band-pass output will approach a sine wave. The various outputs of the filter will be 90 degrees out of phase with one another.
- the trigger input *7* can be used to generate filtered percussion straight from a clock source.
- the LOW (extended range) mode of the filter allows you to modify control voltage to get filter-like characterists, e.g. ringing cause by high resonance in the filter.
- the Serge fans site has an explanation of [how to use two VCFQs](http://www.serge-fans.com/wiz_filt.htm) in series as a Moog-style 4-pole filter.

#### Stereo Mixer

The **Stereo Mixer** is Random Source's take on Tcherepnin's **Dual Channel Stereo Mixer (DCSM)** developed in the early 1980s. First and foremost, the module has 1/4" TRS jacks to output to non-Serge audio equipment - in the IDM analog studio it's wired to inputs 1 and 2 on the Behringer mixer. The module allows for voltage-controlled panning of its two inputs into a stereo output; it also allows for voltage control of the two input channel gains, allowing it to be used as a **Dual VCA**.

<img src = "./img/serge824_1_8.png" width="20%" title="Stereo Mixer" alt="Stereo Mixer">

1. 1/4" TRS output of the left channel
2. 1/4" TRS output of the right channel
3. Left channel output (AC OUTPUT)
4. Right channel output (AC OUTPUT)
5. Auxiliary input for the left channel - bypasses panning and gain (AC INPUT)
6. Auxiliary input for the right channel - bypasses panning and gain (AC INPUT)
7. Channel 1 input (AC INPUT)
8. Channel 2 input (AC INPUT)
9. Panning voltage control for channel 1 (summed with *11*) (AC INPUT)
10. Panning voltage control for channel 2 (summed with *12*) (AC INPUT)
11. Panning knob for channel 1
12. Panning knob for channel 2
13. CV gain input for channel 1 (summed with *15*) (DC INPUT)
14. CV gain input for channel 2 (summed with *16*) (DC INPUT)
15. Gain control knob for channel 1
16. Gain control knob for channel 2

*Notes:*
- by lowering the gain knobs and hard-panning channels 1 and 2 to the left and right, respectively, the Dual Mixer can be used as a Dual Voltage-Controlled Amplifier, with the banana jack outputs for "left" and "right" (*3* and *4*) fed back into the Serge system.
- the CV input for panning is bipolar (AC), not unipolar (DC). To have a DC voltage pan across the entire range, set the knobs opposite their indicator arrows. For channel 1, set knob *11* to the far right - a DC voltage at *13* will pan the signal to the left as it rises. For channel 2, do the opposite: set knob *12* to the far *left*, and a DC voltage input at *14* will pan the channel signal to the right.
- the voltage at the output stage of the module is significantly higher than the rest of the synthesizer in order for the TRS outputs to match professional line level (+4dBU). This includes the banana jacks!

### Panel 2 (Edelweiss II)

<img src = "./img/serge824_2.png" width="100%" title="Random Source Edelweiss II" alt="Random Source Edelweiss II">

#### Dual Universal Slope Generator #1

The **Dual Universal Slope Generator (DUSG)**, like the SSG, is one of the more complex Serge modules, developed in 1976 by combining the first generation Envelope Generator module with the Positive and Negative Slew modules. The DUSG can be used as an envelope generator, a low-pass filter / envelope follower, an oscillator, a harmonic subdivider, and a pulse delay. The module has two halves that are almost, but not quite, identical. DUSG #1 on the Random Source Serge is a "contemporary" model, with a pulse output on the top half.

<img src = "./img/serge824_2_1.png" width="30%" title="DUSG" alt="DUSG">

1. CV Slope Output (DC OUTPUT)
2. Secondary slope output - a square wave output on the top half; an inverted bipolar output on the bottom half (Trigger OUTPUT / AC OUTPUT)
3. Gate output (Trigger OUTPUT)
4. Signal input for envelope follower (AC INPUT)
5. 1 volt-per-octave input for slope generator (DC INPUT)
6. CV input for envelope rise (scaled by *8* and summed with *10*) (DC INPUT)
7. CV input for envelope fall (scaled by *9* and summed with *11*) (DC INPUT)
8. Scaling knob for *6*
9. Scaling knob for *7*
10. Base knob for rise time (summed with *6* x *8*)
11. Base knob for fall time (summed with *7* x *9*)
12. Envelope trigger input (Trigger INPUT)

*Notes:*
- a trigger sent into input *12* of the DUSG will fire a single **envelope** at output *1* and *2*, based on the rise and fall times of the slope generator.
- voltage sent into the signal input (*4*) of the DUSG will be slewed (smoothed) based on the rise and fall times of the slope generator to create a DC signal at output *1* and *2*. The DUSG performs full-wave rectification of the input signal first, so negative input voltage from a bipolar source will be flipped positive before smoothing to perform as an **envelope follower**.
- connecting the gate output *3* to the trigger input *12* of the DUSG will make the module function as an **oscillator**, generating a triangle wave shaped by the rise and fall times at output *1*. Output *2* will put out a different waveform - the red jack on the top slope generator puts out a square wave, and the bottom slope generator outputs an AC inverted triangle wave, centered around 0V.
- if the rise and fall time add to a greater period than a pulse wave sent to the trigger input *12*, the DUSG can be used as a **harmonic subdivider**. generating an oscillator at 1/2, 1/3, etc. the frequency of the incoming signal.
- the DUSG can be used as a [monostable](https://en.wikipedia.org/wiki/Monostable) **pulse delay**, where a trigger at input *12* will echo at output *3* at the end of the rise and fall times.

#### Control Voltage Processor

The **Control Voltage Processor**, originally called the **Dual Voltage Processor**, is one of Tcherepnin's original 1973 modules, and functions as a mixer / scalar for control voltages. The module is split into two halves, with up to three sources in each half that can be scaled independently, with an overall scalar for each half.

<img src = "./img/serge824_2_2.png" width="20%" title="CV Processor" alt="CV Processor">

1. Overall scaling knob or the output voltage (DC OUTPUT)
2. Output of the control voltage processor (DC OUTPUT)
3. First CV input (DC INPUT)
4. Scalar knob for *3*
5. Second CV input (DC INPUT)
6. Scalar knob for *5*
7. Third CV input (DC INPUT)
8. Scalar knob for *7*

*Notes:*
- the Dual Voltage Processor will also mix bipolar (AC) sources, similar to the Mixer module. 
- A static DC signal can be used to "bias" an AC source.

#### Dual Universal Slope Generator #2

The **Dual Universal Slope Generator (DUSG)**, like the SSG, is one of the more complex Serge modules, developed in 1976 by combining the first generation Envelope Generator module with the Positive and Negative Slew modules. The DUSG can be used as an envelope generator, a low-pass filter / envelope follower, an oscillator, a harmonic subdivider, and a pulse delay. The module has two identical halves. DUSG #2 on the Random Source Serge is a "classic" model, with an inverted bipolar output in addition to the slope output.

<img src = "./img/serge824_2_3.png" width="30%" title="DUSG" alt="DUSG">

1. CV Slope Output (DC OUTPUT)
2. Secondary inverted bipolar output (AC OUTPUT)
3. Gate output (Trigger OUTPUT)
4. Signal input for envelope follower (AC INPUT)
5. 1 volt-per-octave input for slope generator (DC INPUT)
6. CV input for envelope rise (scaled by *8* and summed with *10*) (DC INPUT)
7. CV input for envelope fall (scaled by *9* and summed with *11*) (DC INPUT)
8. Scaling knob for *6*
9. Scaling knob for *7*
10. Base knob for rise time (summed with *6* x *8*)
11. Base knob for fall time (summed with *7* x *9*)
12. Envelope trigger input (Trigger INPUT)

*Notes:*
- a trigger sent into input *12* of the DUSG will fire a single **envelope** at output *1* and *2*, based on the rise and fall times of the slope generator.
- voltage sent into the signal input (*4*) of the DUSG will be slewed (smoothed) based on the rise and fall times of the slope generator to create a DC signal at output *1* and *2*. The DUSG performs full-wave rectification of the input signal first, so negative input voltage from a bipolar source will be flipped positive before smoothing to perform as an **envelope follower**.
- connecting the gate output *3* to the trigger input *12* of the DUSG will make the module function as an **oscillator**, generating a triangle wave shaped by the rise and fall times at output *1*. Output *2* will put out a different waveform - an AC inverted triangle wave, centered around 0V.
- if the rise and fall time add to a greater period than a pulse wave sent to the trigger input *12*, the DUSG can be used as a **harmonic subdivider**. generating an oscillator at 1/2, 1/3, etc. the frequency of the incoming signal.
- the DUSG can be used as a [monostable](https://en.wikipedia.org/wiki/Monostable) **pulse delay**, where a trigger at input *12* will echo at output *3* at the end of the rise and fall times.

#### Pulse Divider

The **Pulse Divider** is based on a design by [Ken Stone](https://www.elby-designs.com/webtek/cgs/cgs.htm), who developed a series of Serge-compatible modules in the 1980s and 1990s under the moniker the "Cat Girl Synth", or **CGS**. PCBs for CGS modules are still sold by Elby Designs in Australia. The Pulse Divider takes a pulse input and outputs tiggers on numerical subdivisions, allowing the user to have, e.g. a clock signal input generate a polyrhythmic output.

<img src = "./img/serge824_2_4.png" width="10%" title="Divider" alt="Divider">

1. Pulse input for divider (Trigger INPUT)
2. Outputs a trigger every 2nd pulse (Trigger OUTPUT)
3. Outputs a trigger every 3rd pulse (Trigger OUTPUT)
4. Outputs a trigger every 4th pulse (Trigger OUTPUT)
5. Outputs a trigger every 5th pulse (Trigger OUTPUT)
6. Outputs a trigger every 6th pulse (Trigger OUTPUT)
7. Outputs a trigger every 7th pulse (Trigger OUTPUT)
8. Outputs a trigger every 8th pulse (Trigger OUTPUT)

*Notes:*
- The Pulse Divider can be used to bifurcate a (fast) master clock into multiple slower clocks. For example, if you send the pulse output of a Dual Slopes into the Pulse Divider input *1*, and think of that pulse as your 16th notes, then output *2* will be your 8th notes, output *4* will be your quarter notes, output *6* will be dotted-quarter notes, etc.

#### Boolean Logic

The **Boolean Logic** module is another design by Ken Stone, intended to expand on the comparator modules in the original Serge systems. It consists of two basic inverters at the top and bottom, and three submodules that set output voltages HIGH or LOW based on control voltage inputs:

- the AND comparator will output a HIGH value when both of its inputs are over 2.5V
- the OR comparator will output a HIGH value when either of its inputs are over 2.5V
- the XOR comparator will output a HIGH value when either, but not both, of its inputs are over 2.5V

<img src = "./img/serge824_2_5.png" width="20%" title="Boolean Logic" alt="Boolean Logic">

1. Input for top inverter (Trigger INPUT)
2. Output for the top inverter - a HIGH input at *1* will cause a LOW output, and vice versa (Trigger OUTPUT)
3. Input 1 for the AND comparator (DC INPUT)
4. Input 2 for the AND comparator (DC INPUT)
5. Output for the AND comparator (Trigger OUTPUT)
6. Input 1 for the OR comparator (DC INPUT)
7. Input 2 for the OR comparator (DC INPUT)
8. Output for the OR comparator (Trigger OUTPUT)
9. Input 1 for the XOR comparator (DC INPUT)
10. Input 2 for the XOR comparator (DC INPUT)
11. Output for the XOR comparator (Trigger OUTPUT)
12. Input for bottom inverter (Trigger INPUT)
13. Output for the bottom inverter - a HIGH input at *12* will cause a LOW output, and vice versa (Trigger OUTPUT)

*Notes:*
- The outputs will retain a HIGH voltage as long as the "true" state persists at the inputs, making the outputs function as gates rather than triggers.
- When used with the inverters, the AND/OR/XOR values can be transformed into NAND/NOR/XNOR values.

#### ÷N Comparator

The **Divide-by-N Comparator (÷N COM)** is a circuit designed by Tcherepnin in 1979. The circuit is in two sections which have linked functionality. The bottom half of the module is a signal comparator, with a trigger output when one voltage rises above another. Thee top half counts the triggers from the bottom half, emitting its own triggers every *N* steps (hence the name) in increments up to 31. An additional output generates a "staircase" DC wave that rises with the number of steps coming from the comparator.

<img src = "./img/serge824_2_6.png" width="10%" title="÷N Com" alt="÷N Com">

1. "Divide-by-N" output pulse divider output (Trigger OUTPUT)
2. Staircase output (DC OUTPUT)
3. Knob for setting number of steps in the pulse divider (1-31)
4. CV input for setting number of steps in the pulse divider (sums with *3*)
5. Comparator output (Trigger OUTPUT)
6. Offset knob for comparator threshold (sums with *8*)
7. Positive (+) comparator input; if this signal is greater than (*6* + *8*) the trigger *5* will fire and the pulse divider will increment
8. Negative (-) comparator input (sums with *6*); if this signal is less than *7* the trigger *5* will fire and the pulse divider will increment

*Notes:*
- the lower half of the ÷N COM module is fairly straightforward; the trigger output *5* will fire whenever the + voltage (*7*) exceeds the - voltage (*8*, which can be offset by the value at knob *6*).
- unlike the Boolean Logic comparators which generate binary true/false voltages, the trigger circuit on the ÷N COM is a [Schmitt trigger](https://en.wikipedia.org/wiki/Schmitt_trigger), so it has hysteresis and will only fire once per threshold crossing.
- the upper half of the ÷N COM increments its internal counter everytime the lower half fires its trigger circuit. The values set by knob *3* and CV *4* set the number of steps in its pulse divider. When the count of triggers reaches that value, the pulse divider output *1* fires and the counter resets.
- the staircase output *2* is one of the most musically interesting devices in the Serge system; Tcherepnin decided to expose the signal counter used in the internal circuitry of the pulse divider and scale it by a specific voltage, in steps of 1/6V (i.e. from 0 to 5.1666V at 31 steps), so that it can be used directly as a [whole tone scale](https://en.wikipedia.org/wiki/Whole_tone_scale) when patched into a 1 volt-per-octave input on an oscillating circuit. This voltage can be scaled to other fixed musical intervals as desired.

#### Smooth / Stepped Generator #2

The **Smooth / Stepped Generator (SSG)** was designed by Tcherepnin in 1974. Along with the Dual Universal Slope Generator, it's one of the most versatile circuits in the canonical Serge system. Depending on how an SSG is patched, it can function as a [slew](https://en.wikipedia.org/wiki/Slew_rate) (envelope follower / lowpass filter), a sample-and-hold circuit, a triangle wave oscillator, or a low-pass gate. SSG #2 on the Random Source Serge system has no sidecar noise circuit, but can receive voltage from elsewhere in the system to create different random effects.

The module is divided into two halves: the "Smooth" side at the top, and the "Stepped" at the bottom. In between the two, a Coupler circuit outputs a comparator voltage of the two sides.

<img src = "./img/serge824_2_7.png" width="20%" title="Smooth / Stepped Generator" alt="Smooth / Stepped Generator">

1. CV input for the Smooth sides's rate (DC INPUT)
2. CV output for the Smooth side (DC OUTPUT)
3. Scaling knob for *1*
4. Cycle trigger (sends a pulse at the end of a cycle set by the Smooth rate) (Trigger OUTPUT)
5. Knob for Smooth rate amount (sums with *1* x *3*)
6. Signal input for the Smooth side (AC INPUT)
7. Hold jack - when set high, Smooth output *2* will freeze and no longer track the module's input (Trigger INPUT)
8. Sample jack - when set high, Stepped output *14* will sample and hold Stepped input *10* (Trigger INPUT)
9. CV input for the Stepped side's rate (DC INPUT)
10. Signal input for the Stepped side (AC INPUT)
11. Scaling knob for *9*
12. Cycle trigger (sends a pulse at the end of a cycle set by the Stepped rate) (Trigger OUTPUT)
13. Knob for Stepped rate amount (sums with *9* x *11*)
14. CV output for thee Stepped module (DC OUTPUT)
15. "Hot" Coupler output - +5V if Stepped output is higher than the Smooth output; -5V if not (*AC* Trigger OUTPUT)
16. Regular Coupler output - 5V if Stepped output is higher than the Smooth output; 0V if not (Trigger OUTPUT)

*Notes:*
- The Smooth side can easily self-oscillate in a triangle pattern by patching the cycle trigger (*4*) into the input (*6*). The rate knob and VC inputs (*5*, *1*, *3*) control the speed of this oscillation. The triangle waveform will appear at the CV output jack (*2*).
- The Stepped side will also internally self-oscillate - by patching cycle trigger *12* to input *10* and adjusting the frequency via *13*, *9*, and *11*. However, no signal will appear at output jack *14* until you send triggers into the Sample jack (*8*). These triggers can come from anywhere, e.g. from the Cycle output of the Smooth side, or from another module. This creates a classic [sample-and-hold](https://en.wikipedia.org/wiki/Sample_and_hold) circuit where the internal oscillating waveform is being "sampled" by the trigger pulse at the Sample jack and "held" as the output voltage at jack *14*.
- By a similar token, *any* input can be used on either side of the SSG. In this case, the Smooth side will work as a [low-pass filter](https://en.wikipedia.org/wiki/Low-pass_filter) with the slew (or smoothing amount) controlled by the rate; the Stepped side will sample-and-hold any input signal - simple waveforms will create different staircase effects based on the frequency difference between the incoming waveform and the "sampling" being performed.
- The sidecar Noise Source module provides ideal outputs to experiment with as inputs for either side of the SSG. The Smooth side can be used to generate slow, time-varying random voltages, while the Stepped side, when sampling a random signal, can be used to create classic "bleep-bloop" noises when patched in as the frequency of an oscillator.
- Sending an audio signal into the input (*6*) of the Smooth side of the SSG and sending an envelope into the CV input (*1*) will, depending where the rate knob (*5*) is set, allow you to use the module as a [low-pass gate](https://electronicmusic.fandom.com/wiki/Lowpass_gate), where the gain on the signal rises with the cutoff frequency of the filter. This setup is great for simulating natural sounding instruments such as percussion where the timbre brightens with the attack of the sound.
- The SSG is quite a complex module, and the Serge fans site has [an entire 4-page article](http://www.serge-fans.com/wiz_SSG1.htm) dedicated to patching ideas using it.

#### Random Source

The **Random Source** is the eponymous design of the company that designed its PCB in Berlin; it combines two of Tcherepnin's noise modules: the **Random Voltage Generator (RVG)** (left column of the module) and the ***Noise Source*** (right column). The RVG behaves as a pre-patched Smooth / Stepped Generator fed with noise; the Noise Source provides a variety of noise sources to work with as well as a built-in sample-and-hold circuit.

<img src = "./img/serge824_2_8.png" width="20%" title="Random Source" alt="Random Source">

1. Pulse output - generates random pulses at the module rate (specified by *9* x *10* + *12*) (Trigget OUTPUT)
2. Full-spectrum [white noise](https://en.wikipedia.org/wiki/White_noise) (AC OUTPUT)
3. Stepped random output - generates discrete random voltages at the module rate (DC OUTPUT)
4. [Pink Noise](https://en.wikipedia.org/wiki/Pink_noise) (AC OUTPUT)
5. Smooth random output - generates continuous, low-pass filtered random voltages at the module rate (DC OUTPUT)
6. "Dirty saw" - a circuit designed by Tcherepnin containing a sawtooth wave that wobbles in frequency and has low-amplitude noise injected in its signal (DC OUTPUT)
7. Unipolar sample-and-hold output using *6* as its source and trigger *11* or *13* to sample the voltage (DC OUTPUT)
8. Bipolar sample-and-hold output using *6* as its source and trigger *11* or *13* to sample the voltage (AC OUTPUT)
9. CV input to set the rate of random outputs *1*, *3*, and *5* (scaled by *10* and sums with *12*) (DC INPUT)
10. Scalar knob for *9*.
11. Trigger input for the sample-and-hold outputs *7* and *8* (Trigger INPUT) 
12. Base rate for random outputs *1*, *3*, and *5* (sums with *9* x *10*)
13. Button to trigger the sample-and-hold outputs *7* and *8*.

*Notes:*
- The outputs of the module can be patch-programmed into the rate input *9*. This will create a second-order randomness where the speed of the random generator is itself changing randomly.
- Pressing button *13* will cause jack *11* to *output* a pulse - hence its label "TRIG I/O". You can use this as a utility trigger button throughout the system, either to test parts of your Serge patch or in performace.

### Panel 3 (Mantra)

<img src = "./img/serge824_3.png" width="100%" title="Random Source Mantra" alt="Random Source Mantra">

#### Sequencer / Programmer

The ***Sequencer / Programmer*** module is Random Source's interpretation of a variety of Serge modules that allowed for multiple stages of preset voltages that could be recalled either manually or in sequence from a pulse input. The module is an eight stage, two row configuration.

<img src = "./img/serge824_3_1.png" width="40%" title="Sequencer / Programmer" alt="Sequencer / Programmer">

1. CV output for the "A" row of presets (DC OUTPUT)
2. CV output for the "B" row of presets (DC OUTPUT)
3. CV output for the difference between the "A" and "B" voltages (DC OUTPUT)
4. Gate output corresponding to manual button presses (Trigger OUTPUT)
5. Reset - sets sequencer to first stage (Trigger INPUT)
6. Up/Down - reverses direction of sequencer when HIGH (Trigger INPUT)
7. Hold - temporarily disables sequencer when HIGH (Trigger INPUT)
8. Clock - advances sequence one stage (Trigger INPUT)
9. Sequencer on/off switch; off position only allows manual presets
10. Buttons for manual presets
11. "A" row of CV knobs for each preset stage
12. "B" row of CV knobs for each preset stage

*Notes:*
- the Sequencer / Programmer can be used as a 8-button mini-keyboard, with the rows of presets corresponding to notes in a melody, scales, or any other control voltage value you need.
- the buttons on the programmer control the starting point of the sequencer, allowing you to make it loop through only some of the presets in sequence to make a pattern that's less than 8 steps long.
- Like most Serge modules, the Sequencer / Programmer can be sequenced at high frequency, causing the CV outputs to generate a voltage curve made up of the preset stages that can be heard as a waveform or used as a periodic control signal.

#### Dual Universal Slope Generator XL

<img src = "./img/serge824_3_2.png" width="40%" title="DUSG XL" alt="DUSG XL">

#### Active Pro

<img src = "./img/serge824_3_3.png" width="10%" title="Active Pro" alt="Active Pro">

#### Smooth / Stepped Generator #3

<img src = "./img/serge824_3_4.png" width="22%" title="SSG" alt="SSG">

#### Dual Slopes #2

<img src = "./img/serge824_3_5.png" width="20%" title="Dual Slopes" alt="Dual Slopes">

#### Variable Q Voltage Controlled Filter #2

<img src = "./img/serge824_3_6.png" width="20%" title="Variable Q VCF" alt="Variable Q VCF">

#### XFader

<img src = "./img/serge824_3_7.png" width="10%" title="XFader" alt="XFader">


### Panel 4 (TKB)

<img src = "./img/serge824_4.png" width="100%" title="Random Source Touch Activated Keyboard Sequencer" alt="Random Source Touch Activated Keyboard Sequencer">

#### Touch Activated Keyboard Sequencer

<img src = "./img/serge824_4_1.png" width="100%" title="TKB" alt="TKB">


## 73-75 Serge

<img src = "./img/serge7375_photo.jpg" width="100%" title="73-75 Serge system" alt="73-75 Serge system">

The 73-75 Serge was built by Luther Bradfute based on kit designs by the Human Comparator. Called the "Homebuilt" system, this 2-panel setup contains a "greatest hits" of Serge modules from the first generation of Tcherepnin's designs, sold as kits while he was still working at CalArts from 1973-1975. In general, these modules are simpler than found on the Random Source panels.

### "Homebuilt" Panel 1

<img src = "./img/serge7375_1.png" width="100%" title="73-75 Panel 1" alt="73-75 Panel 1">

#### Oscillator

<img src = "./img/serge7375_1_1.png" width="20%" title="Oscillator" alt="Oscillator">

#### Triple Waveshaper

<img src = "./img/serge7375_1_2.png" width="30%" title="TWS" alt="TWS">

#### Peak / Trough

<img src = "./img/serge7375_1_3.png" width="20%" title="Peak / Trough" alt="Peak / Trough">

#### Triple Comparator

<img src = "./img/serge7375_1_4.png" width="20%" title="Triple Comparator" alt="Triple Comparator">

#### Dual Processor

<img src = "./img/serge7375_1_5.png" width="30%" title="Dual Processor" alt="Dual Processor">

#### Ring Modulator

<img src = "./img/serge7375_1_6.png" width="10%" title="Ring" alt="Ring">

#### Gate

<img src = "./img/serge7375_1_7.png" width="10%" title="Gate" alt="Gate">

#### Reverb

<img src = "./img/serge7375_1_8.png" width="10%" title="Reverb" alt="Reverb">

#### Preamp

<img src = "./img/serge7375_1_9.png" width="10%" title="Preamp" alt="Preamp">


### "Homebuilt" Panel 2

<img src = "./img/serge7375_2.png" width="100%" title="73-75 Panel 2" alt="73-75 Panel 2">

#### Positive Slew

<img src = "./img/serge7375_2_1.png" width="30%" title="Positive Slew" alt="Positive Slew">

#### Negative Slew

<img src = "./img/serge7375_2_2.png" width="30%" title="Negative Slew" alt="Negative Slew">

#### Envelope Generator #1, #2, #3

<img src = "./img/serge7375_2_345.png" width="30%" title="Envelope Generator" alt="Envelope Generator">

#### Adapter

<img src = "./img/serge7375_2_6.png" width="10%" title="Adapter" alt="Adapter">


## The Shelfisizer

<img src = "./img/shelfisizer2019_photo.jpg" width="100%" title="2019 Shelfisizer" alt="2019 Shelfisizer">

The Shelfisizer is an open-source project by Luke DuBois inspired by Serge modular systems but also hybrid analog synthesis / microcontroller systems such as the [Buchla 200e](https://buchla.com/systems-design/). These modules use 16mHz [Adafruit Metro Mini](https://www.adafruit.com/product/2590) microcontrollers and simple monolithic IC chips to handle much of the logic that definies the module's behavior, leaving discrete components for the parts of the modules that actually generate analog signals. This makes it simple to prototype modules that require an understanding of "state", such as pattern memory or hysteresis, and allows for a design that has a much lower part count than typical synthesizer modules.

### 2019 Panel

<img src = "./img/shelfisizer2019.png" width="100%" title="Shelfisizer 2019" alt="Shelfisizer 2019">

#### Pulse

<img src = "./img/shelfisizer2019_1.png" width="20%" title="Pulse" alt="Pulse">

#### Onebang

<img src = "./img/shelfisizer2019_2.png" width="20%" title="Onebang" alt="Onebang">

#### Dust / Dirt

<img src = "./img/shelfisizer2019_3.png" width="30%" title="Dust / Dirt" alt="Dust / Dirt">

#### Lookup

<img src = "./img/shelfisizer2019_4.png" width="30%" title="Lookup" alt="Lookup">

#### Square

<img src = "./img/shelfisizer2019_5.png" width="10%" title="Square" alt="Square">

#### Shift

<img src = "./img/shelfisizer2019_6.png" width="20%" title="Shift" alt="Shift">


[return](./index.md)
