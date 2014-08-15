#include "items.h"
#include <QDir>

Items::Items()
{
}

QString Items::getItems(int ID)
   {
       switch (ID)
       {
           case 14000:
               return "Canned Beans";
           case 14001:
               return "Granola Bar";
           case 14002:
               return "Fresh Carrot";
           case 14003:
               return "Moldy Carrot";
           case 14004:
               return "Fresh Tomato";
           case 14005:
               return "Moldy Tomato";
           case 14006:
               return "Fresh Corn";
           case 14007:
               return "Moldy Corn";
           case 14008:
               return "Fresh Cabbage";
           case 14009:
               return "Moldy Cabbage";
           case 14010:
               return "Fresh Potato";
           case 14011:
               return "Moldy Potato";
           case 14012:
               return "Cooked Venison";
           case 14013:
               return "Raw Venison";
           case 14014:
               return "Canned Soup";
           case 14015:
               return "Canned Chili";
           case 14016:
               return "Canned Vegetables";
           case 14017:
               return "Canned Pasta";
           case 14018:
               return "Canned Ham";
           case 14019:
               return "Canned Tuna";
           case 14020:
               return "Candy Bar";
           case 14021:
               return "Chocolate Bar";
           case 14022:
               return "MRE";
           case 14023:
               return "Potato Chips";
           case 14024:
               return "Bran Cereal";
           case 14025:
               return "Red Berries";
           case 14026:
               return "Blue Berries";
           case 14027:
               return "Pink Berries";
           case 14028:
               return "Pale Berries";
           case 14029:
               return "Green Berries";
           case 14030:
               return "Purple Berries";
           case 14031:
               return "Coconut";
           case 14032:
               return "Cooked Bacon";
           case 14033:
               return "Raw Bacon";
           case 16000:
               return "Wooden Shield";
           case 16001:
               return "Metal Door";
           case 16002:
               return "Worklight";
           case 16003:
               return "Caltrop";
           case 16004:
               return "Barbed Wire";
           case 16005:
               return "Wooden Spike Trap";
           case 16006:
               return "Snare";
           case 16007:
               return "Generator";
           case 16008:
               return "Note";
           case 16009:
               return "Electric Trap";
           case 16010:
               return "Sandbags";
           case 16011:
               return "Sleeping Bag";
           case 16012:
               return "Cot";
           case 16013:
               return "Campfire";
           case 16014:
               return "Metal Shutter";
           case 16015:
               return "MOAB";
           case 16016:
               return "Tripmine";
           case 16017:
               return "Landmine";
           case 16018:
               return "Metal Shield";
           case 16019:
               return "Wooden Crate";
           case 16020:
               return "Barbed Fence";
           case 16021:
               return "Electric Fence";
           case 16022:
               return "Wooden Door";
           case 16023:
               return "Metal Locker";
           case 16024:
               return "Wooden Shutter";
           case 16025:
               return "Wooden Chest";
           case 16026:
               return "Brazier";
           case 16027:
               return "Wooden Gate";
           case 16028:
               return "Metal Gate";
           case 17000:
               return "Wooden Foundation";
           case 17001:
               return "Wooden Wall";
           case 17002:
               return "Wooden Doorway";
           case 17003:
               return "Wooden Pillar";
           case 17004:
               return "Wooden Platform";
           case 17005:
               return "Wooden Ramp";
           case 17006:
               return "Greenhouse Foundation";
           case 17007:
               return "Greenhouse Platform";
           case 17008:
               return "Wooden Hole";
           case 17009:
               return "Wooden Ladder";
           case 17010:
               return "Wooden Window";
           case 17011:
               return "Wooden Post";
           case 17012:
               return "Wooden Rampart";
           case 17013:
               return "Stone Rampart";
           case 17014:
               return "Stone Post";
           case 17015:
               return "Stone Wall";
           case 17016:
               return "Stone Doorway";
           case 17017:
               return "Stone Window";
           case 17018:
               return "Stone Pillar";
           case 17019:
               return "Dock Foundation";
           case 17020:
               return "Wooden Garage";
           case 17021:
               return "Stone Garage";
           case 4000:
               return "Fancy Suit";
           case 4001:
               return "RCMP Uniform1";
           case 4002:
               return "Police Uniform1";
           case 4003:
               return "Army Fatigues1";
           case 4004:
               return "Army Fatigues2";
           case 4005:
               return "Fireperson Top1";
           case 4006:
               return "Fireperson Top2";
           case 4007:
               return "Construction Vest";
           case 4008:
               return "Doctor Coat";
           case 4009:
               return "Orange Hoodie";
           case 4010:
               return "Pink Shirt";
           case 4011:
               return "Boring Suit";
           case 4012:
               return "Blue Sweatervest";
           case 4013:
               return "Jumper Top";
           case 4014:
               return "Grocer Top";
           case 4015:
               return "Sailor Fatigues1";
           case 4016:
               return "Animal Shirt";
           case 4017:
               return "Ghillie Top";
           case 4018:
               return "Ninja Top";
           case 4019:
               return "Plaid Shirt";
           case 4020:
               return "Chef Shirt";
           case 5000:
               return "Fancy Jeans";
           case 5001:
               return "RCMP Uniform2";
           case 5002:
               return "Police Uniform2";
           case 5003:
               return "Army Fatigues3";
           case 5004:
               return "Army Fatigues4";
           case 5005:
               return "Fireperson Pants1";
           case 5006:
               return "Fireperson Pants2";
           case 5007:
               return "Work Jeans";
           case 5008:
               return "Doctor Pants";
           case 5009:
               return "Grey Pants";
           case 5010:
               return "Khaki Pants";
           case 5011:
               return "Boring Pants";
           case 5012:
               return "Brown Pants";
           case 5013:
               return "Jumper Bottom";
           case 5014:
               return "Grocer Bottom";
           case 5015:
               return "Sailor Fatigues2";
           case 5016:
               return "Animal Pants";
           case 5017:
               return "Ghillie Bottom";
           case 5018:
               return "Ninja Bottom";
           case 5019:
               return "Lumberjack Pants";
           case 5020:
               return "Chef Pants";
           case 18000:
               return "Board";
           case 18001:
               return "Nails";
           case 18002:
               return "Bolts";
           case 18003:
               return "Log";
           case 18004:
               return "Stick";
           case 18005:
               return "Animal Pelt";
           case 18006:
               return "Rope";
           case 18007:
               return "Wire";
           case 18008:
               return "Scrap Metal";
           case 18009:
               return "Cloth";
           case 18010:
               return "Duct Tape";
           case 18011:
               return "Can";
           case 18012:
               return "Raw Explosives";
           case 18013:
               return "Civilian Bullets";
           case 18014:
               return "Military Bullets";
           case 18015:
               return "Stone";
           case 18016:
               return "Tracer Bullets";
           case 18017:
               return "Batteries";
           case 18018:
               return "Wooden Spike";
           case 18019:
               return "Rocks";
           case 18020:
               return "Shells";
           case 0:
               return "Fancy Shades";
           case 1:
               return "Civilian NVG";
           case 2:
               return "Stetson";
           case 3:
               return "Construction Helmet";
           case 4:
               return "Fire Helmet1";
           case 5:
               return "Police Cap";
           case 6:
               return "Fire Helmet2";
           case 7:
               return "Desert Helmet";
           case 8:
               return "Forest Helmet";
           case 9:
               return "Dixie Hat";
           case 10:
               return "Bandana";
           case 11:
               return "Ghillie Hood";
           case 12:
               return "Ninja Hood";
           case 13:
               return "Farmer Hat";
           case 14:
               return "Chef Hat";
           case 15:
               return "Beret";
           case 16:
               return "Ushanka";
           case 17:
               return "Military NVG";
           case 18:
               return "White Hat";
           case 19:
               return "Miner Helmet";
           case 8000:
               return "Axe";
           case 8001:
               return "Handlamp";
           case 8002:
               return "Pick";
           case 8003:
               return "Kitchen Knife";
           case 8004:
               return "Hammer";
           case 8005:
               return "Frying Pan";
           case 8006:
               return "Baseball Bat";
           case 8007:
               return "Police Baton";
           case 8008:
               return "Torch";
           case 8009:
               return "Fireaxe";
           case 8010:
               return "Crowbar";
           case 8011:
               return "Pocketknife";
           case 8012:
               return "Butcher Knife";
           case 8013:
               return "Sledgehammer";
           case 8014:
               return "Golf Club";
           case 8015:
               return "Katana";
           case 8016:
               return "Machete";
           case 8017:
               return "Spike";
           case 8018:
               return "Branch";
           case 8019:
               return "Handsaw";
           case 13000:
               return "Medkit";
           case 13001:
               return "Rag";
           case 13002:
               return "Splint";
           case 13003:
               return "Vitamins";
           case 13004:
               return "Antibiotics";
           case 13005:
               return "Painkillers";
           case 13006:
               return "Dressing";
           case 13007:
               return "Blood Bag";
           case 13008:
               return "Bandage";
           case 13009:
               return "Adrenaline";
           case 13010:
               return "Morphine";
           case 13011:
               return "Crushed Red Berries";
           case 13012:
               return "Crushed Blue Berries";
           case 13013:
               return "Crushed Pink Berries";
           case 13014:
               return "Crushed Pale Berries";
           case 13015:
               return "Crushed Green Berries";
           case 13016:
               return "Crushed Purple Berries";
           case 13017:
               return "Purification Tablets";
           case 13018:
               return "Vaccine";
           case 7000:
               return "Swissgewehr";
           case 7001:
               return "Colt";
           case 7002:
               return "Double Barrel";
           case 7003:
               return "Mosen";
           case 7004:
               return "Longbow";
           case 7005:
               return "Novuh";
           case 7006:
               return "Berette";
           case 7007:
               return "Crossbow";
           case 7008:
               return "Maplestrike";
           case 7009:
               return "Zubeknakov";
           case 7010:
               return "Magnum";
           case 7011:
               return "Timberwolf";
           case 7012:
               return "Uzy";
           case 7013:
               return "Matamorez";
           case 7014:
               return "Compound Bow";
           case 7015:
               return "Outfield";
           case 7016:
               return "Lever Action";
           case 7017:
               return "Proninety";
           case 7018:
               return "Desert Falcon";
           case 9000:
               return "Red Dot Sight";
           case 9001:
               return "Open Circle Rail";
           case 9002:
               return "12x Zoom Scope";
           case 9003:
               return "Holographic Sight";
           case 9004:
               return "6x Zoom Scope";
           case 9005:
               return "Half Circle Rail";
           case 9006:
               return "Full Circle Rail";
           case 9007:
               return "Dual Component Rail";
           case 9008:
               return "Planar Track Rail";
           case 9009:
               return "20x Zoom Scope";
           case 9010:
               return "Zoomomatic";
           case 9011:
               return "Point Circle Sight";
           case 9012:
               return "7x Zoom Scope";
           case 9013:
               return "Dual Point Rail";
           case 10000:
               return "NATO Magazine";
           case 10001:
               return "NATO Drum";
           case 10002:
               return "Swift Magazine";
           case 10003:
               return "Bonjour Clip";
           case 10004:
               return "Lebel Magazine";
           case 10005:
               return "NATO Tracer";
           case 10006:
               return "Savage Magazine";
           case 10007:
               return "Savage Drum";
           case 10008:
               return "Winchestre Clip";
           case 10009:
               return "Lapua Magazine";
           case 10010:
               return "Lapua Tracer";
           case 10011:
               return "Yuri Magazine";
           case 10012:
               return "Xtrmin Magazine";
           case 10013:
               return "PDW Magazine";
           case 15000:
               return "Bottled Water";
           case 15001:
               return "Canned Cola";
           case 15002:
               return "Apple Juice Box";
           case 15003:
               return "Large Bottled Water";
           case 15004:
               return "Energy Drink";
           case 15005:
               return "Moldy Milk";
           case 15006:
               return "Moldy Orange Juice";
           case 15007:
               return "Moldy Bottled Water";
           case 15008:
               return "Milk";
           case 15009:
               return "Orange Juice";
           case 23000:
               return "Road Flare";
           case 23001:
               return "Red Chemlight";
           case 23002:
               return "Blue Chemlight";
           case 23003:
               return "Yellow Chemlight";
           case 23004:
               return "Green Chemlight";
           case 23005:
               return "Orange Chemlight";
           case 23006:
               return "Purple Chemlight";
           case 23007:
               return "Frag Grenade";
           case 23008:
               return "Smoke Grenade";
           case 19000:
               return "Wooden Plate";
           case 19001:
               return "Wooden Support";
           case 19002:
               return "Wooden Frame";
           case 19003:
               return "Wooden Cross";
           case 19004:
               return "Stone Plate";
           case 19005:
               return "Stone Support";
           case 19006:
               return "Stone Frame";
           case 19007:
               return "Stone Cross";
           case 2000:
               return "Napsack";
           case 2001:
               return "Schoolbag";
           case 2002:
               return "Travelpack";
           case 2003:
               return "Coyotepack";
           case 2004:
               return "Rucksack";
           case 2005:
               return "Alicepack";
           case 2006:
               return "Animalpack";
           case 3000:
               return "Civilian Armor";
           case 3001:
               return "Desert Armor";
           case 3002:
               return "Forest Armor";
           case 3003:
               return "Police Armor";
           case 3004:
               return "Poncho";
           case 3005:
               return "Magick Cloak";
           case 11000:
               return "Vertical Grip";
           case 11001:
               return "Angled Grip";
           case 11002:
               return "Tactical Laser";
           case 11003:
               return "Tactical Light";
           case 11004:
               return "Bipod";
           case 11005:
               return "Bayonet";
           case 22000:
               return "Carrot Seed";
           case 22001:
               return "Tomato Seed";
           case 22002:
               return "Corn Seed";
           case 22003:
               return "Cabbage Seed";
           case 22004:
               return "Potato Seed";
           case 12000:
               return "Suppressor";
           case 12001:
               return "Flash Hider";
           case 12002:
               return "Muffler";
           case 25000:
               return "Buckshot";
           case 25001:
               return "Arrow";
           case 25002:
               return "Slug";
           case 20000:
               return "Gas Can";
           case 20001:
               return "Car Jack";
           case 21000:
               return "Blowtorch";
           case 21001:
               return "Chainsaw";
           case 24000:
               return "Binoculars";
           case 26000:
               return "Canteen";
           case 27000:
               return "Fertilizer";
           case 28000:
               return "PEI Map";
           case -1:
               return "<empty>";
           default:
               return "<unknown>";
       }
   }

int Items::getID(QString name){
name = name.toLower();

            if(name == "canned beans")
                return 14000;
            else if(name == "granola bar")
                return 14001;
            else if(name == "fresh carrot")
                return 14002;
            else if (name == "moldy carrot")
                return 14003;
            else if (name == "fresh tomato")
                return 14004;
            else if (name == "moldy tomato")
                return 14005;
            else if (name == "fresh corn")
                return 14006;
            else if (name == "moldy corn")
                return 14007;
            else if (name == "fresh cabbage")
                return 14008;
            else if (name ==  "moldy cabbage")
                return 14009;
            else if (name ==  "fresh potato")
                return 14010;
            else if (name ==  "moldy potato")
                return 14011;
            else if (name ==  "cooked venison")
                return 14012;
            else if (name ==  "raw venison")
                return 14013;
            else if (name ==  "canned soup")
                return 14014;
            else if (name ==  "canned chili")
                return 14015;
            else if (name ==  "canned vegetables")
                return 14016;
            else if (name ==  "canned pasta")
                return 14017;
            else if (name ==  "canned ham")
                return 14018;
            else if (name ==  "canned tuna")
                return 14019;
            else if (name ==  "candy bar")
                return 14020;
            else if (name ==  "chocolate bar")
                return 14021;
            else if (name ==  "mre")
                return 14022;
            else if (name ==  "potato chips")
                return 14023;
            else if (name ==  "bran cereal")
                return 14024;
            else if (name ==  "red berries")
                return 14025;
            else if (name ==  "blue berries")
                return 14026;
            else if (name ==  "pink berries")
                return 14027;
            else if (name ==  "pale berries")
                return 14028;
            else if (name ==  "green berries")
                return 14029;
            else if (name ==  "purple berries")
                return 14030;
            else if (name ==  "coconut")
                return 14031;
            else if (name ==  "cooked bacon")
                return 14032;
            else if (name ==  "raw bacon")
                return 14033;
            else if (name ==  "wooden shield")
                return 16000;
            else if (name ==  "metal door")
                return 16001;
            else if (name ==  "worklight")
                return 16002;
            else if (name ==  "caltrop")
                return 16003;
            else if (name ==  "barbed wire")
                return 16004;
            else if (name ==  "wooden spike trap")
                return 16005;
            else if (name ==  "snare")
                return 16006;
            else if (name ==  "generator")
                return 16007;
            else if (name ==  "note")
                return 16008;
            else if (name ==  "electric trap")
                return 16009;
            else if (name ==  "sandbags")
                return 16010;
            else if (name ==  "sleeping bag")
                return 16011;
            else if (name ==  "cot")
                return 16012;
            else if (name ==  "campfire")
                return 16013;
            else if (name ==  "metal shutter")
                return 16014;
            else if (name ==  "moab")
                return 16015;
            else if (name ==  "tripmine")
                return 16016;
            else if (name ==  "landmine")
                return 16017;
            else if (name ==  "metal shield")
                return 16018;
            else if (name ==  "wooden crate")
                return 16019;
            else if (name ==  "barbed fence")
                return 16020;
            else if (name ==  "electric fence")
                return 16021;
            else if (name ==  "wooden door")
                return 16022;
            else if (name ==  "metal locker")
                return 16023;
            else if (name ==  "wooden shutter")
                return 16024;
            else if (name ==  "wooden chest")
                return 16025;
            else if (name ==  "brazier")
                return 16026;
            else if (name ==  "wooden gate")
                return 16027;
            else if (name ==  "metal gate")
                return 16028;
            else if (name ==  "wooden foundation")
                return 17000;
            else if (name ==  "wooden wall")
                return 17001;
            else if (name ==  "wooden doorway")
                return 17002;
            else if (name ==  "wooden pillar")
                return 17003;
            else if (name ==  "wooden platform")
                return 17004;
            else if (name ==  "wooden ramp")
                return 17005;
            else if (name ==  "greenhouse foundation")
                return 17006;
            else if (name ==  "greenhouse platform")
                return 17007;
            else if (name ==  "wooden hole")
                return 17008;
            else if (name ==  "wooden ladder")
                return 17009;
            else if (name ==  "wooden window")
                return 17010;
            else if (name ==  "wooden post")
                return 17011;
            else if (name ==  "wooden rampart")
                return 17012;
            else if (name ==  "stone rampart")
                return 17013;
            else if (name ==  "stone post")
                return 17014;
            else if (name ==  "stone wall")
                return 17015;
            else if (name ==  "stone doorway")
                return 17016;
            else if (name ==  "stone window")
                return 17017;
            else if (name ==  "stone pillar")
                return 17018;
            else if (name ==  "dock foundation")
                return 17019;
            else if (name ==  "wooden garage")
                return 17020;
            else if (name ==  "stone garage")
                return 17021;
            else if (name ==  "fancy suit")
                return 4000;
            else if (name ==  "rcmp uniform1")
                return 4001;
            else if (name ==  "police uniform1")
                return 4002;
            else if (name ==  "army fatigues1")
                return 4003;
            else if (name ==  "army fatigues2")
                return 4004;
            else if (name ==  "fireperson top1")
                return 4005;
            else if (name ==  "fireperson top2")
                return 4006;
            else if (name ==  "construction vest")
                return 4007;
            else if (name ==  "doctor coat")
                return 4008;
            else if (name ==  "orange hoodie")
                return 4009;
            else if (name ==  "pink shirt")
                return 4010;
            else if (name ==  "boring suit")
                return 4011;
            else if (name ==  "blue sweatervest")
                return 4012;
            else if (name ==  "jumper top")
                return 4013;
            else if (name ==  "grocer top")
                return 4014;
            else if (name ==  "sailor fatigues1")
                return 4015;
            else if (name ==  "animal shirt")
                return 4016;
            else if (name ==  "ghillie top")
                return 4017;
            else if (name ==  "ninja top")
                return 4018;
            else if (name ==  "plaid shirt")
                return 4019;
            else if (name ==  "chef shirt")
                return 4020;
            else if (name ==  "fancy jeans")
                return 5000;
            else if (name ==  "rcmp uniform2")
                return 5001;
            else if (name ==  "police uniform2")
                return 5002;
            else if (name ==  "army fatigues3")
                return 5003;
            else if (name ==  "army fatigues4")
                return 5004;
            else if (name ==  "fireperson pants1")
                return 5005;
            else if (name ==  "fireperson pants2")
                return 5006;
            else if (name ==  "work jeans")
                return 5007;
            else if (name ==  "doctor pants")
                return 5008;
            else if (name ==  "grey pants")
                return 5009;
            else if (name ==  "khaki pants")
                return 5010;
            else if (name ==  "boring pants")
                return 5011;
            else if (name ==  "brown pants")
                return 5012;
            else if (name ==  "jumper bottom")
                return 5013;
            else if (name ==  "grocer bottom")
                return 5014;
            else if (name ==  "sailor fatigues2")
                return 5015;
            else if (name ==  "animal pants")
                return 5016;
            else if (name ==  "ghillie bottom")
                return 5017;
            else if (name ==  "ninja bottom")
                return 5018;
            else if (name ==  "lumberjack pants")
                return 5019;
            else if (name ==  "chef pants")
                return 5020;
            else if (name ==  "board")
                return 18000;
            else if (name ==  "nails")
                return 18001;
            else if (name ==  "bolts")
                return 18002;
            else if (name ==  "log")
                return 18003;
            else if (name ==  "stick")
                return 18004;
            else if (name ==  "animal pelt")
                return 18005;
            else if (name ==  "rope")
                return 18006;
            else if (name ==  "wire")
                return 18007;
            else if (name ==  "scrap metal")
                return 18008;
            else if (name ==  "cloth")
                return 18009;
            else if (name ==  "duct tape")
                return 18010;
            else if (name ==  "can")
                return 18011;
            else if (name ==  "raw explosives")
                return 18012;
            else if (name ==  "civilian bullets")
                return 18013;
            else if (name ==  "military bullets")
                return 18014;
            else if (name ==  "stone")
                return 18015;
            else if (name ==  "tracer bullets")
                return 18016;
            else if (name ==  "batteries")
                return 18017;
            else if (name ==  "wooden spike")
                return 18018;
            else if (name ==  "rocks")
                return 18019;
            else if (name ==  "shells")
                return 18020;
            else if (name ==  "fancy shades")
                return 0;
            else if (name ==  "civilian nvg")
                return 1;
            else if (name ==  "stetson")
                return 2;
            else if (name ==  "construction helmet")
                return 3;
            else if (name ==  "fire helmet1")
                return 4;
            else if (name ==  "police cap")
                return 5;
            else if (name ==  "fire helmet2")
                return 6;
            else if (name ==  "desert helmet")
                return 7;
            else if (name ==  "forest helmet")
                return 8;
            else if (name ==  "dixie hat")
                return 9;
            else if (name ==  "bandana")
                return 10;
            else if (name ==  "ghillie hood")
                return 11;
            else if (name ==  "ninja hood")
                return 12;
            else if (name ==  "farmer hat")
                return 13;
            else if (name ==  "chef hat")
                return 14;
            else if (name ==  "beret")
                return 15;
            else if (name ==  "ushanka")
                return 16;
            else if (name ==  "military nvg")
                return 17;
            else if (name ==  "white hat")
                return 18;
            else if (name ==  "miner helmet")
                return 19;
            else if (name ==  "axe")
                return 8000;
            else if (name ==  "handlamp")
                return 8001;
            else if (name ==  "pick")
                return 8002;
            else if (name ==  "kitchen knife")
                return 8003;
            else if (name ==  "hammer")
                return 8004;
            else if (name ==  "frying pan")
                return 8005;
            else if (name ==  "baseball bat")
                return 8006;
            else if (name ==  "police baton")
                return 8007;
            else if (name ==  "torch")
                return 8008;
            else if (name ==  "fireaxe")
                return 8009;
            else if (name ==  "crowbar")
                return 8010;
            else if (name ==  "pocketknife")
                return 8011;
            else if (name ==  "butcher knife")
                return 8012;
            else if (name ==  "sledgehammer")
                return 8013;
            else if (name ==  "golf club")
                return 8014;
            else if (name ==  "katana")
                return 8015;
            else if (name ==  "machete")
                return 8016;
            else if (name ==  "spike")
                return 8017;
            else if (name ==  "branch")
                return 8018;
            else if (name ==  "handsaw")
                return 8019;
            else if (name ==  "medkit")
                return 13000;
            else if (name ==  "rag")
                return 13001;
            else if (name ==  "splint")
                return 13002;
            else if (name ==  "vitamins")
                return 13003;
            else if (name ==  "antibiotics")
                return 13004;
            else if (name ==  "painkillers")
                return 13005;
            else if (name ==  "dressing")
                return 13006;
            else if (name ==  "blood bag")
                return 13007;
            else if (name ==  "bandage")
                return 13008;
            else if (name ==  "adrenaline")
                return 13009;
            else if (name ==  "morphine")
                return 13010;
            else if (name ==  "crushed red berries")
                return 13011;
            else if (name ==  "crushed blue berries")
                return 13012;
            else if (name ==  "crushed pink berries")
                return 13013;
            else if (name ==  "crushed pale berries")
                return 13014;
            else if (name ==  "crushed green berries")
                return 13015;
            else if (name ==  "crushed purple berries")
                return 13016;
            else if (name ==  "purification tablets")
                return 13017;
            else if (name ==  "vaccine")
                return 13018;
            else if (name ==  "swissgewehr")
                return 7000;
            else if (name ==  "colt")
                return 7001;
            else if (name ==  "double barrel")
                return 7002;
            else if (name ==  "mosen")
                return 7003;
            else if (name ==  "longbow")
                return 7004;
            else if (name ==  "novuh")
                return 7005;
            else if (name ==  "berette")
                return 7006;
            else if (name ==  "crossbow")
                return 7007;
            else if (name ==  "maplestrike")
                return 7008;
            else if (name ==  "zubeknakov")
                return 7009;
            else if (name ==  "magnum")
                return 7010;
            else if (name ==  "timberwolf")
                return 7011;
            else if (name ==  "uzy")
                return 7012;
            else if (name ==  "matamorez")
                return 7013;
            else if (name ==  "compound bow")
                return 7014;
            else if (name ==  "outfield")
                return 7015;
            else if (name ==  "lever action")
                return 7016;
            else if (name ==  "proninety")
                return 7017;
            else if (name ==  "desert falcon")
                return 7018;
            else if (name ==  "red dot sight")
                return 9000;
            else if (name ==  "open circle rail")
                return 9001;
            else if (name ==  "12x zoom scope")
                return 9002;
            else if (name ==  "holographic sight")
                return 9003;
            else if (name ==  "6x zoom scope")
                return 9004;
            else if (name ==  "half circle rail")
                return 9005;
            else if (name ==  "full circle rail")
                return 9006;
            else if (name ==  "dual component rail")
                return 9007;
            else if (name ==  "planar track rail")
                return 9008;
            else if (name ==  "20x zoom scope")
                return 9009;
            else if (name ==  "zoomomatic")
                return 9010;
            else if (name ==  "point circle sight")
                return 9011;
            else if (name ==  "7x zoom scope")
                return 9012;
            else if (name ==  "dual point rail")
                return 9013;
            else if (name ==  "nato magazine")
                return 10000;
            else if (name ==  "nato drum")
                return 10001;
            else if (name ==  "swift magazine")
                return 10002;
            else if (name ==  "bonjour clip")
                return 10003;
            else if (name ==  "lebel magazine")
                return 10004;
            else if (name ==  "nato tracer")
                return 10005;
            else if (name ==  "savage magazine")
                return 10006;
            else if (name ==  "savage drum")
                return 10007;
            else if (name ==  "winchestre clip")
                return 10008;
            else if (name ==  "lapua magazine")
                return 10009;
            else if (name ==  "lapua tracer")
                return 10010;
            else if (name ==  "yuri magazine")
                return 10011;
            else if (name ==  "xtrmin magazine")
                return 10012;
            else if (name ==  "pdw magazine")
                return 10013;
            else if (name ==  "bottled water")
                return 15000;
            else if (name ==  "canned cola")
                return 15001;
            else if (name ==  "apple juice box")
                return 15002;
            else if (name ==  "large bottled water")
                return 15003;
            else if (name ==  "energy drink")
                return 15004;
            else if (name ==  "moldy milk")
                return 15005;
            else if (name ==  "moldy orange juice")
                return 15006;
            else if (name ==  "moldy bottled water")
                return 15007;
            else if (name ==  "milk")
                return 15008;
            else if (name ==  "orange juice")
                return 15009;
            else if (name ==  "road flare")
                return 23000;
            else if (name ==  "red chemlight")
                return 23001;
            else if (name ==  "blue chemlight")
                return 23002;
            else if (name ==  "yellow chemlight")
                return 23003;
            else if (name ==  "green chemlight")
                return 23004;
            else if (name ==  "orange chemlight")
                return 23005;
            else if (name ==  "purple chemlight")
                return 23006;
            else if (name ==  "frag grenade")
                return 23007;
            else if (name ==  "smoke grenade")
                return 23008;
            else if (name ==  "wooden plate")
                return 19000;
            else if (name ==  "wooden support")
                return 19001;
            else if (name ==  "wooden frame")
                return 19002;
            else if (name ==  "wooden cross")
                return 19003;
            else if (name ==  "stone plate")
                return 19004;
            else if (name ==  "stone support")
                return 19005;
            else if (name ==  "stone frame")
                return 19006;
            else if (name ==  "stone cross")
                return 19007;
            else if (name ==  "napsack")
                return 2000;
            else if (name ==  "schoolbag")
                return 2001;
            else if (name ==  "travelpack")
                return 2002;
            else if (name ==  "coyotepack")
                return 2003;
            else if (name ==  "rucksack")
                return 2004;
            else if (name ==  "alicepack")
                return 2005;
            else if (name ==  "animalpack")
                return 2006;
            else if (name ==  "civilian armor")
                return 3000;
            else if (name ==  "desert armor")
                return 3001;
            else if (name ==  "forest armor")
                return 3002;
            else if (name ==  "police armor")
                return 3003;
            else if (name ==  "poncho")
                return 3004;
            else if (name ==  "magick cloak")
                return 3005;
            else if (name ==  "vertical grip")
                return 11000;
            else if (name ==  "angled grip")
                return 11001;
            else if (name ==  "tactical laser")
                return 11002;
            else if (name ==  "tactical light")
                return 11003;
            else if (name ==  "bipod")
                return 11004;
            else if (name ==  "bayonet")
                return 11005;
            else if (name ==  "carrot seed")
                return 22000;
            else if (name ==  "tomato seed")
                return 22001;
            else if (name ==  "corn seed")
                return 22002;
            else if (name ==  "cabbage seed")
                return 22003;
            else if (name ==  "potato seed")
                return 22004;
            else if (name ==  "suppressor")
                return 12000;
            else if (name ==  "flash hider")
                return 12001;
            else if (name ==  "muffler")
                return 12002;
            else if (name ==  "buckshot")
                return 25000;
            else if (name ==  "arrow")
                return 25001;
            else if (name ==  "slug")
                return 25002;
            else if (name ==  "gas can")
                return 20000;
            else if (name ==  "car jack")
                return 20001;
            else if (name ==  "blowtorch")
                return 21000;
            else if (name ==  "chainsaw")
                return 21001;
            else if (name ==  "binoculars")
                return 24000;
            else if (name ==  "canteen")
                return 26000;
            else if (name ==  "fertilizer")
                return 27000;
            else if (name ==  "pei map")
                return 28000;
            else if (name == "safety")
                return 0;
            else if (name == "semi")
                return 1;
            else if (name == "auto")
                return 2;
            else if (name ==  "<empty>")
                return -1;
            else
                return -1;

    }

void Items::getAllItems(){
//    qDebug() << "Retrieving items";

//    //qDebug() << QDir::currentPath();

//    QFile file("../../../Items.txt");

//    if(!file.open(QIODevice::ReadOnly)) {
//        qDebug() << "Error opening file";
//    }

//    QTextStream in(&file);


//    while(!in.atEnd()){
//        QString line = in.readLine();
//        //qDebug() << line;
//        allItems.append(line);
//    }
//    allItems.prepend("<empty>");

//    file.close();
    QString allItemsS = "Canned Beans,Granola Bar,Fresh Carrot,Moldy Carrot,Fresh Tomato,Moldy Tomato,Fresh Corn,Moldy Corn,Fresh Cabbage,Moldy Cabbage,Fresh Potato,Moldy Potato,Cooked Venison,Raw Venison,Canned Soup,Canned Chili,Canned Vegetables,Canned Pasta,Canned Ham,Canned Tuna,Candy Bar,Chocolate Bar,MRE,Potato Chips,Bran Cereal,Red Berries,Blue Berries,Pink Berries,Pale Berries,Green Berries,Purple Berries,Coconut,Cooked Bacon,Raw Bacon,Wooden Shield,Metal Door,Worklight,Caltrop,Barbed Wire,Wooden Spike Trap,Snare,Generator,Note,Electric Trap,Sandbags,Sleeping Bag,Cot,Campfire,Metal Shutter,MOAB,Tripmine,Landmine,Metal Shield,Wooden Crate,Barbed Fence,Electric Fence,Wooden Door,Metal Locker,Wooden Shutter,Wooden Chest,Brazier,Wooden Gate,Metal Gate,Wooden Foundation,Wooden Wall,Wooden Doorway,Wooden Pillar,Wooden Platform,Wooden Ramp,Greenhouse Foundation,Greenhouse Platform,Wooden Hole,Wooden Ladder,Wooden Window,Wooden Post,Wooden Rampart,Stone Rampart,Stone Post,Stone Wall,Stone Doorway,Stone Window,Stone Pillar,Dock Foundation,Wooden Garage,Stone Garage,Fancy Suit,RCMP Uniform1,Police Uniform1,Army Fatigues1,Army Fatigues2,Fireperson Top1,Fireperson Top2,Construction Vest,Doctor Coat,Orange Hoodie,Pink Shirt,Boring Suit,Blue Sweatervest,Jumper Top,Grocer Top,Sailor Fatigues1,Animal Shirt,Ghillie Top,Ninja Top,Plaid Shirt,Chef Shirt,Fancy Jeans,RCMP Uniform2,Police Uniform2,Army Fatigues3,Army Fatigues4,Fireperson Pants1,Fireperson Pants2,Work Jeans,Doctor Pants,Grey Pants,Khaki Pants,Boring Pants,Brown Pants,Jumper Bottom,Grocer Bottom,Sailor Fatigues2,Animal Pants,Ghillie Bottom,Ninja Bottom,Lumberjack Pants,Chef Pants,Board,Nails,Bolts,Log,Stick,Animal Pelt,Rope,Wire,Scrap Metal,Cloth,Duct Tape,Can,Raw Explosives,Civilian Bullets,Military Bullets,Stone,Tracer Bullets,Batteries,Wooden Spike,Rocks,Shells,Fancy Shades,Civilian NVG,Stetson,Construction Helmet,Fire Helmet1,Police Cap,Fire Helmet2,Desert Helmet,Forest Helmet,Dixie Hat,Bandana,Ghillie Hood,Ninja Hood,Farmer Hat,Chef Hat,Beret,Ushanka,Military NVG,White Hat,Miner Helmet,Axe,Handlamp,Pick,Kitchen Knife,Hammer,Frying Pan,Baseball Bat,Police Baton,Torch,Fireaxe,Crowbar,Pocketknife,Butcher Knife,Sledgehammer,Golf Club,Katana,Machete,Spike,Branch,Handsaw,Medkit,Rag,Splint,Vitamins,Antibiotics,Painkillers,Dressing,Blood Bag,Bandage,Adrenaline,Morphine,Crushed Red Berries,Crushed Blue Berries,Crushed Pink Berries,Crushed Pale Berries,Crushed Green Berries,Crushed Purple Berries,Purification Tablets,Vaccine,Swissgewehr,Colt,Double Barrel,Mosen,Longbow,Novuh,Berette,Crossbow,Maplestrike,Zubeknakov,Magnum,Timberwolf,Uzy,Matamorez,Compound Bow,Outfield,Lever Action,Proninety,Desert Falcon,Red Dot Sight,Open Circle Rail,12x Zoom Scope,Holographic Sight,6x Zoom Scope,Half Circle Rail,Full Circle Rail,Dual Component Rail,Planar Track Rail,20x Zoom Scope,Zoomomatic,Point Circle Sight,7x Zoom Scope,Dual Point Rail,NATO Magazine,NATO Drum,Swift Magazine,Bonjour Clip,Lebel Magazine,NATO Tracer,Savage Magazine,Savage Drum,Winchestre Clip,Lapua Magazine,Lapua Tracer,Yuri Magazine,Xtrmin Magazine,PDW Magazine,Bottled Water,Canned Cola,Apple Juice Box,Large Bottled Water,Energy Drink,Moldy Milk,Moldy Orange Juice,Moldy Bottled Water,Milk,Orange Juice,Road Flare,Red Chemlight,Blue Chemlight,Yellow Chemlight,Green Chemlight,Orange Chemlight,Purple Chemlight,Frag Grenade,Smoke Grenade,Wooden Plate,Wooden Support,Wooden Frame,Wooden Cross,Stone Plate,Stone Support,Stone Frame,Stone Cross,Napsack,Schoolbag,Travelpack,Coyotepack,Rucksack,Alicepack,Animalpack,Civilian Armor,Desert Armor,Forest Armor,Police Armor,Poncho,Magick Cloak,Vertical Grip,Angled Grip,Tactical Laser,Tactical Light,Bipod,Bayonet,Carrot Seed,Tomato Seed,Corn Seed,Cabbage Seed,Potato Seed,Suppressor,Flash Hider,Muffler,Buckshot,Arrow,Slug,Gas Can,Car Jack,Blowtorch,Chainsaw,Binoculars,Canteen,Fertilizer,PEI Map";
    QStringList allItemsL = allItemsS.split(",");

    allItems = allItemsL;
    allItems.prepend("<empty>");
}

bool Items::isWeapon(QString item){
    //Check if item is a weapon
    item = item.toLower();
    QString weapons = "berette,colt,magnum,desert falcon,lever action,double barrel,novuh,mosen,outfield,maplestrike,swissgewehr,zubeknakov,uzy,proninety,matamorez,timberwolf,longbow,compound bow,crossbow";

    if(weapons.contains(item) && item != "")
        return true;
    else
        return false;
}

bool Items::isFillable(QString item){

    item = item.toLower();
    QString fillable = "gas can,canteen";

    if(fillable.contains(item) && item != "")
        return true;
    else
        return false;

}

bool Items::isToggle(QString item){
    item = item.toLower();
    QString toggle = "torch,handlamp";

    if(toggle.contains(item) && item != "")
        return true;
    else
        return false;
}
