# Introduction
This repository contains the files I use to run my Ender 5 3D printer

They're based on Vanilla Marlin v. bugfix-2.0.x

I've verified they work for my system, which includes the 4.2.7 main board, purchased from Amazon here:
https://smile.amazon.com/gp/product/B0836SJFZZ/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1

As well as the BLTouch sensor from Creality, also from Amazon:
https://smile.amazon.com/gp/product/B08RJ1RB13/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1

The system works without an adapter board, or switching of wires. You just plug in the BLTouch into the main board and it works. 

Tweaking: 
You'll need to properly set the Z Probe Offset, which I recommend doing using the wizard. 
* First, set your bed temperature and nozzle temperature to your recommended filament temperature. 
* Then, run the wizard. This is available in the
  `Configuration` > `Advanced Settings` > `Probe Offsets` > `Z Probe Wizard`
* This will do an auto home, then run you through adjusting the bed height to get it close to the nozzle. 

Finally, you'll want to add a `G29` Gcode snippet before each print to get the mesh correct. 
