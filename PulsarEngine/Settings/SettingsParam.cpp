#include <kamek.hpp>
#include <PulsarSystem.hpp>
#include <Config.hpp>
#include <Settings/SettingsParam.hpp>

namespace Pulsar {

namespace Settings {

u8 Params::radioCount[Params::pageCount] ={
    3, 5, 3, 5, 2, //menu, race, host, OTT, KO
    6, 6, 6, 6, 6, 6, 6, 5//Add user radio count here

};
u8 Params::scrollerCount[Params::pageCount] ={ 1, 1, 1, 0, 2, 5, 5, 5, 5, 5, 5, 5, 5 }; //menu, race, host, OTT, KO
u8 Params::buttonsPerPagePerRow[Params::pageCount][Params::maxRadioCount] = //first row is PulsarSettingsType, 2nd is rowIdx of radio
{
    { 3, 2, 3, 0, 0, 0 }, //Menu
    { 2, 2, 2, 2, 3, 0 }, //Race
    { 2, 4, 2, 0, 0, 0 }, //Host
    { 3, 3, 2, 2, 2, 0 }, //OTT
    { 2, 2, 0, 0, 0, 0 }, //KO

    { 2, 2, 2, 2, 2, 2 }, //Page1
    { 2, 2, 2, 2, 2, 2 }, //Page2
    { 4, 2, 2, 2, 3, 2 }, //Page3
    { 2, 2, 2, 2, 2, 2 }, //Page4
    { 2, 2, 2, 2, 2, 2 }, //Page5
    { 3, 3, 3, 3, 3, 3 }, //Page6
    { 3, 3, 3, 3, 3, 3 }, //Page7
    { 3, 3, 3, 2, 2, 0 }, //Page8


 
};
u8 Params::optionsPerPagePerScroller[Params::pageCount][Params::maxScrollerCount] =
{
    { 5, 7, 0, 0, 0}, //Menu
    { 4, 0, 0, 0, 0}, //Race
    { 7, 0, 0, 0, 0}, //Host
    { 0, 0, 0, 0, 0}, //OTT
    { 4, 4, 0, 0, 0}, //KO

    {15, 2, 2, 2, 2}, //Page1
    { 5, 6, 2, 2, 2}, //Page2
    { 9, 2, 2, 2, 2}, //Page3
    { 4, 2, 2, 3, 2}, //Page4
    { 9, 6, 2, 2, 2}, //Page5
    { 3, 3, 3, 3, 3}, //Page6
    { 3, 3, 3, 3, 3}, //Page7
    {16,16,16,16, 3}, //Page8


 

};

}//namespace Settings
}//namespace Pulsar



