#pragma once
#include<string>

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    
    extern const char* MajorColorNames[];
    
    extern const char* MinorColorNames[];
    
    class ColorPair {
        private:
            enum MajorColor majorColor;
            enum MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor);
            MajorColor getMajor();
            MinorColor getMinor();
            std::string ToString();
    };
    
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    int GetNumberOfMajorColors();
    int GetNumberOfMinorColors();
}
