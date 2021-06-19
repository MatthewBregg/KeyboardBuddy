/*
 * Copyright 2021 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


struct Emoji {
  char name[13];
  char unicode[4];
};

// Keep list sorted.
const PROGMEM Emoji emojis[] = {
{ "abacus" , "9ee" }, /* abacus;1f9ee */
{ "accordion" , "a97" }, /* accordion;1fa97 */
{ "adhesiveband" , "a79" }, /* adhesive bandage;1fa79 */
{ "admissiontic" , "39f" }, /* admission tickets;1f39f */
{ "adult" , "9d1" }, /* adult;1f9d1 */
{ "aerialtramwa" , "6a1" }, /* aerial tramway;1f6a1 */
{ "alienmonster" , "47e" }, /* alien monster;1f47e */
{ "ambulance" , "691" }, /* ambulance;1f691 */
{ "americanfoot" , "3c8" }, /* american football;1f3c8 */
{ "amphora" , "3fa" }, /* amphora;1f3fa */
{ "anatomicalhe" , "ac0" }, /* anatomical heart;1fac0 */
{ "angersymbol" , "4a2" }, /* anger symbol;1f4a2 */
{ "angryface" , "620" }, /* angry face;1f620 */
{ "anguishedfac" , "627" }, /* anguished face;1f627 */
{ "ant" , "41c" }, /* ant;1f41c */
{ "antennabars" , "4f6" }, /* antenna with bars;1f4f6 */
{ "articulatedl" , "69b" }, /* articulated lorry;1f69b */
{ "artistpalett" , "3a8" }, /* artist palette;1f3a8 */
{ "astonishedfa" , "632" }, /* astonished face;1f632 */
{ "athleticshoe" , "45f" }, /* athletic shoe;1f45f */
{ "aubergine" , "346" }, /* aubergine;1f346 */
{ "automatedtel" , "3e7" }, /* automated teller machine;1f3e7 */
{ "automobile" , "697" }, /* automobile;1f697 */
{ "autorickshaw" , "6fa" }, /* auto rickshaw;1f6fa */
{ "avocado" , "951" }, /* avocado;1f951 */
{ "axe" , "a93" }, /* axe;1fa93 */
{ "baby" , "476" }, /* baby;1f476 */
{ "babyangel" , "47c" }, /* baby angel;1f47c */
{ "babybottle" , "37c" }, /* baby bottle;1f37c */
{ "babychick" , "424" }, /* baby chick;1f424 */
{ "babysymbol" , "6bc" }, /* baby symbol;1f6bc */
{ "backofenvelo" , "582" }, /* back of envelope;1f582 */
{ "bacon" , "953" }, /* bacon;1f953 */
{ "bactriancame" , "42b" }, /* bactrian camel;1f42b */
{ "badger" , "9a1" }, /* badger;1f9a1 */
{ "badmintonrac" , "3f8" }, /* badminton racquet and shuttlecock;1f3f8 */
{ "bagel" , "96f" }, /* bagel;1f96f */
{ "baggageclaim" , "6c4" }, /* baggage claim;1f6c4 */
{ "baguettebrea" , "956" }, /* baguette bread;1f956 */
{ "balletshoes" , "a70" }, /* ballet shoes;1fa70 */
{ "ballofyarn" , "9f6" }, /* ball of yarn;1f9f6 */
{ "balloon" , "388" }, /* balloon;1f388 */
{ "ballotboxwit" , "5f3" }, /* ballot box with ballot;1f5f3 */
{ "ballotscript" , "5f4" }, /* ballot script x;1f5f4 */
{ "banana" , "34c" }, /* banana;1f34c */
{ "banjo" , "a95" }, /* banjo;1fa95 */
{ "bank" , "3e6" }, /* bank;1f3e6 */
{ "barberpole" , "488" }, /* barber pole;1f488 */
{ "barchart" , "4ca" }, /* bar chart;1f4ca */
{ "barofsoap" , "9fc" }, /* bar of soap;1f9fc */
{ "basket" , "9fa" }, /* basket;1f9fa */
{ "basketballan" , "3c0" }, /* basketball and hoop;1f3c0 */
{ "bat" , "987" }, /* bat;1f987 */
{ "bath" , "6c0" }, /* bath;1f6c0 */
{ "bathtub" , "6c1" }, /* bathtub;1f6c1 */
{ "battery" , "50b" }, /* battery;1f50b */
{ "beachwithumb" , "3d6" }, /* beach with umbrella;1f3d6 */
{ "beamedascend" , "39c" }, /* beamed ascending musical notes;1f39c */
{ "beameddescen" , "39d" }, /* beamed descending musical notes;1f39d */
{ "bearface" , "43b" }, /* bear face;1f43b */
{ "beatingheart" , "493" }, /* beating heart;1f493 */
{ "beaver" , "9ab" }, /* beaver;1f9ab */
{ "bed" , "6cf" }, /* bed;1f6cf */
{ "beermug" , "37a" }, /* beer mug;1f37a */
{ "beetle" , "ab2" }, /* beetle;1fab2 */
{ "bell" , "514" }, /* bell;1f514 */
{ "bellhopbell" , "6ce" }, /* bellhop bell;1f6ce */
{ "bellpepper" , "ad1" }, /* bell pepper;1fad1 */
{ "bentobox" , "371" }, /* bento box;1f371 */
{ "beveragebox" , "9c3" }, /* beverage box;1f9c3 */
{ "bicycle", "6b2"},
{ "bicyclist" , "6b4" }, /* bicyclist;1f6b4 */
{ "bikini" , "459" }, /* bikini;1f459 */
{ "billedcap" , "9e2" }, /* billed cap;1f9e2 */
{ "billiards" , "3b1" }, /* billiards;1f3b1 */
{ "bird" , "426" }, /* bird;1f426 */
{ "birthdaycake" , "382" }, /* birthday cake;1f382 */
{ "bison" , "9ac" }, /* bison;1f9ac */
{ "blackdroplet" , "322" }, /* black droplet;1f322 */
{ "blackfolder" , "5bf" }, /* black folder;1f5bf */
{ "blackhardshe" , "5aa" }, /* black hard shell floppy disk;1f5aa */
{ "blackpennant" , "3f2" }, /* black pennant;1f3f2 */
{ "blackpushpin" , "588" }, /* black pushpin;1f588 */
{ "blackrosette" , "3f6" }, /* black rosette;1f3f6 */
{ "blackskullan" , "571" }, /* black skull and crossbones;1f571 */
{ "blacktouchto" , "57f" }, /* black touchtone telephone;1f57f */
{ "blossom" , "33c" }, /* blossom;1f33c */
{ "blowfish" , "421" }, /* blowfish;1f421 */
{ "blueberries" , "ad0" }, /* blueberries;1fad0 */
{ "bluebook" , "4d8" }, /* blue book;1f4d8 */
{ "boar" , "417" }, /* boar;1f417 */
{ "boat", "6f3" }, 
{ "bomb" , "4a3" }, /* bomb;1f4a3 */
{ "bone" , "9b4" }, /* bone;1f9b4 */
{ "book" , "56e" }, /* book;1f56e */
{ "bookmark" , "516" }, /* bookmark;1f516 */
{ "bookmarktabs" , "4d1" }, /* bookmark tabs;1f4d1 */
{ "books" , "4da" }, /* books;1f4da */
{ "boomerang" , "a83" }, /* boomerang;1fa83 */
{ "bottlewithpo" , "37e" }, /* bottle with popping cork;1f37e */
{ "bouquet" , "490" }, /* bouquet;1f490 */
{ "bouquetofflo" , "395" }, /* bouquet of flowers;1f395 */
{ "bowandarrow" , "3f9" }, /* bow and arrow;1f3f9 */
{ "bowling" , "3b3" }, /* bowling;1f3b3 */
{ "bowlofhygiei" , "54f" }, /* bowl of hygieia;1f54f */
{ "bowlwithspoo" , "963" }, /* bowl with spoon;1f963 */
{ "boxingglove" , "94a" }, /* boxing glove;1f94a */
{ "boy" , "466" }, /* boy;1f466 */
{ "boyssymbol" , "6c9" }, /* boys symbol;1f6c9 */
{ "brain" , "9e0" }, /* brain;1f9e0 */
{ "bread" , "35e" }, /* bread;1f35e */
{ "brick" , "9f1" }, /* brick;1f9f1 */
{ "bridewithvei" , "470" }, /* bride with veil;1f470 */
{ "bridgeatnigh" , "309" }, /* bridge at night;1f309 */
{ "briefcase" , "4bc" }, /* briefcase;1f4bc */
{ "briefs" , "a72" }, /* briefs;1fa72 */
{ "broccoli" , "966" }, /* broccoli;1f966 */
{ "brokenheart" , "494" }, /* broken heart;1f494 */
{ "broom" , "9f9" }, /* broom;1f9f9 */
{ "bubbletea" , "9cb" }, /* bubble tea;1f9cb */
{ "bucket" , "aa3" }, /* bucket;1faa3 */
{ "bug" , "41b" }, /* bug;1f41b */
{ "buildingcons" , "3d7" }, /* building construction;1f3d7 */
{ "bullhorn" , "56b" }, /* bullhorn;1f56b */
{ "burrito" , "32f" }, /* burrito;1f32f */
{ "bus" , "68c" }, /* bus;1f68c */
{ "bus", "68c"}, 
{ "busstop" , "68f" }, /* bus stop;1f68f */
{ "bustinsilhou" , "464" }, /* bust in silhouette;1f464 */
{ "bustsinsilho" , "465" }, /* busts in silhouette;1f465 */
{ "butter" , "9c8" }, /* butter;1f9c8 */
{ "butterfly" , "98b" }, /* butterfly;1f98b */
{ "cactus" , "335" }, /* cactus;1f335 */
{ "calendar" , "4c5" }, /* calendar;1f4c5 */
{ "callmehand" , "919" }, /* call me hand;1f919 */
{ "camera" , "4f7" }, /* camera;1f4f7 */
{ "camping" , "3d5" }, /* camping;1f3d5 */
{ "cancellation" , "5d9" }, /* cancellation x;1f5d9 */
{ "candle" , "56f" }, /* candle;1f56f */
{ "candy" , "36c" }, /* candy;1f36c */
{ "cannedfood" , "96b" }, /* canned food;1f96b */
{ "canoe" , "6f6" }, /* canoe;1f6f6 */
{ "cardace" , "0b1" }, /* playing card ace of hearts;1f0b1 */
{ "cardfilebox" , "5c3" }, /* card file box;1f5c3 */
{ "cardfool" , "0e0" }, /* playing card fool;1f0e0 */
{ "cardindex" , "4c7" }, /* card index;1f4c7 */
{ "cardindexdiv" , "5c2" }, /* card index dividers;1f5c2 */
{ "cardjoker" , "0bf" }, /* playing card red joker;1f0bf */
{ "cardtrump1" , "0e1" }, /* playing card trump-1;1f0e1 */
{ "cardtrump10" , "0ea" }, /* playing card trump-10;1f0ea */
{ "cardtrump11" , "0eb" }, /* playing card trump-11;1f0eb */
{ "cardtrump12" , "0ec" }, /* playing card trump-12;1f0ec */
{ "cardtrump13" , "0ed" }, /* playing card trump-13;1f0ed */
{ "cardtrump14" , "0ee" }, /* playing card trump-14;1f0ee */
{ "cardtrump15" , "0ef" }, /* playing card trump-15;1f0ef */
{ "cardtrump16" , "0f0" }, /* playing card trump-16;1f0f0 */
{ "cardtrump17" , "0f1" }, /* playing card trump-17;1f0f1 */
{ "cardtrump18" , "0f2" }, /* playing card trump-18;1f0f2 */
{ "cardtrump19" , "0f3" }, /* playing card trump-19;1f0f3 */
{ "cardtrump2" , "0e2" }, /* playing card trump-2;1f0e2 */
{ "cardtrump20" , "0f4" }, /* playing card trump-20;1f0f4 */
{ "cardtrump21" , "0f5" }, /* playing card trump-21;1f0f5 */
{ "cardtrump3" , "0e3" }, /* playing card trump-3;1f0e3 */
{ "cardtrump4" , "0e4" }, /* playing card trump-4;1f0e4 */
{ "cardtrump5" , "0e5" }, /* playing card trump-5;1f0e5 */
{ "cardtrump6" , "0e6" }, /* playing card trump-6;1f0e6 */
{ "cardtrump7" , "0e7" }, /* playing card trump-7;1f0e7 */
{ "cardtrump8" , "0e8" }, /* playing card trump-8;1f0e8 */
{ "cardtrump9" , "0e9" }, /* playing card trump-9;1f0e9 */
{ "carouselhors" , "3a0" }, /* carousel horse;1f3a0 */
{ "carpentrysaw" , "a9a" }, /* carpentry saw;1fa9a */
{ "carpstreamer" , "38f" }, /* carp streamer;1f38f */
{ "carrot" , "955" }, /* carrot;1f955 */
{ "cartwheel" , "938" }, /* person doing cartwheel;1f938 */
{ "cashwings", "4b8" },
{ "cat" , "408" }, /* cat;1f408 */
{ "catface" , "431" }, /* cat face;1f431 */
{ "catfacewitht" , "639" }, /* cat face with tears of joy;1f639 */
{ "chair" , "a91" }, /* chair;1fa91 */
{ "chartwithdow" , "4c9" }, /* chart with downwards trend;1f4c9 */
{ "chartwithupw" , "4c8" }, /* chart with upwards trend;1f4c8 */
{ "checkerboard" , "67e" }, /* checker board;1f67e */
{ "cheeringmega" , "4e3" }, /* cheering megaphone;1f4e3 */
{ "cheesewedge" , "9c0" }, /* cheese wedge;1f9c0 */
{ "chequeredfla" , "3c1" }, /* chequered flag;1f3c1 */
{ "cherries" , "352" }, /* cherries;1f352 */
{ "cherryblosso" , "338" }, /* cherry blossom;1f338 */
{ "chessbishop" , "a03" }, /* neutral chess bishop;1fa03 */
{ "chessking" , "a00" }, /* neutral chess king;1fa00 */
{ "chessknight" , "a04" }, /* neutral chess knight;1fa04 */
{ "chesspawn" , "a05" }, /* neutral chess pawn;1fa05 */
{ "chessqueen" , "a01" }, /* neutral chess queen;1fa01 */
{ "chessrook" , "a02" }, /* neutral chess rook;1fa02 */
{ "chestnut" , "330" }, /* chestnut;1f330 */
{ "chicken" , "414" }, /* chicken;1f414 */
{ "child" , "9d2" }, /* child;1f9d2 */
{ "childrencros" , "6b8" }, /* children crossing;1f6b8 */
{ "chipmunk" , "43f" }, /* chipmunk;1f43f */
{ "chocolatebar" , "36b" }, /* chocolate bar;1f36b */
{ "chopsticks" , "962" }, /* chopsticks;1f962 */
{ "christmastre" , "384" }, /* christmas tree;1f384 */
{ "cinema" , "3a6" }, /* cinema;1f3a6 */
{ "circledantic" , "10e" }, /* circled anticlockwise arrow;1f10e */
{ "circledcc" , "16d" }, /* circled cc;1f16d */
{ "circledcwith" , "16e" }, /* circled c with overlaid backslash;1f16e */
{ "circleddolla" , "10f" }, /* circled dollar sign with overlaid backslash;1f10f */
{ "circledhuman" , "16f" }, /* circled human figure;1f16f */
{ "circledinfor" , "6c8" }, /* circled information source;1f6c8 */
{ "circledzerow" , "10d" }, /* circled zero with slash;1f10d */
{ "circustent" , "3aa" }, /* circus tent;1f3aa */
{ "cityscape" , "3d9" }, /* cityscape;1f3d9 */
{ "cityscapeatd" , "306" }, /* cityscape at dusk;1f306 */
{ "clamshellmob" , "581" }, /* clamshell mobile phone;1f581 */
{ "clapperboard" , "3ac" }, /* clapper board;1f3ac */
{ "clapping", "44f"},
{ "classicalbui" , "3db" }, /* classical building;1f3db */
{ "climbing", "9d7"} /* https://www.compart.com/en/unicode/U+1F9D7 */,
{ "clinkingbeer" , "37b" }, /* clinking beer mugs;1f37b */
{ "clinkingglas" , "942" }, /* clinking glasses;1f942 */
{ "clipboard" , "4cb" }, /* clipboard;1f4cb */
{ "clockface1" , "550" }, /* clock face one oclock;1f550 */
{ "clockface10" , "559" }, /* clock face ten oclock;1f559 */
{ "clockface11" , "55a" }, /* clock face eleven oclock;1f55a */
{ "clockface12" , "55b" }, /* clock face twelve oclock;1f55b */
{ "clockface2" , "551" }, /* clock face two oclock;1f551 */
{ "clockface3" , "552" }, /* clock face three oclock;1f552 */
{ "clockface4" , "553" }, /* clock face four oclock;1f553 */
{ "clockface5" , "554" }, /* clock face five oclock;1f554 */
{ "clockface6" , "555" }, /* clock face six oclock;1f555 */
{ "clockface7" , "556" }, /* clock face seven oclock;1f556 */
{ "clockface8" , "557" }, /* clock face eight oclock;1f557 */
{ "clockface9" , "558" }, /* clock face nine oclock;1f558 */
{ "clockwiserig" , "5d8" }, /* clockwise right and left semicircle arrows;1f5d8 */
{ "closedbook" , "4d5" }, /* closed book;1f4d5 */
{ "closedmailbo" , "4ea" }, /* closed mailbox with lowered flag;1f4ea */
{ "closedumbrel" , "302" }, /* closed umbrella;1f302 */
{ "cloudlightn" , "329" }, /* cloud with lightning;1f329 */
{ "cloudrain" , "327" }, /* cloud with rain;1f327 */
{ "cloudsnow" , "328" }, /* cloud with snow;1f328 */
{ "cloudtornado" , "32a" }, /* cloud with tornado;1f32a */
{ "clownface" , "921" }, /* clown face;1f921 */
{ "coat" , "9e5" }, /* coat;1f9e5 */
{ "cockroach" , "ab3" }, /* cockroach;1fab3 */
{ "cocktailglas" , "378" }, /* cocktail glass;1f378 */
{ "coconut" , "965" }, /* coconut;1f965 */
{ "coin" , "a99" }, /* coin;1fa99 */
{ "collisionsym" , "4a5" }, /* collision symbol;1f4a5 */
{ "compass" , "9ed" }, /* compass;1f9ed */
{ "compression" , "5dc" }, /* compression;1f5dc */
{ "confettiball" , "38a" }, /* confetti ball;1f38a */
{ "confusedface" , "615" }, /* confused face;1f615 */
{ "construction" , "477" }, /* construction worker;1f477 */
{ "construction" , "6a7" }, /* construction sign;1f6a7 */
{ "controlknobs" , "39b" }, /* control knobs;1f39b */
{ "conveniences" , "3ea" }, /* convenience store;1f3ea */
{ "cookedrice" , "35a" }, /* cooked rice;1f35a */
{ "cookie" , "36a" }, /* cookie;1f36a */
{ "cooking" , "373" }, /* cooking;1f373 */
{ "copyleft" , "12f" }, /* copyleft symbol;1f12f */
{ "couchandlamp" , "6cb" }, /* couch and lamp;1f6cb */
{ "couplewithhe" , "491" }, /* couple with heart;1f491 */
{ "cow" , "404" }, /* cow;1f404 */
{ "cowface" , "42e" }, /* cow face;1f42e */
{ "crab" , "980" }, /* crab;1f980 */
{ "creditcard" , "4b3" }, /* credit card;1f4b3 */
{ "crescentmoon" , "319" }, /* crescent moon;1f319 */
{ "cricket" , "997" }, /* cricket;1f997 */
{ "cricketbatan" , "3cf" }, /* cricket bat and ball;1f3cf */
{ "crocodile" , "40a" }, /* crocodile;1f40a */
{ "croissant" , "950" }, /* croissant;1f950 */
{ "crossedflags" , "38c" }, /* crossed flags;1f38c */
{ "crown" , "451" }, /* crown;1f451 */
{ "cryingface" , "622" }, /* crying face;1f622 */
{ "crystalball" , "52e" }, /* crystal ball;1f52e */
{ "cucumber" , "952" }, /* cucumber;1f952 */
{ "cupcake" , "9c1" }, /* cupcake;1f9c1 */
{ "cupwithstraw" , "964" }, /* cup with straw;1f964 */
{ "curlingstone" , "94c" }, /* curling stone;1f94c */
{ "currencyexch" , "4b1" }, /* currency exchange;1f4b1 */
{ "curryandrice" , "35b" }, /* curry and rice;1f35b */
{ "custard" , "36e" }, /* custard;1f36e */
{ "customs" , "6c3" }, /* customs;1f6c3 */
{ "cutofmeat" , "969" }, /* cut of meat;1f969 */
{ "cyclone" , "300" }, /* cyclone;1f300 */
{ "daggerknife" , "5e1" }, /* dagger knife;1f5e1 */
{ "dancer" , "483" }, /* dancer;1f483 */
{ "dango" , "361" }, /* dango;1f361 */
{ "darksunglass" , "576" }, /* dark sunglasses;1f576 */
{ "dashsymbol" , "4a8" }, /* dash symbol;1f4a8 */
{ "deafperson" , "9cf" }, /* deaf person;1f9cf */
{ "deciduoustre" , "333" }, /* deciduous tree;1f333 */
{ "decreasefont" , "5db" }, /* decrease font size symbol;1f5db */
{ "deer" , "98c" }, /* deer;1f98c */
{ "deliverytruc" , "69a" }, /* delivery truck;1f69a */
{ "departmentst" , "3ec" }, /* department store;1f3ec */
{ "derelicthous" , "3da" }, /* derelict house building;1f3da */
{ "desert" , "3dc" }, /* desert;1f3dc */
{ "desertisland" , "3dd" }, /* desert island;1f3dd */
{ "desktopcompu" , "5a5" }, /* desktop computer;1f5a5 */
{ "desktopwindo" , "5d4" }, /* desktop window;1f5d4 */
{ "diamondshape" , "4a0" }, /* diamond shape with a dot inside;1f4a0 */
{ "digiteightco" , "109" }, /* digit eight comma;1f109 */
{ "digitfivecom" , "106" }, /* digit five comma;1f106 */
{ "digitfourcom" , "105" }, /* digit four comma;1f105 */
{ "digitninecom" , "10a" }, /* digit nine comma;1f10a */
{ "digitonecomm" , "102" }, /* digit one comma;1f102 */
{ "digitsevenco" , "108" }, /* digit seven comma;1f108 */
{ "digitsixcomm" , "107" }, /* digit six comma;1f107 */
{ "digitthreeco" , "104" }, /* digit three comma;1f104 */
{ "digittwocomm" , "103" }, /* digit two comma;1f103 */
{ "digitzerocom" , "101" }, /* digit zero comma;1f101 */
{ "digitzeroful" , "100" }, /* digit zero full stop;1f100 */
{ "dingbatcircl" , "10b" }, /* dingbat circled sans-serif digit zero;1f10b */
{ "dingbatnegat" , "10c" }, /* dingbat negative circled sans-serif digit zero;1f10c */
{ "directhit" , "3af" }, /* direct hit;1f3af */
{ "disappointed" , "61e" }, /* disappointed face;1f61e */
{ "disappointed" , "625" }, /* disappointed but relieved face;1f625 */
{ "disguisedfac" , "978" }, /* disguised face;1f978 */
{ "divingmask" , "93f" }, /* diving mask;1f93f */
{ "diyalamp" , "a94" }, /* diya lamp;1fa94 */
{ "dizzyface" , "635" }, /* dizzy face;1f635 */
{ "dizzysymbol" , "4ab" }, /* dizzy symbol;1f4ab */
{ "document" , "5b9" }, /* document with text;1f5b9 */
{ "document" , "5ce" }, /* document;1f5ce */
{ "dodo" , "9a4" }, /* dodo;1f9a4 */
{ "dog" , "415" }, /* dog;1f415 */
{ "dogface" , "436" }, /* dog face;1f436 */
{ "dollarj" , "4b5" }, /* banknote with dollar sign;1f4b5 */
{ "dolphin" , "42c" }, /* dolphin;1f42c */
{ "dominotile" , "030" }, /* domino tile horizontal back;1f030 */
{ "donotlitters" , "6af" }, /* do not litter symbol;1f6af */
{ "door" , "6aa" }, /* door;1f6aa */
{ "doughnut" , "369" }, /* doughnut;1f369 */
{ "doveofpeace" , "54a" }, /* dove of peace;1f54a */
{ "dragon" , "409" }, /* dragon;1f409 */
{ "dragonface" , "432" }, /* dragon face;1f432 */
{ "dress" , "457" }, /* dress;1f457 */
{ "dromedarycam" , "42a" }, /* dromedary camel;1f42a */
{ "droolingface" , "924" }, /* drooling face;1f924 */
{ "droplet" , "4a7" }, /* droplet;1f4a7 */
{ "dropofblood" , "a78" }, /* drop of blood;1fa78 */
{ "drumwithdrum" , "941" }, /* drum with drumsticks;1f941 */
{ "duck" , "986" }, /* duck;1f986 */
{ "duck", "986"} /* https://www.compart.com/en/unicode/U+1F986 */,
{ "dumpling" , "95f" }, /* dumpling;1f95f */
{ "dvd" , "4c0" }, /* dvd;1f4c0 */
{ "emailsymbol" , "4e7" }, /* e-mail symbol;1f4e7 */
{ "eagle" , "985" }, /* eagle;1f985 */
{ "ear" , "442" }, /* ear;1f442 */
{ "earofmaize" , "33d" }, /* ear of maize;1f33d */
{ "earofrice" , "33e" }, /* ear of rice;1f33e */
{ "earthglobeam" , "30e" }, /* earth globe americas;1f30e */
{ "earthglobeas" , "30f" }, /* earth globe asia-australia;1f30f */
{ "earthglobeeu" , "30d" }, /* earth globe europe-africa;1f30d */
{ "egg" , "95a" }, /* egg;1f95a */
{ "electricligh" , "4a1" }, /* electric light bulb;1f4a1 */
{ "electricplug" , "50c" }, /* electric plug;1f50c */
{ "electrictorc" , "526" }, /* electric torch;1f526 */
{ "elephant" , "418" }, /* elephant;1f418 */
{ "elevator" , "6d7" }, /* elevator;1f6d7 */
{ "elf" , "9dd" }, /* elf;1f9dd */
{ "emptydocumen" , "5cb" }, /* empty document;1f5cb */
{ "emptynote" , "5c5" }, /* empty note;1f5c5 */
{ "emptynotepad" , "5c7" }, /* empty note pad;1f5c7 */
{ "emptynotepag" , "5c6" }, /* empty note page;1f5c6 */
{ "emptypage" , "5cc" }, /* empty page;1f5cc */
{ "emptypages" , "5cd" }, /* empty pages;1f5cd */
{ "envelopewith" , "4e9" }, /* envelope with downwards arrow above;1f4e9 */
{ "envelopewith" , "584" }, /* envelope with lightning;1f584 */
{ "euroj" , "4b6" }, /* banknote with euro sign;1f4b6 */
{ "europeancast" , "3f0" }, /* european castle;1f3f0 */
{ "europeanpost" , "3e4" }, /* european post office;1f3e4 */
{ "evergreentre" , "332" }, /* evergreen tree;1f332 */
{ "expressionle" , "611" }, /* expressionless face;1f611 */
{ "extraterrest" , "47d" }, /* extraterrestrial alien;1f47d */
{ "eye" , "441" }, /* eye;1f441 */
{ "eyeglasses" , "453" }, /* eyeglasses;1f453 */
{ "eyes" , "440" }, /* eyes;1f440 */
{ "facemassage" , "486" }, /* face massage;1f486 */
{ "facepalm" , "926" }, /* face palm;1f926 */
{ "facesavourin" , "60b" }, /* face savouring delicious food;1f60b */
{ "facescreamin" , "631" }, /* face screaming in fear;1f631 */
{ "facewithcold" , "613" }, /* face with cold sweat;1f613 */
{ "facewithcowb" , "920" }, /* face with cowboy hat;1f920 */
{ "facewithhead" , "915" }, /* face with head-bandage;1f915 */
{ "facewithlook" , "624" }, /* face with look of triumph;1f624 */
{ "facewithmono" , "9d0" }, /* face with monocle;1f9d0 */
{ "facewithnogo" , "645" }, /* face with no good gesture;1f645 */
{ "facewithokge" , "646" }, /* face with ok gesture;1f646 */
{ "facewithopen" , "62e" }, /* face with open mouth;1f62e */
{ "facewithopen" , "630" }, /* face with open mouth and cold sweat;1f630 */
{ "facewithpart" , "973" }, /* face with party horn and party hat;1f973 */
{ "facewithplea" , "97a" }, /* face with pleading eyes;1f97a */
{ "facewithroll" , "644" }, /* face with rolling eyes;1f644 */
{ "facewithtear" , "602" }, /* face with tears of joy;1f602 */
{ "facewithunev" , "974" }, /* face with uneven eyes and wavy mouth;1f974 */
{ "factory" , "3ed" }, /* factory;1f3ed */
{ "fairy" , "9da" }, /* fairy;1f9da */
{ "falafel" , "9c6" }, /* falafel;1f9c6 */
{ "fallenleaf" , "342" }, /* fallen leaf;1f342 */
{ "family" , "46a" }, /* family;1f46a */
{ "fatherchrist" , "385" }, /* father christmas;1f385 */
{ "faxicon" , "5b7" }, /* fax icon;1f5b7 */
{ "faxmachine" , "4e0" }, /* fax machine;1f4e0 */
{ "fearfulface" , "628" }, /* fearful face;1f628 */
{ "feather" , "ab6" }, /* feather;1fab6 */
{ "fencer" , "93a" }, /* fencer;1f93a */
{ "ferriswheel" , "3a1" }, /* ferris wheel;1f3a1 */
{ "fieldhockeys" , "3d1" }, /* field hockey stick and ball;1f3d1 */
{ "filecabinet" , "5c4" }, /* file cabinet;1f5c4 */
{ "filefolder" , "4c1" }, /* file folder;1f4c1 */
{ "filmframes" , "39e" }, /* film frames;1f39e */
{ "filmprojecto" , "4fd" }, /* film projector;1f4fd */
{ "fire" , "525" }, /* fire;1f525 */
{ "fire", "525"}, 
{ "firecracker" , "9e8" }, /* firecracker;1f9e8 */
{ "fireengine" , "692" }, /* fire engine;1f692 */
{ "fireextingui" , "9ef" }, /* fire extinguisher;1f9ef */
{ "fireworks" , "386" }, /* fireworks;1f386 */
{ "fireworkspar" , "387" }, /* firework sparkler;1f387 */
{ "firstquarter" , "313" }, /* first quarter moon symbol;1f313 */
{ "firstquarter" , "31b" }, /* first quarter moon with face;1f31b */
{ "fish" , "41f" }, /* fish;1f41f */
{ "fishcakewith" , "365" }, /* fish cake with swirl design;1f365 */
{ "fishingpolea" , "3a3" }, /* fishing pole and fish;1f3a3 */
{ "fistedhandsi" , "44a" }, /* fisted hand sign;1f44a */
{ "flamingo" , "9a9" }, /* flamingo;1f9a9 */
{ "flatbread" , "ad3" }, /* flatbread;1fad3 */
{ "flatshoe" , "97f" }, /* flat shoe;1f97f */
{ "flexedbicep", "4aa"},
{ "flexedbiceps" , "4aa" }, /* flexed biceps;1f4aa */
{ "floppydisk" , "4be" }, /* floppy disk;1f4be */
{ "flowerplayin" , "3b4" }, /* flower playing cards;1f3b4 */
{ "flushedface" , "633" }, /* flushed face;1f633 */
{ "fly" , "ab0" }, /* fly;1fab0 */
{ "flyingdisc" , "94f" }, /* flying disc;1f94f */
{ "flyingenvelo" , "585" }, /* flying envelope;1f585 */
{ "flyingsaucer" , "6f8" }, /* flying saucer;1f6f8 */
{ "fog" , "32b" }, /* fog;1f32b */
{ "foggy" , "301" }, /* foggy;1f301 */
{ "folder" , "5c0" }, /* folder;1f5c0 */
{ "fondue" , "ad5" }, /* fondue;1fad5 */
{ "foot" , "9b6" }, /* foot;1f9b6 */
{ "footprints" , "463" }, /* footprints;1f463 */
{ "forkandknife" , "374" }, /* fork and knife;1f374 */
{ "forkandknife" , "37d" }, /* fork and knife with plate;1f37d */
{ "fortunecooki" , "960" }, /* fortune cookie;1f960 */
{ "fourleafclov" , "340" }, /* four leaf clover;1f340 */
{ "foxface" , "98a" }, /* fox face;1f98a */
{ "freezingface" , "976" }, /* freezing face;1f976 */
{ "frenchfries" , "35f" }, /* french fries;1f35f */
{ "friedshrimp" , "364" }, /* fried shrimp;1f364 */
{ "frogface" , "438" }, /* frog face;1f438 */
{ "frontfacing" , "425" }, /* front-facing baby chick;1f425 */
{ "frowningface" , "626" }, /* frowning face with open mouth;1f626 */
{ "fullmoonsymb" , "315" }, /* full moon symbol;1f315 */
{ "fullmoonwith" , "31d" }, /* full moon with face;1f31d */
{ "gamedie" , "3b2" }, /* game die;1f3b2 */
{ "garlic" , "9c4" }, /* garlic;1f9c4 */
{ "gemstone" , "48e" }, /* gem stone;1f48e */
{ "genie" , "9de" }, /* genie;1f9de */
{ "ghost" , "47b" }, /* ghost;1f47b */
{ "giraffeface" , "992" }, /* giraffe face;1f992 */
{ "girl" , "467" }, /* girl;1f467 */
{ "girlssymbol" , "6ca" }, /* girls symbol;1f6ca */
{ "glassofmilk" , "95b" }, /* glass of milk;1f95b */
{ "globewithmer" , "310" }, /* globe with meridians;1f310 */
{ "gloves" , "9e4" }, /* gloves;1f9e4 */
{ "glowingstar" , "31f" }, /* glowing star;1f31f */
{ "goalnet" , "945" }, /* goal net;1f945 */
{ "goat" , "410" }, /* goat;1f410 */
{ "goggles" , "97d" }, /* goggles;1f97d */
{ "golfer" , "3cc" }, /* golfer;1f3cc */
{ "gorilla" , "98d" }, /* gorilla;1f98d */
{ "graduationca" , "393" }, /* graduation cap;1f393 */
{ "grapes" , "347" }, /* grapes;1f347 */
{ "greekalpha" , "00" }, /* greek small letter alpha with psili;1f00 */
{ "greekdasia" , "fe" }, /* greek dasia;1ffe */
{ "greekdialyti" , "c1" }, /* greek dialytika and perispomeni;1fc1 */
{ "greekkoronis" , "bd" }, /* greek koronis;1fbd */
{ "greekoxia" , "fd" }, /* greek oxia;1ffd */
{ "greekperispo" , "c0" }, /* greek perispomeni;1fc0 */
{ "greekprosgeg" , "be" }, /* greek prosgegrammeni;1fbe */
{ "greekpsili" , "bf" }, /* greek psili;1fbf */
{ "greekvaria" , "ef" }, /* greek varia;1fef */
{ "greenapple" , "34f" }, /* green apple;1f34f */
{ "greenbook" , "4d7" }, /* green book;1f4d7 */
{ "greensalad" , "957" }, /* green salad;1f957 */
{ "grimacingfac" , "62c" }, /* grimacing face;1f62c */
{ "grinface" , "600" }, /* grinning face;1f600 */
{ "grinface2" , "601" }, /* grinning face with smiling eyes;1f601 */
{ "grinningcatf" , "638" }, /* grinning cat face with smiling eyes;1f638 */
{ "growingheart" , "497" }, /* growing heart;1f497 */
{ "guardsman" , "482" }, /* guardsman;1f482 */
{ "guidedog" , "9ae" }, /* guide dog;1f9ae */
{ "guitar" , "3b8" }, /* guitar;1f3b8 */
{ "guitar", "3b8"} /* https://www.compart.com/en/unicode/U+1F3B8 */,
{ "haircut" , "487" }, /* haircut;1f487 */
{ "hamburger" , "354" }, /* hamburger;1f354 */
{ "hammer" , "528" }, /* hammer;1f528 */
{ "hammerandwre" , "6e0" }, /* hammer and wrench;1f6e0 */
{ "hamsterface" , "439" }, /* hamster face;1f439 */
{ "handbag" , "45c" }, /* handbag;1f45c */
{ "handball" , "93e" }, /* handball;1f93e */
{ "handshake" , "91d" }, /* handshake;1f91d */
{ "happypersonr" , "64b" }, /* happy person raising one hand;1f64b */
{ "harddisk" , "5b4" }, /* hard disk;1f5b4 */
{ "hatchingchic" , "423" }, /* hatching chick;1f423 */
{ "headphone" , "3a7" }, /* headphone;1f3a7 */
{ "headstone" , "aa6" }, /* headstone;1faa6 */
{ "hearnoevil" , "649" }, /* hear-no-evil monkey;1f649 */
{ "heartblack" , "5a4" }, /* black heart;1f5a4 */
{ "heartblue" , "499" }, /* blue heart;1f499 */
{ "heartbrown" , "90e" }, /* brown heart;1f90e */
{ "heartdecorat" , "49f" }, /* heart decoration;1f49f */
{ "hearteyes" , "60d" }, /* smiling face with heart-shaped eyes;1f60d */
{ "heartgreen" , "49a" }, /* green heart;1f49a */
{ "heartpurple" , "49c" }, /* purple heart;1f49c */
{ "heartwhite" , "90d" }, /* white heart;1f90d */
{ "heartwitharr" , "498" }, /* heart with arrow;1f498 */
{ "heartwithrib" , "49d" }, /* heart with ribbon;1f49d */
{ "heartwithtip" , "394" }, /* heart with tip on the left;1f394 */
{ "heartyellow" , "49b" }, /* yellow heart;1f49b */
{ "heavydollars" , "4b2" }, /* heavy dollar sign;1f4b2 */
{ "hedgehog" , "994" }, /* hedgehog;1f994 */
{ "helicopter" , "681" }, /* helicopter;1f681 */
{ "herb" , "33f" }, /* herb;1f33f */
{ "hibiscus" , "33a" }, /* hibiscus;1f33a */
{ "highheeleds" , "460" }, /* high-heeled shoe;1f460 */
{ "highspeedtr" , "684" }, /* high-speed train;1f684 */
{ "highspeedtr" , "685" }, /* high-speed train with bullet nose;1f685 */
{ "highbrightne" , "506" }, /* high brightness symbol;1f506 */
{ "hikingboot" , "97e" }, /* hiking boot;1f97e */
{ "hindutemple" , "6d5" }, /* hindu temple;1f6d5 */
{ "hippopotamus" , "99b" }, /* hippopotamus;1f99b */
{ "hocho" , "52a" }, /* hocho;1f52a */
{ "hole" , "573" }, /* hole;1f573 */
{ "honeybee" , "41d" }, /* honeybee;1f41d */
{ "honeypot" , "36f" }, /* honey pot;1f36f */
{ "hook" , "a9d" }, /* hook;1fa9d */
{ "horizontaltr" , "6a5" }, /* horizontal traffic light;1f6a5 */
{ "horse" , "40e" }, /* horse;1f40e */
{ "horseface" , "434" }, /* horse face;1f434 */
{ "horseracing" , "3c7" }, /* horse racing;1f3c7 */
{ "hospital" , "3e5" }, /* hospital;1f3e5 */
{ "hotdog" , "32d" }, /* hot dog;1f32d */
{ "hotel" , "3e8" }, /* hotel;1f3e8 */
{ "hotpepper" , "336" }, /* hot pepper;1f336 */
{ "housebuildin" , "3d8" }, /* house buildings;1f3d8 */
{ "housebuildin" , "3e0" }, /* house building;1f3e0 */
{ "housewithgar" , "3e1" }, /* house with garden;1f3e1 */
{ "huggingface" , "917" }, /* hugging face;1f917 */
{ "hundredpoint" , "4af" }, /* hundred points symbol;1f4af */
{ "hushedface" , "62f" }, /* hushed face;1f62f */
{ "hut" , "6d6" }, /* hut;1f6d6 */
{ "icecream" , "368" }, /* ice cream;1f368 */
{ "icecube" , "9ca" }, /* ice cube;1f9ca */
{ "icehockeysti" , "3d2" }, /* ice hockey stick and puck;1f3d2 */
{ "iloveyouhand" , "91f" }, /* i love you hand sign;1f91f */
{ "imp" , "47f" }, /* imp;1f47f */
{ "inboxtray" , "4e5" }, /* inbox tray;1f4e5 */
{ "incomingenve" , "4e8" }, /* incoming envelope;1f4e8 */
{ "increasefont" , "5da" }, /* increase font size symbol;1f5da */
{ "informationd" , "481" }, /* information desk person;1f481 */
{ "izakayalante" , "3ee" }, /* izakaya lantern;1f3ee */
{ "jackolante" , "383" }, /* jack-o-lantern;1f383 */
{ "japanesecast" , "3ef" }, /* japanese castle;1f3ef */
{ "japanesedoll" , "38e" }, /* japanese dolls;1f38e */
{ "japanesegobl" , "47a" }, /* japanese goblin;1f47a */
{ "japaneseogre" , "479" }, /* japanese ogre;1f479 */
{ "japanesepost" , "3e3" }, /* japanese post office;1f3e3 */
{ "jeans" , "456" }, /* jeans;1f456 */
{ "jigsawpuzzle" , "9e9" }, /* jigsaw puzzle piece;1f9e9 */
{ "joystick" , "579" }, /* joystick;1f579 */
{ "juggling" , "939" }, /* juggling;1f939 */
{ "kaaba" , "54b" }, /* kaaba;1f54b */
{ "kangaroo" , "998" }, /* kangaroo;1f998 */
{ "key" , "511" }, /* key;1f511 */
{ "keyboardandm" , "5a6" }, /* keyboard and mouse;1f5a6 */
{ "kimono" , "458" }, /* kimono;1f458 */
{ "kiss" , "48f" }, /* kiss;1f48f */
{ "kissingface" , "617" }, /* kissing face;1f617 */
{ "kissmark" , "48b" }, /* kiss mark;1f48b */
{ "kite" , "a81" }, /* kite;1fa81 */
{ "kiwifruit" , "95d" }, /* kiwifruit;1f95d */
{ "kneelingpers" , "9ce" }, /* kneeling person;1f9ce */
{ "knot" , "aa2" }, /* knot;1faa2 */
{ "koala" , "428" }, /* koala;1f428 */
{ "labcoat" , "97c" }, /* lab coat;1f97c */
{ "label" , "3f7" }, /* label;1f3f7 */
{ "lacrossestic" , "94d" }, /* lacrosse stick and ball;1f94d */
{ "ladder" , "a9c" }, /* ladder;1fa9c */
{ "ladybeetle" , "41e" }, /* lady beetle;1f41e */
{ "lastquarterm" , "317" }, /* last quarter moon symbol;1f317 */
{ "lastquarterm" , "31c" }, /* last quarter moon with face;1f31c */
{ "leafflutteri" , "343" }, /* leaf fluttering in wind;1f343 */
{ "leafygreen" , "96c" }, /* leafy green;1f96c */
{ "ledger" , "4d2" }, /* ledger;1f4d2 */
{ "lefthandtele" , "57b" }, /* left hand telephone receiver;1f57b */
{ "leftluggage" , "6c5" }, /* left luggage;1f6c5 */
{ "leg" , "9b5" }, /* leg;1f9b5 */
{ "lemon" , "34b" }, /* lemon;1f34b */
{ "leopard" , "406" }, /* leopard;1f406 */
{ "levelslider" , "39a" }, /* level slider;1f39a */
{ "lightningmoo" , "5f2" }, /* lightning mood;1f5f2 */
{ "lightrail" , "688" }, /* light rail;1f688 */
{ "linkedpaperc" , "587" }, /* linked paperclips;1f587 */
{ "linksymbol" , "517" }, /* link symbol;1f517 */
{ "lionface" , "981" }, /* lion face;1f981 */
{ "lips" , "5e2" }, /* lips;1f5e2 */
{ "lipstick" , "484" }, /* lipstick;1f484 */
{ "lizard" , "98e" }, /* lizard;1f98e */
{ "llama" , "999" }, /* llama;1f999 */
{ "llama", "999"},
{ "lobster" , "99e" }, /* lobster;1f99e */
{ "lock" , "512" }, /* lock;1f512 */
{ "lollipop" , "36d" }, /* lollipop;1f36d */
{ "longdrum" , "a98" }, /* long drum;1fa98 */
{ "lotionbottle" , "9f4" }, /* lotion bottle;1f9f4 */
{ "loudlycrying" , "62d" }, /* loudly crying face;1f62d */
{ "lovehotel" , "3e9" }, /* love hotel;1f3e9 */
{ "loveletter" , "48c" }, /* love letter;1f48c */
{ "lowbrightnes" , "505" }, /* low brightness symbol;1f505 */
{ "luggage" , "9f3" }, /* luggage;1f9f3 */
{ "lungs" , "ac1" }, /* lungs;1fac1 */
{ "lyingface" , "925" }, /* lying face;1f925 */
{ "mage" , "9d9" }, /* mage;1f9d9 */
{ "magicwand" , "a84" }, /* magic wand;1fa84 */
{ "magnet" , "9f2" }, /* magnet;1f9f2 */
{ "mahjongtile" , "000" }, /* mahjong tile east wind;1f000 */
{ "mammoth" , "9a3" }, /* mammoth;1f9a3 */
{ "man" , "468" }, /* man;1f468 */
{ "manandwomanh" , "46b" }, /* man and woman holding hands;1f46b */
{ "mandancing" , "57a" }, /* man dancing;1f57a */
{ "mango" , "96d" }, /* mango;1f96d */
{ "maninbusines" , "574" }, /* man in business suit levitating;1f574 */
{ "manintuxedo" , "935" }, /* man in tuxedo;1f935 */
{ "mansshoe" , "45e" }, /* mans shoe;1f45e */
{ "mantelpiecec" , "570" }, /* mantelpiece clock;1f570 */
{ "manwithguapi" , "472" }, /* man with gua pi mao;1f472 */
{ "manwithturba" , "473" }, /* man with turban;1f473 */
{ "mapleleaf" , "341" }, /* maple leaf;1f341 */
{ "maskworksymb" , "1ad" }, /* mask work symbol;1f1ad */
{ "matedrink" , "9c9" }, /* mate drink;1f9c9 */
{ "maximize" , "5d6" }, /* maximize;1f5d6 */
{ "meatonbone" , "356" }, /* meat on bone;1f356 */
{ "mecharm" , "9be" }, /* mechanical arm;1f9be */
{ "mechleg" , "9bf" }, /* mechanical leg;1f9bf */
{ "medal1st" , "947" }, /* first place medal;1f947 */
{ "medal2nd" , "948" }, /* second place medal;1f948 */
{ "medal3rd" , "949" }, /* third place medal;1f949 */
{ "melon" , "348" }, /* melon;1f348 */
{ "memo" , "4dd" }, /* memo;1f4dd */
{ "menorahwithn" , "54e" }, /* menorah with nine branches;1f54e */
{ "menssymbol" , "6b9" }, /* mens symbol;1f6b9 */
{ "merperson" , "9dc" }, /* merperson;1f9dc */
{ "metro" , "687" }, /* metro;1f687 */
{ "microbe" , "9a0" }, /* microbe;1f9a0 */
{ "microphone" , "3a4" }, /* microphone;1f3a4 */
{ "microscope" , "52c" }, /* microscope;1f52c */
{ "militaryhelm" , "a96" }, /* military helmet;1fa96 */
{ "militarymeda" , "396" }, /* military medal;1f396 */
{ "milkyway" , "30c" }, /* milky way;1f30c */
{ "minibus" , "690" }, /* minibus;1f690 */
{ "minidisc" , "4bd" }, /* minidisc;1f4bd */
{ "minimize" , "5d5" }, /* minimize;1f5d5 */
{ "mirror" , "a9e" }, /* mirror;1fa9e */
{ "mobilephone" , "4f1" }, /* mobile phone;1f4f1 */
{ "moneymouth" , "911" }, /* money-mouth face;1f911 */
{ "moneybag" , "4b0" }, /* money bag;1f4b0 */
{ "moneybag", "4b0" },
{ "monkey" , "412" }, /* monkey;1f412 */
{ "monkeyface" , "435" }, /* monkey face;1f435 */
{ "monorail" , "69d" }, /* monorail;1f69d */
{ "moodbubble" , "5f0" }, /* mood bubble;1f5f0 */
{ "mooncake" , "96e" }, /* moon cake;1f96e */
{ "moonviewingc" , "391" }, /* moon viewing ceremony;1f391 */
{ "mosque" , "54c" }, /* mosque;1f54c */
{ "mosquito" , "99f" }, /* mosquito;1f99f */
{ "motherchrist" , "936" }, /* mother christmas;1f936 */
{ "motorboat" , "6e5" }, /* motor boat;1f6e5 */
{ "motorscooter" , "6f5" }, /* motor scooter;1f6f5 */
{ "motorway" , "6e3" }, /* motorway;1f6e3 */
{ "mountainbicy" , "6b5" }, /* mountain bicyclist;1f6b5 */
{ "mountaincabl" , "6a0" }, /* mountain cableway;1f6a0 */
{ "mountainrail" , "69e" }, /* mountain railway;1f69e */
{ "mountfuji" , "5fb" }, /* mount fuji;1f5fb */
{ "mouse" , "401" }, /* mouse;1f401 */
{ "mouseface" , "42d" }, /* mouse face;1f42d */
{ "mousetrap" , "aa4" }, /* mouse trap;1faa4 */
{ "mouth" , "444" }, /* mouth;1f444 */
{ "moviecamera" , "3a5" }, /* movie camera;1f3a5 */
{ "moyai" , "5ff" }, /* moyai;1f5ff */
{ "multiplemusi" , "3b6" }, /* multiple musical notes;1f3b6 */
{ "mushroom" , "344" }, /* mushroom;1f344 */
{ "musicalkeybo" , "398" }, /* musical keyboard with jacks;1f398 */
{ "musicalkeybo" , "3b9" }, /* musical keyboard;1f3b9 */
{ "musicalnote" , "3b5" }, /* musical note;1f3b5 */
{ "musicalscore" , "3bc" }, /* musical score;1f3bc */
{ "musicnote", "3b5"},
{ "nailpolish" , "485" }, /* nail polish;1f485 */
{ "namebadge" , "4db" }, /* name badge;1f4db */
{ "nationalpark" , "3de" }, /* national park;1f3de */
{ "nauseaface" , "922" }, /* nauseated face;1f922 */
{ "nazaramulet" , "9ff" }, /* nazar amulet;1f9ff */
{ "necktie" , "454" }, /* necktie;1f454 */
{ "nerdface" , "913" }, /* nerd face;1f913 */
{ "nestingdolls" , "a86" }, /* nesting dolls;1fa86 */
{ "neutralface" , "610" }, /* neutral face;1f610 */
{ "newmoonsymbo" , "311" }, /* new moon symbol;1f311 */
{ "newmoonwithf" , "31a" }, /* new moon with face;1f31a */
{ "newspaper" , "4f0" }, /* newspaper;1f4f0 */
{ "nightwithsta" , "303" }, /* night with stars;1f303 */
{ "ninja" , "977" }, /* ninja;1f977 */
{ "nobicycles" , "6b3" }, /* no bicycles;1f6b3 */
{ "noentrysign" , "6ab" }, /* no entry sign;1f6ab */
{ "nonpotablew" , "6b1" }, /* non-potable water symbol;1f6b1 */
{ "nopedestrian" , "6b7" }, /* no pedestrians;1f6b7 */
{ "nophones" , "4f5" }, /* no mobile phones;1f4f5 */
{ "nopiracy" , "572" }, /* no piracy;1f572 */
{ "nose" , "443" }, /* nose;1f443 */
{ "nosmokingsym" , "6ad" }, /* no smoking symbol;1f6ad */
{ "note" , "5c8" }, /* note;1f5c8 */
{ "notebook" , "4d3" }, /* notebook;1f4d3 */
{ "notebookwith" , "4d4" }, /* notebook with decorative cover;1f4d4 */
{ "notepad" , "5ca" }, /* note pad;1f5ca */
{ "notepage" , "5c9" }, /* note page;1f5c9 */
{ "nutandbolt" , "529" }, /* nut and bolt;1f529 */
{ "octagonalsig" , "6d1" }, /* octagonal sign;1f6d1 */
{ "octopus" , "419" }, /* octopus;1f419 */
{ "oden" , "362" }, /* oden;1f362 */
{ "officebuildi" , "3e2" }, /* office building;1f3e2 */
{ "oildrum" , "6e2" }, /* oil drum;1f6e2 */
{ "okhandsign" , "44c" }, /* ok hand sign;1f44c */
{ "olderadult" , "9d3" }, /* older adult;1f9d3 */
{ "olderman" , "474" }, /* older man;1f474 */
{ "olderwoman" , "475" }, /* older woman;1f475 */
{ "oldkey" , "5dd" }, /* old key;1f5dd */
{ "oldpersonalc" , "5b3" }, /* old personal computer;1f5b3 */
{ "olive" , "ad2" }, /* olive;1fad2 */
{ "omsymbol" , "549" }, /* om symbol;1f549 */
{ "oncomingauto" , "698" }, /* oncoming automobile;1f698 */
{ "oncomingbus" , "68d" }, /* oncoming bus;1f68d */
{ "oncomingpoli" , "694" }, /* oncoming police car;1f694 */
{ "oncomingtaxi" , "696" }, /* oncoming taxi;1f696 */
{ "onebuttonmou" , "5af" }, /* one button mouse;1f5af */
{ "onion" , "9c5" }, /* onion;1f9c5 */
{ "openbook" , "4d6" }, /* open book;1f4d6 */
{ "openfilefold" , "4c2" }, /* open file folder;1f4c2 */
{ "openfolder" , "5c1" }, /* open folder;1f5c1 */
{ "openhandssig" , "450" }, /* open hands sign;1f450 */
{ "openlock" , "513" }, /* open lock;1f513 */
{ "openmailboxw" , "4ec" }, /* open mailbox with raised flag;1f4ec */
{ "opticaldisc" , "4bf" }, /* optical disc;1f4bf */
{ "opticaldisci" , "5b8" }, /* optical disc icon;1f5b8 */
{ "orangebook" , "4d9" }, /* orange book;1f4d9 */
{ "orangeheart" , "9e1" }, /* orange heart;1f9e1 */
{ "orangutan" , "9a7" }, /* orangutan;1f9a7 */
{ "otter" , "9a6" }, /* otter;1f9a6 */
{ "outboxtray" , "4e4" }, /* outbox tray;1f4e4 */
{ "overheatedfa" , "975" }, /* overheated face;1f975 */
{ "overlap" , "5d7" }, /* overlap;1f5d7 */
{ "owl" , "989" }, /* owl;1f989 */
{ "ox" , "402" }, /* ox;1f402 */
{ "oyster" , "9aa" }, /* oyster;1f9aa */
{ "package" , "4e6" }, /* package;1f4e6 */
{ "page" , "5cf" }, /* page;1f5cf */
{ "pagefacingup" , "4c4" }, /* page facing up;1f4c4 */
{ "pager" , "4df" }, /* pager;1f4df */
{ "pages" , "5d0" }, /* pages;1f5d0 */
{ "pagewithcirc" , "5df" }, /* page with circled text;1f5df */
{ "pagewithcurl" , "4c3" }, /* page with curl;1f4c3 */
{ "pagoda" , "6d4" }, /* pagoda;1f6d4 */
{ "palmtree" , "334" }, /* palm tree;1f334 */
{ "pancakes" , "95e" }, /* pancakes;1f95e */
{ "pandaface" , "43c" }, /* panda face;1f43c */
{ "paperclip" , "4ce" }, /* paperclip;1f4ce */
{ "parachute" , "a82" }, /* parachute;1fa82 */
{ "parena" , "110" }, /* parenthesized latin capital letter a;1f110 */
{ "parenb" , "111" }, /* parenthesized latin capital letter b;1f111 */
{ "parenc" , "112" }, /* parenthesized latin capital letter c;1f112 */
{ "parend" , "113" }, /* parenthesized latin capital letter d;1f113 */
{ "parene" , "114" }, /* parenthesized latin capital letter e;1f114 */
{ "parenf" , "115" }, /* parenthesized latin capital letter f;1f115 */
{ "pareng" , "116" }, /* parenthesized latin capital letter g;1f116 */
{ "parenh" , "117" }, /* parenthesized latin capital letter h;1f117 */
{ "pareni" , "118" }, /* parenthesized latin capital letter i;1f118 */
{ "parenj" , "119" }, /* parenthesized latin capital letter j;1f119 */
{ "parenk" , "11a" }, /* parenthesized latin capital letter k;1f11a */
{ "parenl" , "11b" }, /* parenthesized latin capital letter l;1f11b */
{ "parenm" , "11c" }, /* parenthesized latin capital letter m;1f11c */
{ "parenn" , "11d" }, /* parenthesized latin capital letter n;1f11d */
{ "pareno" , "11e" }, /* parenthesized latin capital letter o;1f11e */
{ "parenp" , "11f" }, /* parenthesized latin capital letter p;1f11f */
{ "parenq" , "120" }, /* parenthesized latin capital letter q;1f120 */
{ "parenr" , "121" }, /* parenthesized latin capital letter r;1f121 */
{ "parens" , "122" }, /* parenthesized latin capital letter s;1f122 */
{ "parent" , "123" }, /* parenthesized latin capital letter t;1f123 */
{ "parenu" , "124" }, /* parenthesized latin capital letter u;1f124 */
{ "parenv" , "125" }, /* parenthesized latin capital letter v;1f125 */
{ "parenw" , "126" }, /* parenthesized latin capital letter w;1f126 */
{ "parenx" , "127" }, /* parenthesized latin capital letter x;1f127 */
{ "pareny" , "128" }, /* parenthesized latin capital letter y;1f128 */
{ "parenz" , "129" }, /* parenthesized latin capital letter z;1f129 */
{ "parrot" , "99c" }, /* parrot;1f99c */
{ "partypopper" , "389" }, /* party popper;1f389 */
{ "partypopper", "389"},
{ "passportcont" , "6c2" }, /* passport control;1f6c2 */
{ "pawprints" , "43e" }, /* paw prints;1f43e */
{ "peach" , "351" }, /* peach;1f351 */
{ "peacock" , "99a" }, /* peacock;1f99a */
{ "peanuts" , "95c" }, /* peanuts;1f95c */
{ "pear" , "350" }, /* pear;1f350 */
{ "pedestrian" , "6b6" }, /* pedestrian;1f6b6 */
{ "penguin" , "427" }, /* penguin;1f427 */
{ "penoverstamp" , "586" }, /* pen over stamped envelope;1f586 */
{ "pensiveface" , "614" }, /* pensive face;1f614 */
{ "peoplehuggin" , "ac2" }, /* people hugging;1fac2 */
{ "performingar" , "3ad" }, /* performing arts;1f3ad */
{ "perseveringf" , "623" }, /* persevering face;1f623 */
{ "personalcomp" , "4bb" }, /* personal computer;1f4bb */
{ "personbowing" , "647" }, /* person bowing deeply;1f647 */
{ "personfrowni" , "64d" }, /* person frowning;1f64d */
{ "personraisin" , "64c" }, /* person raising both hands in celebration;1f64c */
{ "personwithbl" , "471" }, /* person with blond hair;1f471 */
{ "petridish" , "9eb" }, /* petri dish;1f9eb */
{ "pickuptruck" , "6fb" }, /* pickup truck;1f6fb */
{ "pie" , "967" }, /* pie;1f967 */
{ "pig" , "416" }, /* pig;1f416 */
{ "pigface" , "437" }, /* pig face;1f437 */
{ "pignose" , "43d" }, /* pig nose;1f43d */
{ "pileofpoo" , "4a9" }, /* pile of poo;1f4a9 */
{ "pill" , "48a" }, /* pill;1f48a */
{ "pinata" , "a85" }, /* pinata;1fa85 */
{ "pinchedfinge" , "90c" }, /* pinched fingers;1f90c */
{ "pinchinghand" , "90f" }, /* pinching hand;1f90f */
{ "pineapple" , "34d" }, /* pineapple;1f34d */
{ "pinedecorati" , "38d" }, /* pine decoration;1f38d */
{ "pistol" , "52b" }, /* pistol;1f52b */
{ "placard" , "aa7" }, /* placard;1faa7 */
{ "placeofworsh" , "6d0" }, /* place of worship;1f6d0 */
{ "plane", "6e9"}, 
{ "playingcard" , "0a0" }, /* playing card back;1f0a0 */
{ "plunger" , "aa0" }, /* plunger;1faa0 */
{ "pocketcalcul" , "5a9" }, /* pocket calculator;1f5a9 */
{ "policecar" , "693" }, /* police car;1f693 */
{ "policecarsre" , "6a8" }, /* police cars revolving light;1f6a8 */
{ "policeoffice" , "46e" }, /* police officer;1f46e */
{ "poodle" , "429" }, /* poodle;1f429 */
{ "poop", "4a9"} /* https://www.compart.com/en/unicode/U+1F4A9 */,
{ "popcorn" , "37f" }, /* popcorn;1f37f */
{ "portablester" , "4fe" }, /* portable stereo;1f4fe */
{ "postalhorn" , "4ef" }, /* postal horn;1f4ef */
{ "postbox" , "4ee" }, /* postbox;1f4ee */
{ "potablewater" , "6b0" }, /* potable water symbol;1f6b0 */
{ "potato" , "954" }, /* potato;1f954 */
{ "potoffood" , "372" }, /* pot of food;1f372 */
{ "pottedplant" , "ab4" }, /* potted plant;1fab4 */
{ "pouch" , "45d" }, /* pouch;1f45d */
{ "poultryleg" , "357" }, /* poultry leg;1f357 */
{ "pound" , "4b7" }, /* banknote with pound sign;1f4b7 */
{ "poutingface" , "621" }, /* pouting face;1f621 */
{ "prayerbeads" , "4ff" }, /* prayer beads;1f4ff */
{ "pretzel" , "968" }, /* pretzel;1f968 */
{ "prince" , "934" }, /* prince;1f934 */
{ "princess" , "478" }, /* princess;1f478 */
{ "printer" , "5a8" }, /* printer;1f5a8 */
{ "printericon" , "5b6" }, /* printer icon;1f5b6 */
{ "probingcane" , "9af" }, /* probing cane;1f9af */
{ "prohibitedsi" , "6c7" }, /* prohibited sign;1f6c7 */
{ "publicaddres" , "4e2" }, /* public address loudspeaker;1f4e2 */
{ "purse" , "45b" }, /* purse;1f45b */
{ "pushpin" , "4cc" }, /* pushpin;1f4cc */
{ "putlitterini" , "6ae" }, /* put litter in its place symbol;1f6ae */
{ "rabbit" , "407" }, /* rabbit;1f407 */
{ "rabbitface" , "430" }, /* rabbit face;1f430 */
{ "raccoon" , "99d" }, /* raccoon;1f99d */
{ "racingcar" , "3ce" }, /* racing car;1f3ce */
{ "racingmotorc" , "3cd" }, /* racing motorcycle;1f3cd */
{ "radio" , "4fb" }, /* radio;1f4fb */
{ "radiobutton" , "518" }, /* radio button;1f518 */
{ "railwaycar" , "683" }, /* railway car;1f683 */
{ "railwaytrack" , "6e4" }, /* railway track;1f6e4 */
{ "rainbow" , "308" }, /* rainbow;1f308 */
{ "raisedmcsign" , "16a" }, /* raised mc sign;1f16a */
{ "raisedmdsign" , "16b" }, /* raised md sign;1f16b */
{ "raisedmrsign" , "16c" }, /* raised mr sign;1f16c */
{ "ram" , "40f" }, /* ram;1f40f */
{ "rat" , "400" }, /* rat;1f400 */
{ "razor" , "a92" }, /* razor;1fa92 */
{ "receipt" , "9fe" }, /* receipt;1f9fe */
{ "recreational" , "699" }, /* recreational vehicle;1f699 */
{ "redapple" , "34e" }, /* red apple;1f34e */
{ "regionala" , "1e6" }, /* regional indicator symbol letter a;1f1e6 */
{ "regionalb" , "1e7" }, /* regional indicator symbol letter b;1f1e7 */
{ "regionalc" , "1e8" }, /* regional indicator symbol letter c;1f1e8 */
{ "regionald" , "1e9" }, /* regional indicator symbol letter d;1f1e9 */
{ "regionale" , "1ea" }, /* regional indicator symbol letter e;1f1ea */
{ "regionalf" , "1eb" }, /* regional indicator symbol letter f;1f1eb */
{ "regionalg" , "1ec" }, /* regional indicator symbol letter g;1f1ec */
{ "regionalh" , "1ed" }, /* regional indicator symbol letter h;1f1ed */
{ "regionali" , "1ee" }, /* regional indicator symbol letter i;1f1ee */
{ "regionalj" , "1ef" }, /* regional indicator symbol letter j;1f1ef */
{ "regionalk" , "1f0" }, /* regional indicator symbol letter k;1f1f0 */
{ "regionall" , "1f1" }, /* regional indicator symbol letter l;1f1f1 */
{ "regionalm" , "1f2" }, /* regional indicator symbol letter m;1f1f2 */
{ "regionaln" , "1f3" }, /* regional indicator symbol letter n;1f1f3 */
{ "regionalo" , "1f4" }, /* regional indicator symbol letter o;1f1f4 */
{ "regionalp" , "1f5" }, /* regional indicator symbol letter p;1f1f5 */
{ "regionalq" , "1f6" }, /* regional indicator symbol letter q;1f1f6 */
{ "regionalr" , "1f7" }, /* regional indicator symbol letter r;1f1f7 */
{ "regionals" , "1f8" }, /* regional indicator symbol letter s;1f1f8 */
{ "regionalt" , "1f9" }, /* regional indicator symbol letter t;1f1f9 */
{ "regionalu" , "1fa" }, /* regional indicator symbol letter u;1f1fa */
{ "regionalv" , "1fb" }, /* regional indicator symbol letter v;1f1fb */
{ "regionalw" , "1fc" }, /* regional indicator symbol letter w;1f1fc */
{ "regionalx" , "1fd" }, /* regional indicator symbol letter x;1f1fd */
{ "regionaly" , "1fe" }, /* regional indicator symbol letter y;1f1fe */
{ "regionalz" , "1ff" }, /* regional indicator symbol letter z;1f1ff */
{ "relievedface" , "60c" }, /* relieved face;1f60c */
{ "reminderribb" , "397" }, /* reminder ribbon;1f397 */
{ "restroom" , "6bb" }, /* restroom;1f6bb */
{ "reversecheck" , "67f" }, /* reverse checker board;1f67f */
{ "revolvinghea" , "49e" }, /* revolving hearts;1f49e */
{ "rhinoceros" , "98f" }, /* rhinoceros;1f98f */
{ "ribbon" , "380" }, /* ribbon;1f380 */
{ "riceball" , "359" }, /* rice ball;1f359 */
{ "ricecracker" , "358" }, /* rice cracker;1f358 */
{ "rifle" , "946" }, /* rifle;1f946 */
{ "ring" , "48d" }, /* ring;1f48d */
{ "ringedplanet" , "a90" }, /* ringed planet;1fa90 */
{ "ringingbell" , "56d" }, /* ringing bell;1f56d */
{ "roastedsweet" , "360" }, /* roasted sweet potato;1f360 */
{ "robotface" , "916" }, /* robot face;1f916 */
{ "rock" , "aa8" }, /* rock;1faa8 */
{ "rocket" , "680" }, /* rocket;1f680 */
{ "rolledupnew" , "5de" }, /* rolled-up newspaper;1f5de */
{ "rollercoaste" , "3a2" }, /* roller coaster;1f3a2 */
{ "rollerskate" , "6fc" }, /* roller skate;1f6fc */
{ "rollingonthe" , "923" }, /* rolling on the floor laughing;1f923 */
{ "rollofpaper" , "9fb" }, /* roll of paper;1f9fb */
{ "rooster" , "413" }, /* rooster;1f413 */
{ "rose" , "339" }, /* rose;1f339 */
{ "rosette" , "3f5" }, /* rosette;1f3f5 */
{ "roundpushpin" , "4cd" }, /* round pushpin;1f4cd */
{ "rowboat" , "6a3" }, /* rowboat;1f6a3 */
{ "rugbyfootbal" , "3c9" }, /* rugby football;1f3c9 */
{ "runner" , "3c3" }, /* runner;1f3c3 */
{ "runningshirt" , "3bd" }, /* running shirt with sash;1f3bd */
{ "safetypin" , "9f7" }, /* safety pin;1f9f7 */
{ "safetyvest" , "9ba" }, /* safety vest;1f9ba */
{ "sakebottlean" , "376" }, /* sake bottle and cup;1f376 */
{ "saltshaker" , "9c2" }, /* salt shaker;1f9c2 */
{ "sandwich" , "96a" }, /* sandwich;1f96a */
{ "sari" , "97b" }, /* sari;1f97b */
{ "satelliteant" , "4e1" }, /* satellite antenna;1f4e1 */
{ "sauropod" , "995" }, /* sauropod;1f995 */
{ "saxophone" , "3b7" }, /* saxophone;1f3b7 */
{ "scarf" , "9e3" }, /* scarf;1f9e3 */
{ "school" , "3eb" }, /* school;1f3eb */
{ "schoolsatche" , "392" }, /* school satchel;1f392 */
{ "scooter" , "6f4" }, /* scooter;1f6f4 */
{ "scorpion" , "982" }, /* scorpion;1f982 */
{ "screen" , "5b5" }, /* screen;1f5b5 */
{ "screwdriver" , "a9b" }, /* screwdriver;1fa9b */
{ "scroll" , "4dc" }, /* scroll;1f4dc */
{ "seal" , "9ad" }, /* seal;1f9ad */
{ "seat" , "4ba" }, /* seat;1f4ba */
{ "seenoevilm" , "648" }, /* see-no-evil monkey;1f648 */
{ "seedling" , "331" }, /* seedling;1f331 */
{ "segment0" , "bf0" }, /* segmented digit zero;1fbf0 */
{ "segment1" , "bf1" }, /* segmented digit one;1fbf1 */
{ "segment2" , "bf2" }, /* segmented digit two;1fbf2 */
{ "segment3" , "bf3" }, /* segmented digit three;1fbf3 */
{ "segment4" , "bf4" }, /* segmented digit four;1fbf4 */
{ "segment5" , "bf5" }, /* segmented digit five;1fbf5 */
{ "segment6" , "bf6" }, /* segmented digit six;1fbf6 */
{ "segment7" , "bf7" }, /* segmented digit seven;1fbf7 */
{ "segment8" , "bf8" }, /* segmented digit eight;1fbf8 */
{ "segment9" , "bf9" }, /* segmented digit nine;1fbf9 */
{ "selfie" , "933" }, /* selfie;1f933 */
{ "sewingneedle" , "aa1" }, /* sewing needle;1faa1 */
{ "shallowpanof" , "958" }, /* shallow pan of food;1f958 */
{ "shark" , "988" }, /* shark;1f988 */
{ "shavedice" , "367" }, /* shaved ice;1f367 */
{ "sheep" , "411" }, /* sheep;1f411 */
{ "shield" , "6e1" }, /* shield;1f6e1 */
{ "ship" , "6a2" }, /* ship;1f6a2 */
{ "shockedfacew" , "92f" }, /* shocked face with exploding head;1f92f */
{ "shootingstar" , "320" }, /* shooting star;1f320 */
{ "shoppingbags" , "6cd" }, /* shopping bags;1f6cd */
{ "shoppingtrol" , "6d2" }, /* shopping trolley;1f6d2 */
{ "shortcake" , "370" }, /* shortcake;1f370 */
{ "shorts" , "a73" }, /* shorts;1fa73 */
{ "shower" , "6bf" }, /* shower;1f6bf */
{ "shrimp" , "990" }, /* shrimp;1f990 */
{ "shrug" , "937" }, /* shrug;1f937 */
{ "shrug", "937"} /* https://www.compart.com/en/unicode/U+1F937 */,
{ "silhouetteof" , "5fe" }, /* silhouette of japan;1f5fe */
{ "skateboard" , "6f9" }, /* skateboard;1f6f9 */
{ "skiandskiboo" , "3bf" }, /* ski and ski boot;1f3bf */
{ "skull" , "480" }, /* skull;1f480 */
{ "skunk" , "9a8" }, /* skunk;1f9a8 */
{ "sled" , "6f7" }, /* sled;1f6f7 */
{ "sleepingacco" , "6cc" }, /* sleeping accommodation;1f6cc */
{ "sleepingface" , "634" }, /* sleeping face;1f634 */
{ "sleepingsymb" , "4a4" }, /* sleeping symbol;1f4a4 */
{ "sleepyface" , "62a" }, /* sleepy face;1f62a */
{ "sleuthorspy" , "575" }, /* sleuth or spy;1f575 */
{ "sliceofpizza" , "355" }, /* slice of pizza;1f355 */
{ "slightlyfrow" , "641" }, /* slightly frowning face;1f641 */
{ "sloth" , "9a5" }, /* sloth;1f9a5 */
{ "slotmachine" , "3b0" }, /* slot machine;1f3b0 */
{ "smilingcatfa" , "63a" }, /* smiling cat face with open mouth;1f63a */
{ "smilingfacew" , "603" }, /* smiling face with open mouth;1f603 */
{ "smilingfacew" , "970" }, /* smiling face with smiling eyes and three hearts;1f970 */
{ "smilingfacew" , "972" }, /* smiling face with tear;1f972 */
{ "smirkingface" , "60f" }, /* smirking face;1f60f */
{ "smokingsymbo" , "6ac" }, /* smoking symbol;1f6ac */
{ "snail" , "40c" }, /* snail;1f40c */
{ "snake" , "40d" }, /* snake;1f40d */
{ "sneezingface" , "927" }, /* sneezing face;1f927 */
{ "snowboarder" , "3c2" }, /* snowboarder;1f3c2 */
{ "snowcappedmo" , "3d4" }, /* snow capped mountain;1f3d4 */
{ "socks" , "9e6" }, /* socks;1f9e6 */
{ "softball" , "94e" }, /* softball;1f94e */
{ "softicecream" , "366" }, /* soft ice cream;1f366 */
{ "softshellflo" , "5ac" }, /* soft shell floppy disk;1f5ac */
{ "spaghetti" , "35d" }, /* spaghetti;1f35d */
{ "sparklinghea" , "496" }, /* sparkling heart;1f496 */
{ "speaknoevi" , "64a" }, /* speak-no-evil monkey;1f64a */
{ "speaker" , "508" }, /* speaker;1f508 */
{ "speakerno" , "507" }, /* speaker with cancellation stroke;1f507 */
{ "speakerwave" , "509" }, /* speaker with one sound wave;1f509 */
{ "speakinghead" , "5e3" }, /* speaking head in silhouette;1f5e3 */
{ "speechballoo" , "4ac" }, /* speech balloon;1f4ac */
{ "speedboat" , "6a4" }, /* speedboat;1f6a4 */
{ "spider" , "577" }, /* spider;1f577 */
{ "spiderweb" , "578" }, /* spider web;1f578 */
{ "spiralcalend" , "5d3" }, /* spiral calendar pad;1f5d3 */
{ "spiralnotepa" , "5d2" }, /* spiral note pad;1f5d2 */
{ "spiralshell" , "41a" }, /* spiral shell;1f41a */
{ "splashingswe" , "4a6" }, /* splashing sweat symbol;1f4a6 */
{ "sponge" , "9fd" }, /* sponge;1f9fd */
{ "spoolofthrea" , "9f5" }, /* spool of thread;1f9f5 */
{ "spoon" , "944" }, /* spoon;1f944 */
{ "sportsmedal" , "3c5" }, /* sports medal;1f3c5 */
{ "spoutingwhal" , "433" }, /* spouting whale;1f433 */
{ "squaredcl" , "191" }, /* squared cl;1f191 */
{ "squaredcool" , "192" }, /* squared cool;1f192 */
{ "squaredeight" , "19f" }, /* squared eight k;1f19f */
{ "squaredfivep" , "1a0" }, /* squared five point one;1f1a0 */
{ "squaredfourk" , "19e" }, /* squared four k;1f19e */
{ "squaredfree" , "193" }, /* squared free;1f193 */
{ "squaredhc" , "1a6" }, /* squared hc;1f1a6 */
{ "squaredhdr" , "1a7" }, /* squared hdr;1f1a7 */
{ "squaredhire" , "1a8" }, /* squared hi-res;1f1a8 */
{ "squaredhv" , "14a" }, /* squared hv;1f14a */
{ "squaredid" , "194" }, /* squared id;1f194 */
{ "squaredj" , "190" }, /* square dj;1f190 */
{ "squaredlata" , "130" }, /* squared latin capital letter a;1f130 */
{ "squaredlatb" , "131" }, /* squared latin capital letter b;1f131 */
{ "squaredlatc" , "132" }, /* squared latin capital letter c;1f132 */
{ "squaredlatd" , "133" }, /* squared latin capital letter d;1f133 */
{ "squaredlatd" , "135" }, /* squared latin capital letter f;1f135 */
{ "squaredlate" , "134" }, /* squared latin capital letter e;1f134 */
{ "squaredlatf" , "136" }, /* squared latin capital letter g;1f136 */
{ "squaredlatg" , "137" }, /* squared latin capital letter h;1f137 */
{ "squaredlath" , "138" }, /* squared latin capital letter i;1f138 */
{ "squaredlatin" , "1a5" }, /* squared latin small letter d;1f1a5 */
{ "squaredlatj" , "139" }, /* squared latin capital letter j;1f139 */
{ "squaredlatk" , "13a" }, /* squared latin capital letter k;1f13a */
{ "squaredlatl" , "13b" }, /* squared latin capital letter l;1f13b */
{ "squaredlatm" , "13c" }, /* squared latin capital letter m;1f13c */
{ "squaredlatn" , "13d" }, /* squared latin capital letter n;1f13d */
{ "squaredlato" , "13e" }, /* squared latin capital letter o;1f13e */
{ "squaredlatp" , "13f" }, /* squared latin capital letter p;1f13f */
{ "squaredlatq" , "140" }, /* squared latin capital letter q;1f140 */
{ "squaredlatr" , "141" }, /* squared latin capital letter r;1f141 */
{ "squaredlats" , "142" }, /* squared latin capital letter s;1f142 */
{ "squaredlatt" , "143" }, /* squared latin capital letter t;1f143 */
{ "squaredlatu" , "144" }, /* squared latin capital letter u;1f144 */
{ "squaredlatv" , "145" }, /* squared latin capital letter v;1f145 */
{ "squaredlatw" , "146" }, /* squared latin capital letter w;1f146 */
{ "squaredlatx" , "147" }, /* squared latin capital letter x;1f147 */
{ "squaredlaty" , "148" }, /* squared latin capital letter y;1f148 */
{ "squaredlatz" , "149" }, /* squared latin capital letter z;1f149 */
{ "squaredlossl" , "1a9" }, /* squared lossless;1f1a9 */
{ "squaredmv" , "14b" }, /* squared mv;1f14b */
{ "squarednew" , "195" }, /* squared new;1f195 */
{ "squaredng" , "196" }, /* squared ng;1f196 */
{ "squaredok" , "197" }, /* squared ok;1f197 */
{ "squaredonehu" , "1a4" }, /* squared one hundred twenty p;1f1a4 */
{ "squaredppv" , "14e" }, /* squared ppv;1f14e */
{ "squaredsd" , "14c" }, /* squared sd;1f14c */
{ "squaredsecon" , "19c" }, /* squared second screen;1f19c */
{ "squaredseven" , "1a1" }, /* squared seven point one;1f1a1 */
{ "squaredshv" , "1aa" }, /* squared shv;1f1aa */
{ "squaredsixty" , "1a3" }, /* squared sixty p;1f1a3 */
{ "squaredsos" , "198" }, /* squared sos;1f198 */
{ "squaredss" , "14d" }, /* squared ss;1f14d */
{ "squaredthree" , "19b" }, /* squared three d;1f19b */
{ "squaredtwent" , "1a2" }, /* squared twenty-two point two;1f1a2 */
{ "squaredtwok" , "19d" }, /* squared two k;1f19d */
{ "squareduhd" , "1ab" }, /* squared uhd;1f1ab */
{ "squaredupwit" , "199" }, /* squared up with exclamation mark;1f199 */
{ "squaredvod" , "1ac" }, /* squared vod;1f1ac */
{ "squaredvs" , "19a" }, /* squared vs;1f19a */
{ "squaredwc" , "14f" }, /* squared wc;1f14f */
{ "squid" , "991" }, /* squid;1f991 */
{ "stadium" , "3df" }, /* stadium;1f3df */
{ "stampedenvel" , "583" }, /* stamped envelope;1f583 */
{ "standingpers" , "9cd" }, /* standing person;1f9cd */
{ "station" , "689" }, /* station;1f689 */
{ "statueoflibe" , "5fd" }, /* statue of liberty;1f5fd */
{ "steamingbowl" , "35c" }, /* steaming bowl;1f35c */
{ "steamlocomot" , "682" }, /* steam locomotive;1f682 */
{ "stethoscope" , "a7a" }, /* stethoscope;1fa7a */
{ "stockchart" , "5e0" }, /* stock chart;1f5e0 */
{ "stonks" , "4b9" }, /* chart with upwards trend and yen sign;1f4b9 */
{ "straightrule" , "4cf" }, /* straight ruler;1f4cf */
{ "strawberry" , "353" }, /* strawberry;1f353 */
{ "studiomicrop" , "399" }, /* studio microphone;1f399 */
{ "stuffedflatb" , "959" }, /* stuffed flatbread;1f959 */
{ "stupa" , "6d3" }, /* stupa;1f6d3 */
{ "sunflower" , "33b" }, /* sunflower;1f33b */
{ "sunglasses", "60e"},
{ "sunglassface" , "60e" }, /* smiling face with sunglasses;1f60e */
{ "sunrise" , "305" }, /* sunrise;1f305 */
{ "sunriseoverm" , "304" }, /* sunrise over mountains;1f304 */
{ "sunsetoverbu" , "307" }, /* sunset over buildings;1f307 */
{ "sunwithface" , "31e" }, /* sun with face;1f31e */
{ "superhero" , "9b8" }, /* superhero;1f9b8 */
{ "supervillain" , "9b9" }, /* supervillain;1f9b9 */
{ "surfer" , "3c4" }, /* surfer;1f3c4 */
{ "sushi" , "363" }, /* sushi;1f363 */
{ "suspensionra" , "69f" }, /* suspension railway;1f69f */
{ "swan" , "9a2" }, /* swan;1f9a2 */
{ "swimmer" , "3ca" }, /* swimmer;1f3ca */
{ "synagogue" , "54d" }, /* synagogue;1f54d */
{ "syringe" , "489" }, /* syringe;1f489 */
{ "trex" , "996" }, /* t-rex;1f996 */
{ "tshirt" , "455" }, /* t-shirt;1f455 */
{ "tabletennisp" , "3d3" }, /* table tennis paddle and ball;1f3d3 */
{ "taco" , "32e" }, /* taco;1f32e */
{ "takeoutbox" , "961" }, /* takeout box;1f961 */
{ "tamale" , "ad4" }, /* tamale;1fad4 */
{ "tanabatatree" , "38b" }, /* tanabata tree;1f38b */
{ "tangerine" , "34a" }, /* tangerine;1f34a */
{ "tapecartridg" , "5ad" }, /* tape cartridge;1f5ad */
{ "taxi" , "695" }, /* taxi;1f695 */
{ "teacupwithou" , "375" }, /* teacup without handle;1f375 */
{ "teapot" , "ad6" }, /* teapot;1fad6 */
{ "tearoffcale" , "4c6" }, /* tear-off calendar;1f4c6 */
{ "tearslaughin", "923"} /* https://www.compart.com/en/unicode/U+1F923 */,
{ "teddybear" , "9f8" }, /* teddy bear;1f9f8 */
{ "telephoneont" , "580" }, /* telephone on top of modem;1f580 */
{ "telephonerec" , "4de" }, /* telephone receiver;1f4de */
{ "telephonerec" , "57c" }, /* telephone receiver with page;1f57c */
{ "telescope" , "52d" }, /* telescope;1f52d */
{ "television" , "4fa" }, /* television;1f4fa */
{ "tennisracque" , "3be" }, /* tennis racquet and ball;1f3be */
{ "testtube" , "9ea" }, /* test tube;1f9ea */
{ "thermometer" , "321" }, /* thermometer;1f321 */
{ "thinkingface" , "914" }, /* thinking face;1f914 */
{ "thongsandal" , "a74" }, /* thong sandal;1fa74 */
{ "thoughtballo" , "4ad" }, /* thought balloon;1f4ad */
{ "threebuttonm" , "5b1" }, /* three button mouse;1f5b1 */
{ "threenetwork" , "5a7" }, /* three networked computers;1f5a7 */
{ "throwkiss" , "618" }, /* face throwing a kiss;1f618 */
{ "thumbsdown", "44e"} /* https://www.compart.com/en/unicode/U+1F44D */,
{ "thumbsup", "44d"} /* https://www.compart.com/en/unicode/U+1F44D */,
{ "ticket" , "3ab" }, /* ticket;1f3ab */
{ "tiger" , "405" }, /* tiger;1f405 */
{ "tigerface" , "42f" }, /* tiger face;1f42f */
{ "tiredface" , "62b" }, /* tired face;1f62b */
{ "toilet" , "6bd" }, /* toilet;1f6bd */
{ "tokyotower" , "5fc" }, /* tokyo tower;1f5fc */
{ "tomato" , "345" }, /* tomato;1f345 */
{ "tongue" , "445" }, /* tongue;1f445 */
{ "tongue" , "61b" }, /* face with stuck-out tongue;1f61b */
{ "tonguewink" , "61c" }, /* face with stuck-out tongue and winking eye;1f61c */
{ "toolbox" , "9f0" }, /* toolbox;1f9f0 */
{ "tooth" , "9b7" }, /* tooth;1f9b7 */
{ "toothbrush" , "aa5" }, /* toothbrush;1faa5 */
{ "tophat" , "3a9" }, /* top hat;1f3a9 */
{ "trackball" , "5b2" }, /* trackball;1f5b2 */
{ "tractor" , "69c" }, /* tractor;1f69c */
{ "train" , "686" }, /* train;1f686 */
{ "trainfront", "686"} /* https://www.compart.com/en/unicode/U+1F686 */,
{ "trainside", "684"} /* https://www.compart.com/en/unicode/U+1F684 */,
{ "tram" , "68a" }, /* tram;1f68a */
{ "tramcar" , "68b" }, /* tram car;1f68b */
{ "trianglewith" , "6c6" }, /* triangle with rounded corners;1f6c6 */
{ "triangularfl" , "6a9" }, /* triangular flag on post;1f6a9 */
{ "triangularru" , "4d0" }, /* triangular ruler;1f4d0 */
{ "trolleybus" , "68e" }, /* trolleybus;1f68e */
{ "trophy" , "3c6" }, /* trophy;1f3c6 */
{ "tropicaldrin" , "379" }, /* tropical drink;1f379 */
{ "tropicalfish" , "420" }, /* tropical fish;1f420 */
{ "trumpet" , "3ba" }, /* trumpet;1f3ba */
{ "tulip" , "337" }, /* tulip;1f337 */
{ "tumblerglass" , "943" }, /* tumbler glass;1f943 */
{ "turkey" , "983" }, /* turkey;1f983 */
{ "turnedokhand" , "58f" }, /* turned ok hand sign;1f58f */
{ "turtle" , "422" }, /* turtle;1f422 */
{ "twistedright" , "500" }, /* twisted rightwards arrows;1f500 */
{ "twobuttonmou" , "5b0" }, /* two button mouse;1f5b0 */
{ "twohearts" , "495" }, /* two hearts;1f495 */
{ "twomenholdin" , "46c" }, /* two men holding hands;1f46c */
{ "twowomenhold" , "46d" }, /* two women holding hands;1f46d */
{ "unamusedface" , "612" }, /* unamused face;1f612 */
{ "unicornface" , "984" }, /* unicorn face;1f984 */
{ "vampire" , "9db" }, /* vampire;1f9db */
{ "verticaltraf" , "6a6" }, /* vertical traffic light;1f6a6 */
{ "vibratemode" , "4f3" }, /* vibration mode;1f4f3 */
{ "videocamera" , "4f9" }, /* video camera;1f4f9 */
{ "videocassett" , "4fc" }, /* videocassette;1f4fc */
{ "videogame" , "3ae" }, /* video game;1f3ae */
{ "violin" , "3bb" }, /* violin;1f3bb */
{ "volcano" , "30b" }, /* volcano;1f30b */
{ "volleyball" , "3d0" }, /* volleyball;1f3d0 */
{ "vomitface" , "92e" }, /* face with open mouth vomiting;1f92e */
{ "waffle" , "9c7" }, /* waffle;1f9c7 */
{ "waningcresce" , "318" }, /* waning crescent moon symbol;1f318 */
{ "waninggibbou" , "316" }, /* waning gibbous moon symbol;1f316 */
{ "wastebasket" , "5d1" }, /* wastebasket;1f5d1 */
{ "waterbuffalo" , "403" }, /* water buffalo;1f403 */
{ "watercloset" , "6be" }, /* water closet;1f6be */
{ "watermelon" , "349" }, /* watermelon;1f349 */
{ "waterpolo" , "93d" }, /* water polo;1f93d */
{ "waterwave" , "30a" }, /* water wave;1f30a */
{ "wavingblackf" , "3f4" }, /* waving black flag;1f3f4 */
{ "wavinghandsi" , "44b" }, /* waving hand sign;1f44b */
{ "wavingwhitef" , "3f3" }, /* waving white flag;1f3f3 */
{ "waxingcresce" , "312" }, /* waxing crescent moon symbol;1f312 */
{ "waxinggibbou" , "314" }, /* waxing gibbous moon symbol;1f314 */
{ "wearyface" , "629" }, /* weary face;1f629 */
{ "wedding" , "492" }, /* wedding;1f492 */
{ "weightlifter" , "3cb" }, /* weight lifter;1f3cb */
{ "whale" , "40b" }, /* whale;1f40b */
{ "whiteflower" , "4ae" }, /* white flower;1f4ae */
{ "whitehardshe" , "5ab" }, /* white hard shell floppy disk;1f5ab */
{ "whitepennant" , "3f1" }, /* white pennant;1f3f1 */
{ "whitesun" , "323" }, /* white sun;1f323 */
{ "whitesunbehi" , "325" }, /* white sun behind cloud;1f325 */
{ "whitesunclou" , "324" }, /* white sun with small cloud;1f324 */
{ "whitesunrain" , "326" }, /* white sun behind cloud with rain;1f326 */
{ "whitetouchto" , "57e" }, /* white touchtone telephone;1f57e */
{ "wiltedflower" , "940" }, /* wilted flower;1f940 */
{ "windblowingf" , "32c" }, /* wind blowing face;1f32c */
{ "windchime" , "390" }, /* wind chime;1f390 */
{ "window" , "a9f" }, /* window;1fa9f */
{ "wineglass" , "377" }, /* wine glass;1f377 */
{ "winkingface" , "609" }, /* winking face;1f609 */
{ "wiredkeyboar" , "5ae" }, /* wired keyboard;1f5ae */
{ "wolfface" , "43a" }, /* wolf face;1f43a */
{ "woman" , "469" }, /* woman;1f469 */
{ "womansboots" , "462" }, /* womans boots;1f462 */
{ "womansclothe" , "45a" }, /* womans clothes;1f45a */
{ "womanshat" , "452" }, /* womans hat;1f452 */
{ "womanssandal" , "461" }, /* womans sandal;1f461 */
{ "womanwithbun" , "46f" }, /* woman with bunny ears;1f46f */
{ "womenssymbol" , "6ba" }, /* womens symbol;1f6ba */
{ "wood" , "ab5" }, /* wood;1fab5 */
{ "worldmap" , "5fa" }, /* world map;1f5fa */
{ "worm" , "ab1" }, /* worm;1fab1 */
{ "worriedface" , "61f" }, /* worried face;1f61f */
{ "wrappedprese" , "381" }, /* wrapped present;1f381 */
{ "wrench" , "527" }, /* wrench;1f527 */
{ "wrestlers" , "93c" }, /* wrestlers;1f93c */
{ "yawningface" , "971" }, /* yawning face;1f971 */
{ "yen" , "4b4" }, /* banknote with yen sign;1f4b4 */
{ "yoyo" , "a80" }, /* yo-yo;1fa80 */
{ "zebraface" , "993" }, /* zebra face;1f993 */
{ "zippermouth" , "910" }, /* zipper-mouth face;1f910 */
{ "zombie" , "9df" }, /* zombie;1f9df */


};

int kMaxEmojiSize = sizeof(emojis)/sizeof(Emoji);
    

// Returns a matching prefix, or -1 if no prefix matches.
// Remember an empty string will always return i = 0.
int index_matching_prefix(String prefix) {
  for (int i = 0; i != kMaxEmojiSize; ++i) {
    if (String(emojis[i].name).startsWith(prefix)) {
      return i;
    }
  }
  return -1;
}

// 'thumbs', 100x100px
const unsigned char myBitmapthumbs [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xc7, 0xf0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xcf, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xfe, 0x1f, 
	0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0x1f, 0xff, 0xff, 0xff, 
	0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xcf, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 
	0xc7, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xc7, 0xff, 0xff, 
	0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xcf, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 
	0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xc7, 0xff, 
	0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 
	0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x9f, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x9f, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0x9f, 
	0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0x9f, 0xff, 0xff, 0xff, 
	0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 
	0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 
	0xfc, 0x7f, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xfe, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xfe, 0x3f, 0xff, 0xff, 
	0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 
	0xff, 0xc7, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 
	0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xfe, 0x7f, 0xc0, 
	0x00, 0x7f, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xfe, 0x70, 0x00, 0x00, 0x1f, 0xff, 
	0xf0, 0xff, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf0, 0xff, 0xff, 
	0xff, 0xc1, 0xff, 0xff, 0xfc, 0x00, 0x03, 0xff, 0xc7, 0xff, 0xf0, 0xff, 0xff, 0xff, 0x03, 0xff, 
	0xff, 0xf8, 0x00, 0x03, 0xff, 0xe3, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x0f, 0xff, 0xff, 0xf0, 0x00, 
	0x03, 0xff, 0xe3, 0xff, 0xf0, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xe0, 0x00, 0x03, 0xff, 0xf3, 
	0xff, 0xf0, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x03, 0xff, 0xf3, 0xff, 0xf0, 0xff, 
	0xfc, 0x03, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x03, 0xff, 0xf3, 0xff, 0xf0, 0xff, 0xf0, 0x1f, 0xff, 
	0xff, 0xff, 0xc0, 0x00, 0x03, 0xff, 0xf3, 0xff, 0xf0, 0xff, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0xe0, 
	0x00, 0x03, 0xff, 0xe3, 0xff, 0xf0, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x03, 0xff, 
	0xe3, 0xff, 0xf0, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x03, 0xff, 0xc7, 0xff, 0xf0, 
	0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf0, 0xff, 0xc7, 0xff, 
	0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf0, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 
	0xf0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf0, 0xff, 0x83, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0xf0, 0xff, 0x83, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x3f, 0xf8, 0x7f, 
	0xf0, 0xff, 0x81, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x3f, 0xfe, 0x7f, 0xf0, 0xff, 0x80, 
	0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x7f, 0xfe, 0x3f, 0xf0, 0xff, 0x80, 0x7f, 0xff, 0xff, 
	0xff, 0xf0, 0x00, 0x00, 0x7f, 0xff, 0x3f, 0xf0, 0xff, 0x80, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 
	0x00, 0x7f, 0xff, 0x3f, 0xf0, 0xff, 0x80, 0x3f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x7f, 0xff, 
	0x3f, 0xf0, 0xff, 0xc0, 0x0f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x7f, 0xff, 0x3f, 0xf0, 0xff, 
	0xc0, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x7f, 0xfe, 0x3f, 0xf0, 0xff, 0xc0, 0x07, 0xff, 
	0xff, 0xff, 0xc0, 0x00, 0x00, 0x3f, 0xfe, 0x3f, 0xf0, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xff, 0x80, 
	0x00, 0x00, 0x3f, 0xfc, 0x7f, 0xf0, 0xff, 0xc0, 0x00, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 
	0xf8, 0x7f, 0xf0, 0xff, 0xc0, 0x00, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 
	0xff, 0xc0, 0x00, 0x0f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf0, 0xff, 0xc0, 0x00, 
	0x03, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x7c, 0x01, 0xff, 0xf0, 0xff, 0xc0, 0x00, 0x00, 0x7f, 0xf0, 
	0x00, 0x00, 0x00, 0xff, 0xf0, 0xff, 0xf0, 0xff, 0xc0, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 
	0xff, 0xf8, 0xff, 0xf0, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfc, 0xff, 
	0xf0, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfc, 0x7f, 0xf0, 0xff, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfc, 0x7f, 0xf0, 0xff, 0xc0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xf0, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xff, 0xf8, 0xff, 0xf0, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 
	0xff, 0xf0, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf1, 0xff, 0xf0, 0xff, 
	0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe1, 0xff, 0xf0, 0xff, 0xc0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xf0, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x0f, 0xff, 0xf0, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0f, 0xff, 0xf0, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x8f, 0xff, 0xf0, 
	0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xc7, 0xff, 0xf0, 0xff, 0xf8, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xc7, 0xff, 0xf0, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0xff, 0xe7, 0xff, 0xf0, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 
	0xff, 0xe7, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xc7, 0xff, 
	0xf0, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xc7, 0xff, 0xf0, 0xff, 0xff, 
	0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x8f, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xfe, 0x00, 
	0x00, 0x00, 0x00, 0x07, 0xff, 0x0f, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x1f, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x7f, 
	0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xf0
};
