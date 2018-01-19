/*
 * block.h
 *
 *  Created on: Dec 22, 2016
 *      Author: root
 */

#ifndef BLOCK_H_
#define BLOCK_H_

#include "world.h"
#include "player.h"
#include "item.h"

#define BLK_AIR 0
#define BLK_STONE 16
#define BLK_STONE_GRANITE 17
#define BLK_STONE_GRANITESMOOTH 18
#define BLK_STONE_DIORITE 19
#define BLK_STONE_DIORITESMOOTH 20
#define BLK_STONE_ANDESITE 21
#define BLK_STONE_ANDESITESMOOTH 22
#define BLK_GRASS 32
#define BLK_DIRT 48
#define BLK_DIRT_COARSE 49
#define BLK_DIRT_PODZOL 50
#define BLK_COBBLESTONE 64
#define BLK_WOOD_OAK 80
#define BLK_WOOD_SPRUCE 81
#define BLK_WOOD_BIRCH 82
#define BLK_WOOD_JUNGLE 83
#define BLK_WOOD_ACACIA 84
#define BLK_WOOD_BIG_OAK 85
#define BLK_SAPLING_OAK 96
#define BLK_SAPLING_SPRUCE 97
#define BLK_SAPLING_BIRCH 98
#define BLK_SAPLING_JUNGLE 99
#define BLK_SAPLING_ACACIA 100
#define BLK_SAPLING_BIG_OAK 101
#define BLK_SAPLING_OAK_1 105
#define BLK_SAPLING_OAK_2 106
#define BLK_SAPLING_OAK_3 107
#define BLK_SAPLING_OAK_4 108
#define BLK_SAPLING_OAK_5 109
#define BLK_BEDROCK 112
#define BLK_WATER 128
#define BLK_WATER_1 144
#define BLK_LAVA 160
#define BLK_LAVA_1 176
#define BLK_SAND 192
#define BLK_SAND_RED 193
#define BLK_GRAVEL 208
#define BLK_OREGOLD 224
#define BLK_OREIRON 240
#define BLK_ORECOAL 256
#define BLK_LOG_OAK 272
#define BLK_LOG_SPRUCE 273
#define BLK_LOG_BIRCH 274
#define BLK_LOG_JUNGLE 275
#define BLK_LOG_ACACIA 276
#define BLK_LOG_BIG_OAK 277
#define BLK_LOG_OAK_1 278
#define BLK_LOG_OAK_2 279
#define BLK_LOG_OAK_3 281
#define BLK_LOG_OAK_4 282
#define BLK_LOG_OAK_5 283
#define BLK_LOG_OAK_6 285
#define BLK_LOG_OAK_7 286
#define BLK_LOG_OAK_8 287
#define BLK_LEAVES_OAK 288
#define BLK_LEAVES_SPRUCE 289
#define BLK_LEAVES_BIRCH 290
#define BLK_LEAVES_JUNGLE 291
#define BLK_LEAVES_OAK_2 292
#define BLK_LEAVES_SPRUCE_1 293
#define BLK_LEAVES_BIRCH_1 294
#define BLK_LEAVES_JUNGLE_1 295
#define BLK_LEAVES_SPRUCE_2 297
#define BLK_LEAVES_BIRCH_2 298
#define BLK_LEAVES_JUNGLE_2 299
#define BLK_LEAVES_OAK_3 300
#define BLK_LEAVES_SPRUCE_3 301
#define BLK_LEAVES_BIRCH_3 302
#define BLK_LEAVES_JUNGLE_3 303
#define BLK_SPONGE_DRY 304
#define BLK_SPONGE_WET 305
#define BLK_GLASS 320
#define BLK_ORELAPIS 336
#define BLK_BLOCKLAPIS 352
#define BLK_DISPENSER 368
#define BLK_SANDSTONE 384
#define BLK_SANDSTONE_CHISELED 385
#define BLK_SANDSTONE_SMOOTH 386
#define BLK_MUSICBLOCK 400
#define BLK_BED 416
#define BLK_BED_1 424
#define BLK_BED_2 425
#define BLK_BED_3 426
#define BLK_BED_4 427
#define BLK_BED_5 428
#define BLK_BED_6 429
#define BLK_BED_7 430
#define BLK_BED_8 431
#define BLK_GOLDENRAIL 432
#define BLK_DETECTORRAIL 448
#define BLK_PISTONSTICKYBASE 464
#define BLK_WEB 480
#define BLK_TALLGRASS_SHRUB 496
#define BLK_TALLGRASS_GRASS 497
#define BLK_TALLGRASS_FERN 498
#define BLK_DEADBUSH 512
#define BLK_PISTONBASE 528
#define BLK_PISTONBASE_1 544
#define BLK_CLOTH_WHITE 560
#define BLK_CLOTH_ORANGE 561
#define BLK_CLOTH_MAGENTA 562
#define BLK_CLOTH_LIGHTBLUE 563
#define BLK_CLOTH_YELLOW 564
#define BLK_CLOTH_LIME 565
#define BLK_CLOTH_PINK 566
#define BLK_CLOTH_GRAY 567
#define BLK_CLOTH_SILVER 568
#define BLK_CLOTH_CYAN 569
#define BLK_CLOTH_PURPLE 570
#define BLK_CLOTH_BLUE 571
#define BLK_CLOTH_BROWN 572
#define BLK_CLOTH_GREEN 573
#define BLK_CLOTH_RED 574
#define BLK_CLOTH_BLACK 575
#define BLK_PISTONMOVING 576
#define BLK_FLOWER1_DANDELION 592
#define BLK_FLOWER2_POPPY 608
#define BLK_FLOWER2_BLUEORCHID 609
#define BLK_FLOWER2_ALLIUM 610
#define BLK_FLOWER2_HOUSTONIA 611
#define BLK_FLOWER2_TULIPRED 612
#define BLK_FLOWER2_TULIPORANGE 613
#define BLK_FLOWER2_TULIPWHITE 614
#define BLK_FLOWER2_TULIPPINK 615
#define BLK_FLOWER2_OXEYEDAISY 616
#define BLK_MUSHROOM 624
#define BLK_MUSHROOM_1 640
#define BLK_BLOCKGOLD 656
#define BLK_BLOCKIRON 672
#define BLK_STONESLAB 688
#define BLK_STONESLAB_1 689
#define BLK_STONESLAB_2 690
#define BLK_STONESLAB_3 691
#define BLK_STONESLAB_4 692
#define BLK_STONESLAB_5 693
#define BLK_STONESLAB_6 694
#define BLK_STONESLAB_7 695
#define BLK_STONESLAB_8 697
#define BLK_STONESLAB_9 698
#define BLK_STONESLAB_10 699
#define BLK_STONESLAB_11 700
#define BLK_STONESLAB_12 701
#define BLK_STONESLAB_13 702
#define BLK_STONESLAB_14 703
#define BLK_STONESLAB_STONE 704
#define BLK_STONESLAB_SAND 705
#define BLK_STONESLAB_WOOD 706
#define BLK_STONESLAB_COBBLE 707
#define BLK_STONESLAB_BRICK 708
#define BLK_STONESLAB_SMOOTHSTONEBRICK 709
#define BLK_STONESLAB_NETHERBRICK 710
#define BLK_STONESLAB_QUARTZ 711
#define BLK_STONESLAB_STONE_1 713
#define BLK_STONESLAB_STONE_2 714
#define BLK_STONESLAB_STONE_3 715
#define BLK_STONESLAB_STONE_4 716
#define BLK_STONESLAB_STONE_5 717
#define BLK_STONESLAB_STONE_6 718
#define BLK_STONESLAB_STONE_7 719
#define BLK_BRICK 720
#define BLK_TNT 736
#define BLK_BOOKSHELF 752
#define BLK_STONEMOSS 768
#define BLK_OBSIDIAN 784
#define BLK_TORCH 800
#define BLK_FIRE 816
#define BLK_MOBSPAWNER 832
#define BLK_STAIRSWOOD 848
#define BLK_CHEST 864
#define BLK_REDSTONEDUST 880
#define BLK_OREDIAMOND 896
#define BLK_BLOCKDIAMOND 912
#define BLK_WORKBENCH 928
#define BLK_CROPS 944
#define BLK_CROPS_1 951
#define BLK_FARMLAND 960
#define BLK_FURNACE 976
#define BLK_FURNACE_1 992
#define BLK_SIGN 1008
#define BLK_DOOROAK 1024
#define BLK_LADDER 1040
#define BLK_RAIL 1056
#define BLK_STAIRSSTONE 1072
#define BLK_SIGN_1 1088
#define BLK_LEVER 1104
#define BLK_PRESSUREPLATESTONE 1120
#define BLK_DOORIRON 1136
#define BLK_PRESSUREPLATEWOOD 1152
#define BLK_OREREDSTONE 1168
#define BLK_OREREDSTONE_1 1184
#define BLK_NOTGATE 1200
#define BLK_NOTGATE_1 1216
#define BLK_BUTTON 1232
#define BLK_SNOW 1248
#define BLK_ICE 1264
#define BLK_SNOW_1 1280
#define BLK_CACTUS 1296
#define BLK_CLAY 1312
#define BLK_REEDS 1328
#define BLK_JUKEBOX 1344
#define BLK_FENCE 1360
#define BLK_PUMPKIN 1376
#define BLK_HELLROCK 1392
#define BLK_HELLSAND 1408
#define BLK_LIGHTGEM 1424
#define BLK_PORTAL 1440
#define BLK_LITPUMPKIN 1456
#define BLK_CAKE 1472
#define BLK_DIODE 1488
#define BLK_DIODE_1 1504
#define BLK_STAINEDGLASS_WHITE 1520
#define BLK_STAINEDGLASS_ORANGE 1521
#define BLK_STAINEDGLASS_MAGENTA 1522
#define BLK_STAINEDGLASS_LIGHTBLUE 1523
#define BLK_STAINEDGLASS_YELLOW 1524
#define BLK_STAINEDGLASS_LIME 1525
#define BLK_STAINEDGLASS_PINK 1526
#define BLK_STAINEDGLASS_GRAY 1527
#define BLK_STAINEDGLASS_SILVER 1528
#define BLK_STAINEDGLASS_CYAN 1529
#define BLK_STAINEDGLASS_PURPLE 1530
#define BLK_STAINEDGLASS_BLUE 1531
#define BLK_STAINEDGLASS_BROWN 1532
#define BLK_STAINEDGLASS_GREEN 1533
#define BLK_STAINEDGLASS_RED 1534
#define BLK_STAINEDGLASS_BLACK 1535
#define BLK_TRAPDOOR 1536
#define BLK_MONSTERSTONEEGG_STONE 1552
#define BLK_MONSTERSTONEEGG_COBBLE 1553
#define BLK_MONSTERSTONEEGG_BRICK 1554
#define BLK_MONSTERSTONEEGG_MOSSYBRICK 1555
#define BLK_MONSTERSTONEEGG_CRACKEDBRICK 1556
#define BLK_MONSTERSTONEEGG_CHISELEDBRICK 1557
#define BLK_STONEBRICKSMOOTH 1568
#define BLK_STONEBRICKSMOOTH_MOSSY 1569
#define BLK_STONEBRICKSMOOTH_CRACKED 1570
#define BLK_STONEBRICKSMOOTH_CHISELED 1571
#define BLK_MUSHROOM_2 1584
#define BLK_MUSHROOM_3 1600
#define BLK_FENCEIRON 1616
#define BLK_THINGLASS 1632
#define BLK_MELON 1648
#define BLK_PUMPKINSTEM 1664
#define BLK_PUMPKINSTEM_1 1680
#define BLK_VINE 1696
#define BLK_FENCEGATE 1712
#define BLK_STAIRSBRICK 1728
#define BLK_STAIRSSTONEBRICKSMOOTH 1744
#define BLK_MYCEL 1760
#define BLK_WATERLILY 1776
#define BLK_NETHERBRICK 1792
#define BLK_NETHERFENCE 1808
#define BLK_STAIRSNETHERBRICK 1824
#define BLK_NETHERSTALK 1840
#define BLK_ENCHANTMENTTABLE 1856
#define BLK_BREWINGSTAND 1872
#define BLK_CAULDRON 1888
#define BLK_NULL_1 1904
#define BLK_ENDPORTALFRAME 1920
#define BLK_WHITESTONE 1936
#define BLK_DRAGONEGG 1952
#define BLK_REDSTONELIGHT 1968
#define BLK_REDSTONELIGHT_1 1984
#define BLK_WOODSLAB 2000
#define BLK_WOODSLAB_1 2001
#define BLK_WOODSLAB_2 2002
#define BLK_WOODSLAB_3 2003
#define BLK_WOODSLAB_4 2004
#define BLK_WOODSLAB_5 2005
#define BLK_WOODSLAB_6 2009
#define BLK_WOODSLAB_7 2010
#define BLK_WOODSLAB_8 2011
#define BLK_WOODSLAB_9 2012
#define BLK_WOODSLAB_10 2013
#define BLK_WOODSLAB_OAK 2016
#define BLK_WOODSLAB_SPRUCE 2017
#define BLK_WOODSLAB_BIRCH 2018
#define BLK_WOODSLAB_JUNGLE 2019
#define BLK_WOODSLAB_ACACIA 2020
#define BLK_WOODSLAB_BIG_OAK 2021
#define BLK_WOODSLAB_OAK_1 2025
#define BLK_WOODSLAB_OAK_2 2026
#define BLK_WOODSLAB_OAK_3 2027
#define BLK_WOODSLAB_OAK_4 2028
#define BLK_WOODSLAB_OAK_5 2029
#define BLK_COCOA 2032
#define BLK_STAIRSSANDSTONE 2048
#define BLK_OREEMERALD 2064
#define BLK_ENDERCHEST 2080
#define BLK_TRIPWIRESOURCE 2096
#define BLK_TRIPWIRE 2112
#define BLK_BLOCKEMERALD 2128
#define BLK_STAIRSWOODSPRUCE 2144
#define BLK_STAIRSWOODBIRCH 2160
#define BLK_STAIRSWOODJUNGLE 2176
#define BLK_COMMANDBLOCK 2192
#define BLK_BEACON 2208
#define BLK_COBBLEWALL_NORMAL 2224
#define BLK_COBBLEWALL_MOSSY 2225
#define BLK_FLOWERPOT 2240
#define BLK_CARROTS 2256
#define BLK_POTATOES 2272
#define BLK_BUTTON_1 2288
#define BLK_SKULL 2304
#define BLK_ANVIL 2320
#define BLK_CHESTTRAP 2336
#define BLK_WEIGHTEDPLATE_LIGHT 2352
#define BLK_WEIGHTEDPLATE_HEAVY 2368
#define BLK_COMPARATOR 2384
#define BLK_COMPARATOR_1 2400
#define BLK_DAYLIGHTDETECTOR 2416
#define BLK_BLOCKREDSTONE 2432
#define BLK_NETHERQUARTZ 2448
#define BLK_HOPPER 2464
#define BLK_QUARTZBLOCK 2480
#define BLK_QUARTZBLOCK_CHISELED 2481
#define BLK_QUARTZBLOCK_LINES 2482
#define BLK_QUARTZBLOCK_1 2483
#define BLK_QUARTZBLOCK_2 2484
#define BLK_STAIRSQUARTZ 2496
#define BLK_ACTIVATORRAIL 2512
#define BLK_DROPPER 2528
#define BLK_CLAYHARDENEDSTAINED_WHITE 2544
#define BLK_CLAYHARDENEDSTAINED_ORANGE 2545
#define BLK_CLAYHARDENEDSTAINED_MAGENTA 2546
#define BLK_CLAYHARDENEDSTAINED_LIGHTBLUE 2547
#define BLK_CLAYHARDENEDSTAINED_YELLOW 2548
#define BLK_CLAYHARDENEDSTAINED_LIME 2549
#define BLK_CLAYHARDENEDSTAINED_PINK 2550
#define BLK_CLAYHARDENEDSTAINED_GRAY 2551
#define BLK_CLAYHARDENEDSTAINED_SILVER 2552
#define BLK_CLAYHARDENEDSTAINED_CYAN 2553
#define BLK_CLAYHARDENEDSTAINED_PURPLE 2554
#define BLK_CLAYHARDENEDSTAINED_BLUE 2555
#define BLK_CLAYHARDENEDSTAINED_BROWN 2556
#define BLK_CLAYHARDENEDSTAINED_GREEN 2557
#define BLK_CLAYHARDENEDSTAINED_RED 2558
#define BLK_CLAYHARDENEDSTAINED_BLACK 2559
#define BLK_THINSTAINEDGLASS_WHITE 2560
#define BLK_THINSTAINEDGLASS_ORANGE 2561
#define BLK_THINSTAINEDGLASS_MAGENTA 2562
#define BLK_THINSTAINEDGLASS_LIGHTBLUE 2563
#define BLK_THINSTAINEDGLASS_YELLOW 2564
#define BLK_THINSTAINEDGLASS_LIME 2565
#define BLK_THINSTAINEDGLASS_PINK 2566
#define BLK_THINSTAINEDGLASS_GRAY 2567
#define BLK_THINSTAINEDGLASS_SILVER 2568
#define BLK_THINSTAINEDGLASS_CYAN 2569
#define BLK_THINSTAINEDGLASS_PURPLE 2570
#define BLK_THINSTAINEDGLASS_BLUE 2571
#define BLK_THINSTAINEDGLASS_BROWN 2572
#define BLK_THINSTAINEDGLASS_GREEN 2573
#define BLK_THINSTAINEDGLASS_RED 2574
#define BLK_THINSTAINEDGLASS_BLACK 2575
#define BLK_LEAVES_ACACIA 2576
#define BLK_LEAVES_BIG_OAK 2577
#define BLK_LEAVES_ACACIA_1 2580
#define BLK_LEAVES_BIG_OAK_1 2581
#define BLK_LEAVES_ACACIA_2 2584
#define BLK_LEAVES_BIG_OAK_2 2585
#define BLK_LEAVES_ACACIA_3 2588
#define BLK_LEAVES_BIG_OAK_3 2589
#define BLK_LOG_ACACIA_1 2592
#define BLK_LOG_BIG_OAK_1 2593
#define BLK_LOG_OAK_9 2596
#define BLK_LOG_OAK_10 2597
#define BLK_LOG_OAK_11 2600
#define BLK_LOG_OAK_12 2601
#define BLK_LOG_OAK_13 2604
#define BLK_LOG_OAK_14 2605
#define BLK_STAIRSWOODACACIA 2608
#define BLK_STAIRSWOODDARKOAK 2624
#define BLK_SLIME 2640
#define BLK_BARRIER 2656
#define BLK_IRONTRAPDOOR 2672
#define BLK_PRISMARINE_ROUGH 2688
#define BLK_PRISMARINE_BRICKS 2689
#define BLK_PRISMARINE_DARK 2690
#define BLK_SEALANTERN 2704
#define BLK_HAYBLOCK 2720
#define BLK_WOOLCARPET_WHITE 2736
#define BLK_WOOLCARPET_ORANGE 2737
#define BLK_WOOLCARPET_MAGENTA 2738
#define BLK_WOOLCARPET_LIGHTBLUE 2739
#define BLK_WOOLCARPET_YELLOW 2740
#define BLK_WOOLCARPET_LIME 2741
#define BLK_WOOLCARPET_PINK 2742
#define BLK_WOOLCARPET_GRAY 2743
#define BLK_WOOLCARPET_SILVER 2744
#define BLK_WOOLCARPET_CYAN 2745
#define BLK_WOOLCARPET_PURPLE 2746
#define BLK_WOOLCARPET_BLUE 2747
#define BLK_WOOLCARPET_BROWN 2748
#define BLK_WOOLCARPET_GREEN 2749
#define BLK_WOOLCARPET_RED 2750
#define BLK_WOOLCARPET_BLACK 2751
#define BLK_CLAYHARDENED 2752
#define BLK_BLOCKCOAL 2768
#define BLK_ICEPACKED 2784
#define BLK_DOUBLEPLANT_SUNFLOWER 2800
#define BLK_DOUBLEPLANT_SYRINGA 2801
#define BLK_DOUBLEPLANT_GRASS 2802
#define BLK_DOUBLEPLANT_FERN 2803
#define BLK_DOUBLEPLANT_ROSE 2804
#define BLK_DOUBLEPLANT_PAEONIA 2805
#define BLK_DOUBLEPLANT_SUNFLOWER_1 2808
#define BLK_DOUBLEPLANT_SUNFLOWER_2 2809
#define BLK_DOUBLEPLANT_SUNFLOWER_3 2810
#define BLK_DOUBLEPLANT_SUNFLOWER_4 2811
#define BLK_DOUBLEPLANT_SUNFLOWER_5 2812
#define BLK_DOUBLEPLANT_SUNFLOWER_6 2813
#define BLK_DOUBLEPLANT_SUNFLOWER_7 2814
#define BLK_DOUBLEPLANT_SUNFLOWER_8 2815
#define BLK_BANNER 2816
#define BLK_BANNER_1 2832
#define BLK_DAYLIGHTDETECTOR_1 2848
#define BLK_REDSANDSTONE 2864
#define BLK_REDSANDSTONE_CHISELED 2865
#define BLK_REDSANDSTONE_SMOOTH 2866
#define BLK_STAIRSREDSANDSTONE 2880
#define BLK_STONESLAB2 2896
#define BLK_STONESLAB2_RED_SANDSTONE 2912
#define BLK_SPRUCEFENCEGATE 2928
#define BLK_BIRCHFENCEGATE 2944
#define BLK_JUNGLEFENCEGATE 2960
#define BLK_DARKOAKFENCEGATE 2976
#define BLK_ACACIAFENCEGATE 2992
#define BLK_SPRUCEFENCE 3008
#define BLK_BIRCHFENCE 3024
#define BLK_JUNGLEFENCE 3040
#define BLK_DARKOAKFENCE 3056
#define BLK_ACACIAFENCE 3072
#define BLK_DOORSPRUCE 3088
#define BLK_DOORBIRCH 3104
#define BLK_DOORJUNGLE 3120
#define BLK_DOORACACIA 3136
#define BLK_DOORDARKOAK 3152
#define BLK_ENDROD 3168
#define BLK_CHORUSPLANT 3184
#define BLK_CHORUSFLOWER 3200
#define BLK_PURPURBLOCK 3216
#define BLK_PURPURPILLAR 3232
#define BLK_STAIRSPURPUR 3248
#define BLK_PURPURSLAB 3264
#define BLK_PURPURSLAB_1 3280
#define BLK_ENDBRICKS 3296
#define BLK_BEETROOTS 3312
#define BLK_BEETROOTS_1 3315
#define BLK_GRASSPATH 3328
#define BLK_NULL_2 3344
#define BLK_REPEATINGCOMMANDBLOCK 3360
#define BLK_CHAINCOMMANDBLOCK 3376
#define BLK_FROSTEDICE 3392
#define BLK_MAGMA 3408
#define BLK_NETHERWARTBLOCK 3424
#define BLK_REDNETHERBRICK 3440
#define BLK_BONEBLOCK 3456
#define BLK_STRUCTUREVOID 3472
#define BLK_OBSERVER 3488
#define BLK_SHULKERBOXWHITE 3504
#define BLK_SHULKERBOXORANGE 3520
#define BLK_SHULKERBOXMAGENTA 3536
#define BLK_SHULKERBOXLIGHTBLUE 3552
#define BLK_SHULKERBOXYELLOW 3568
#define BLK_SHULKERBOXLIME 3584
#define BLK_SHULKERBOXPINK 3600
#define BLK_SHULKERBOXGRAY 3616
#define BLK_SHULKERBOXSILVER 3632
#define BLK_SHULKERBOXCYAN 3648
#define BLK_SHULKERBOXPURPLE 3664
#define BLK_SHULKERBOXBLUE 3680
#define BLK_SHULKERBOXBROWN 3696
#define BLK_SHULKERBOXGREEN 3712
#define BLK_SHULKERBOXRED 3728
#define BLK_SHULKERBOXBLACK 3744
#define BLK_STRUCTUREBLOCK 4080

struct block_material {
		char* name;
		uint8_t flammable;
		uint8_t replacable;
		uint8_t requiresnotool;
		uint8_t mobility;
		uint8_t adventure_exempt;
		uint8_t liquid;
		uint8_t solid;
		uint8_t blocksLight;
		uint8_t blocksMovement;
		uint8_t opaque;
};

struct block_material* getBlockMaterial(char* name);

struct block_info* getBlockInfo(block b);

struct block_info* getBlockInfoLoose(block b);

item getItemFromName(const char* name);

struct block_info {
		int (*onBlockDestroyed)(struct world* world, block blk, int32_t x, int32_t y, int32_t z, block replacedBy);
		int (*onBlockDestroyedPlayer)(struct player* player, struct world* world, block blk, int32_t x, int32_t y, int32_t z);
		block (*onBlockPlaced)(struct world* world, block blk, int32_t x, int32_t y, int32_t z, block replaced);
		block (*onBlockPlacedPlayer)(struct player* player, struct world* world, block blk, int32_t x, int32_t y, int32_t z, uint8_t face);
		void (*onBlockInteract)(struct world* world, block blk, int32_t x, int32_t y, int32_t z, struct player* player, uint8_t face, float curPosX, float curPosY, float curPosZ);
		void (*onBlockCollide)(struct world* world, block blk, int32_t x, int32_t y, int32_t z, struct entity* entity);
		void (*onBlockUpdate)(struct world* world, block blk, int32_t x, int32_t y, int32_t z);
		void (*dropItems)(struct world* world, block blk, int32_t x, int32_t y, int32_t z, int fortune);
		int (*canBePlaced)(struct world* world, block blk, int32_t x, int32_t y, int32_t z);
		void (*randomTick)(struct world* world, struct chunk* ch, block blk, int32_t x, int32_t y, int32_t z);
		int (*scheduledTick)(struct world* world, block blk, int32_t x, int32_t y, int32_t z);
		struct boundingbox* boundingBoxes;
		size_t boundingBox_count;
		float hardness;
		struct block_material* material;
		float slipperiness;
		item drop;
		int16_t drop_damage;
		uint8_t drop_min;
		uint8_t drop_max;
		uint8_t fullCube;
		uint8_t canProvidePower;
		uint8_t lightOpacity;
		uint8_t lightEmission;
		float resistance;
};

int falling_canFallThrough(block b);

int isNormalCube(struct block_info* bi);

void init_materials();

void init_blocks();

size_t getBlockSize();

void add_block_material(struct block_material* bm);

void add_block_info(block blk, struct block_info* bm);

void onBlockInteract_workbench(struct world* world, block blk, int32_t x, int32_t y, int32_t z, struct player* player, uint8_t face, float curPosX, float curPosY, float curPosZ);

void onBlockInteract_chest(struct world* world, block blk, int32_t x, int32_t y, int32_t z, struct player* player, uint8_t face, float curPosX, float curPosY, float curPosZ);

void onBlockInteract_furnace(struct world* world, block blk, int32_t x, int32_t y, int32_t z, struct player* player, uint8_t face, float curPosX, float curPosY, float curPosZ);

void update_furnace(struct world* world, struct tile_entity* te);

int onBlockDestroyed_chest(struct world* world, block blk, int32_t x, int32_t y, int32_t z, block replacedBy);

int onBlockDestroyed_furnace(struct world* world, block blk, int32_t x, int32_t y, int32_t z, block replacedBy);

int canBePlaced_reeds(struct world* world, block blk, int32_t x, int32_t y, int32_t z);

void randomTick_sapling(struct world* world, struct chunk* chunk, block blk, int32_t x, int32_t y, int32_t z);

#endif /* BLOCK_H_ */
