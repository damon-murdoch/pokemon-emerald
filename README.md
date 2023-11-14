# Pokemon Dragapult Emerald
## Pokemon Emerald Decompilation Project, based on the PokeEmerald Expansion Project
### Created by Damon Murdoch ([@SirScrubbington](https://twitter.com/SirScrubbington))

## About

This is a Pokemon Emerald decompilation project which uses
the PokeEmerald Expansion project as a base. I am currently
using this project as a way to learn the Emerald codebase. 
I will be building an expanded version of the base game, 
rather than an entirely new game and world. However, there
are several features which I would like to implement within
the development of this project. 

The eventual goal for this project is to create a sandbox for
players to enjoy the incredible post-game content in Emerald, 
such as the Battle Frontier and other facilities which have
been completely lacking since Generation 7 using new Pokemon
and simple methods for obtaining properly trained, competitive
Pokemon easily without the need for modifying save files.

## Planned Features

Please note, this is not an exhaustive list and may be expanded or 
reduced at any time. Some of these features may or may not already 
be implemented by the existing codebase, and this will be investigated 
and adjusted accordingly if required. Features which have been implemented 
will be ~~crossed out~~, or deleted if no longer required. Please note that
the vast majority of these fixes are from [this tutorial page](https://github.com/pret/pokeemerald/wiki/Tutorials), and the creators of each of these tutorials will
be credited as the project is developed.

### Bug Fixes

* ~~[EWRAM Fix](https://github.com/pret/pokeemerald/wiki/Make-space-for-EWRAM-Data-for-Summary-screen)~~
* ~~[Pokedex Fix](https://github.com/pret/pokeemerald/wiki/Not-showing-dex-entries-until-getting-the-Pok%C3%A9dex)~~
* ~~[Save Type Error Screen](https://www.pokecommunity.com/showpost.php?p=10449518)~~
* ~~[Implement RESET_FONT](https://github.com/pret/pokeemerald/wiki/Implement-Missing-Text-Function-RESET_FONT)~~
* [Surf Dismount Fix](https://github.com/pret/pokeemerald/wiki/Surfing-Dismount-Ground-Effects)
* [Camera Wave Fix](https://github.com/pret/pokeemerald/wiki/Keep-the-Camera-from-Making-Waves)
* [Better Reflections](https://github.com/pret/pokeemerald/wiki/Reflections)
* [WaitForBlank Fix](https://github.com/pret/pokeemerald/wiki/Reflections)

### UI Improvements

* [Registered Items List](https://www.pokecommunity.com/showpost.php?p=10380770) / [Select Registered Item](https://github.com/pret/pokeemerald/wiki/Holding-Select-Allows-For-A-Second-Register-Item)
* [Reuse Repel Prompt](https://github.com/pret/pokeemerald/wiki/Prompt-for-reusing-Repels)
* [Repeated Medicine Use](https://github.com/pret/pokeemerald/wiki/Repeated-Field-Medicine-Use)
* [Nature Mints](https://www.pokecommunity.com/showpost.php?p=10245635&postcount=191)
* [Bag Sorting](https://www.pokecommunity.com/showpost.php?p=10167488&postcount=84)
* [Increased Text Speed](https://www.pokecommunity.com/showpost.php?p=10400198)
* [Dynamic Multi Choice](https://www.pokecommunity.com/showthread.php?t=489984) / [Alternate Method](https://www.pokecommunity.com/showpost.php?p=10158928)
* [Chain Fishing](https://github.com/pret/pokeemerald/wiki/Chain-Fishing)
* [Faster HP Drain](https://github.com/pret/pokeemerald/wiki/Faster-HP-Drain)
* [Improved Battle Pacing](https://www.pokecommunity.com/showpost.php?p=10266925)
* [Coloured Stats by Nature](https://github.com/pret/pokeemerald/wiki/Colored-stats-by-nature-in-summary-screen)
* [DS-Style Party Screens](https://www.pokecommunity.com/showpost.php?p=10218092&postcount=173)
* [Show EVs / IVs in Summary](https://www.pokecommunity.com/showpost.php?p=10161688&postcount=77)
* [Show Correct Hidden Power Type](https://www.pokecommunity.com/showpost.php?p=10269149)
* [Move Relearner in Party Screen](https://www.pokecommunity.com/showpost.php?p=10470602)
* [Move Relearner for Pre-Evo Moves](https://github.com/pret/pokeemerald/wiki/Allow-Move-Relearner-to-Teach-Moves-that-Pre-Evolutions-Know)
* [Show Type-Effectiveness in Battle](https://www.pokecommunity.com/showpost.php?p=10167016&postcount=83) / [Alternate Method](https://github.com/pret/pokeemerald/wiki/Show-Type-Effectiveness-In-Battle-Using-Pre-Existing--Function-and-Disable-in-Option-Menu)
* [Add Move Description in Battles](https://github.com/pret/pokeemerald/wiki/Add-Description-Submenu)
* [Keyboard lowercase auto-switch](https://github.com/pret/pokeemerald/wiki/Automatically-make-the-keyboard-switch-to-lowercase-after-the-first-character/)
* [Allow Nicknaming from Party Menu](https://github.com/pret/pokeemerald/wiki/Nickname-your-Pok%C3%A9mon-from-the-party-menu)
* [XY-Style Wrapping Summary Screen](https://www.pokecommunity.com/showpost.php?p=10060875&postcount=27)
* [Swap party slots with select](https://www.pokecommunity.com/showpost.php?p=10420662)
* [Return/Frustration power in summary](https://www.pokecommunity.com/showpost.php?p=10575976&postcount=420)

### Item Improvements

* [New Item Balls Utility](https://github.com/pret/pokeemerald/wiki/Set-Up-Item-Balls-on-a-Map-Without-Needing-New-Scripts)
* [DPPt Two-in-one-Bike](https://www.pokecommunity.com/showpost.php?p=10161144&postcount=74) / [Alternate Method](https://www.pokecommunity.com/showpost.php?p=10217718&postcount=172)
* [Plural Give-Item Command](https://github.com/pret/pokeemerald/wiki/Plural-Giveitem)
* [Modify Pickup Item Table](https://www.pokecommunity.com/showpost.php?p=9987541&postcount=11)
* [Update Sitrus Berry](https://github.com/pret/pokeemerald/wiki/Update-Sitrus-Berry's-effect-to-Gen-4-standard)
* [Infinite TM Usage](https://github.com/pret/pokeemerald/wiki/Infinite-TM-usage)
* [Items to increase/decrease IVs](https://www.pokecommunity.com/showpost.php?p=10469674)
* [Increase Bag Capacity](https://www.pokecommunity.com/showpost.php?p=10523495) / [Alternate Method](https://github.com/pret/pokeemerald/wiki/Make-the-Bag-Able-to-Hold-120-Items-Instead-of-30)
* [Change Money / BP Limit](https://github.com/pret/pokeemerald/wiki/Increase-money-limit)

### Scripting Improvements

* [Setting EVs with Scripting Specials](https://www.pokecommunity.com/showpost.php?p=10162417&postcount=80)
* [Giving Custom Pokemon](https://www.pokecommunity.com/showpost.php?p=10203404)
* [Create Party Pokemon](https://github.com/pret/pokeemerald/wiki/Temporarily-Replace-Player-or-Enemy-Party-Pokemon)

### Overworld Improvements

* [Day/Night Encounters](https://www.pokecommunity.com/showpost.php?p=10450677)
* [Overworld Expansion](https://www.pokecommunity.com/showpost.php?p=10221532&postcount=176)
* [Allow Running Indoors](https://github.com/pret/pokeemerald/wiki/Allow-running-indoors)
* [Faster Surfing](https://www.pokecommunity.com/showpost.php?p=10137446&postcount=59)
* [Add PC Access to PokeNav](https://github.com/pret/pokeemerald/wiki/Add-PC-Access-in-PokeNav)
* [Catch both Latios and Latias](https://github.com/pret/pokeemerald/wiki/Allow-Both-Latios-and-Latias-Appear.)

### Graphical Changes

* [New Trainer Classes](https://github.com/pret/pokeemerald/wiki/Adding-a-New-Trainer-Class)
* ~~[Intro Pokemon Replaced with Zorua](https://www.pokecommunity.com/showpost.php?p=9967857&postcount=6)~~
* [Add Party to trainer card](https://www.pokecommunity.com/showpost.php?p=10566704&postcount=416)

### Pokemon Breeding / Battling / Other Modifications

* Updated spawn tables for new Pokemon (gen 4+)
* [Eggs hatch at level 1](https://www.pokecommunity.com/showpost.php?p=10154622)
* [Inherit nature with everstone](https://www.pokecommunity.com/showpost.php?p=10160374)
* [Destiny Knot IV Inheritance](https://www.pokecommunity.com/showpost.php?p=10161151)
* [Gen-6 Exp. Share](https://www.pokecommunity.com/showpost.php?p=10060538&postcount=26) / [Alternate Method](https://github.com/pret/pokeemerald/wiki/Gen-6-style-Exp.-Share---Alternative-Option)
* [Improved Switching AI](https://www.pokecommunity.com/showpost.php?p=10263816) / [Alternate Method](https://www.pokecommunity.com/showpost.php?p=10264391)
* [Inherit moves from parents](https://www.pokecommunity.com/showpost.php?p=10416415)
* [Add Hyper Training](https://www.pokecommunity.com/showpost.php?p=10597632&postcount=446)

### Battle Frontier

* Pokemon EV/IV Customiser (NPC/item/etc.)
* New Pokemon in Battle Frontier 
* Mega Evolutions in Battle Frontier
* New tiers in Battle Frontier (i.e. ubers, restricted, etc.)
* Custom trainers in Battle Frontier

### Optimisations / Other Improvements

* [Faster Soft Resets](https://www.pokecommunity.com/showpost.php?p=10414167)
* [Save File Backwards Compatibility](https://github.com/pret/pokeemerald/wiki/How-to-Support-Savefile-Backwards-Compatibility)
* [Version Identification](https://github.com/pret/pokeemerald/wiki/Adding-Support-for-Connectivity-with-Other-Hacks-Whilst-Maintaining-Connectivity-with-Vanilla)
* [Trade with FRLG without beating the game](https://github.com/pret/pokeemerald/wiki/Enable-trade-with-FRLG-without-beating-the-game)
* [Extra Save Space](https://github.com/pret/pokeemerald/wiki/Extra-save-space-with-two-lines-of-code)
* [Uniquely Shuffle Arrays](https://github.com/pret/pokeemerald/wiki/Uniquely-Shuffle-Array)
* [Add Sleep Mode](https://github.com/pret/pokeemerald/wiki/Add-Sleep-Mode)

## Useful Links 

* [PokeEmerald Expansion Readme](./EXPANSION.md)
* [PokeEmerald Install / Build Guide](./INSTALL.md)
* [PokeEmerald Tutorials](https://github.com/pret/pokeemerald/wiki/Tutorials)
* [Dragapult.xyz Main Site](https://www.dragapult.xyz)

## Credits

* The entire [PokeEmerald-Expansion development team](https://github.com/rh-hideout/pokeemerald-expansion/wiki/Credits/_edit), for developing and maintaining the incredible source image this project uses

* [Avara](https://www.pokecommunity.com/member.php?u=294199), for creating the [Changing Birch's Intro Pokemon](https://www.pokecommunity.com/showpost.php?p=9967857&postcount=6) tutorial

* `SonikkuA-DatH`, for creating the [Make space for EWRAM Data for Summary Screen](https://github.com/pret/pokeemerald/wiki/Make-space-for-EWRAM-Data-for-Summary-screen) tutorial

* `Jaizu`, for creating the [Not showing dex entries until getting the Pokédex](https://github.com/pret/pokeemerald/wiki/Not-showing-dex-entries-until-getting-the-Pok%C3%A9dex) tutorial

* `Anon822`, for creating the [Wrong Save Type Error Screen](https://www.pokecommunity.com/showpost.php?p=10449518) tutorial

* `FlameTix`, for creating the [Implement Missing Text Function RESET_FONT](https://github.com/pret/pokeemerald/wiki/Implement-Missing-Text-Function-RESET_FONT) tutorial

## Changelog

Please see below for the Dragapult Emerald project changelog. For changes related to
the PokeEmerald Expanded project, please see the [PokeEmerald Changelog](./CHANGELOG.md).

### Ver. 0.0.4

Implemented not showing dex entries until getting the Pokedex 
([tutorial by Jaizu](https://github.com/pret/pokeemerald/wiki/Not-showing-dex-entries-until-getting-the-Pok%C3%A9dex)),
an error screen for if a flash chip is not present on the cart 
([tutorial by Anon822](https://www.pokecommunity.com/showpost.php?p=10449518)), 
implemented missing text function RESET_FONT 
([tutorial by Flametix](https://github.com/pret/pokeemerald/wiki/Implement-Missing-Text-Function-RESET_FONT)),

### Ver. 0.0.3

Implemented EWRAM Data summary screen optimisation ([tutorial by SonikkuA-DatH](https://github.com/pret/pokeemerald/wiki/Make-space-for-EWRAM-Data-for-Summary-screen))

### Ver. 0.0.2

Updated readme with planned features / credits / other information, release build script

### Ver. 0.0.1

Implemented main/dev/debug branching system, modified Birch's intro Pokemon to Hisuian Zorua (Added SPECIES_INTRO #define for modifying both intro sprite/sound at once).

### Ver. 0.0.0
Cloned PokeEmerald Expansion project base image, unmodified source project is stored in branch 'base'
