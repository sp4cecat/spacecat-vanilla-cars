# SpaceCat's Vanilla Cars

### Contains:

- Black and Red M3S trucks
- A black Ada
- A Gunter with a funky Nyan texture. Planning on adding either Nyan Cat playable music at some point.

The Ada retexture is completely rvmat-based, requiring no .paa files - use them as a basic for creating different coloured versions.

For example, the Ada I have renamed to its real-world branding (Lada Niva). The black texture is applied in the .rvmat files as:

```
class Stage2: Stage1
{
	texture="#(argb,8,8,3)color(0.01,0.01,0.01,1.0,co)";
	texGen="2";
};
```

## Getting Your RGB Values

`0.01,0.01,0.1` are the RGB values that give you the black texture, with RGB values being between 0 and 1 (instead of 0-255) Use a colour wheel utility to find a colour you want, say `82, 134, 100`
Dividing each of those by 255 we get:

82/255 = 0.32

134/255 = 0.53

100/255 = 0.39

The texture you would then use is:

`#(argb,8,8,3)color(0.32,0.53,0.39,1.0,co)`

The 1.0 at the end, just before `,co`, is transparency.


## A Cleaner Truck
Looking in `truck\data` you'll see a file called `truck_01_cab_clean_ca.paa` - this is a modified version of the vanilla `_ca` file which is an overlay that does the vanilla weathering after the colours are applied. I've faded it a bit so that the weathering is not as severe. 

With the truck, we use `hiddenSelectionsTextures[]`, and the colour textures are applied in `truck\config.cpp` - use that as a template for creating your own coloured trucks.

> Fun Fact: ca stands for 'color alpha' so if you've got an alpha channel in a texture file, you should suffix the file name  with `_ca.paa` instead of `_co.paa`

## The Nyan Car

A fun little project, this is a fully-retextured Gunter / Golf complete with panels.

## Repairable Parts
The `vehicles\parts\config.cpp` file sets the radiator and the Jerry Can repairable by blow torch and epoxy. Delete that directory if you don't want that.

## Bonus: Zombie danger!

In `scripts\4_world\entities` you'll find `creatures` and `manbase` directories with scripts that allow vehicle passengers to be hit by zombies if the doors next to them are missing/open.

Remove these directories if you don't want that kind of behaviour on your decent, god-fearin' server, but it IS hilarious to see player reactions when they discover this feature for the first time (especially if you have bicycles on your server).

## XML's
The files `spacecat-cars-spawnabletypes.xml` and `spacecat-cars-types.xml` are in the root directory, ready to reference in `cfgeconomycore.xml`