#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

class Draw_Example : public olc::PixelGameEngine {
	public:
		Draw_Example() {
			sAppName = "Draw_Example";
		}

	public:
		bool OnUserCreate() override {
			return true;
		}

		bool OnUserUpdate(float fElapsedTime) override {
			for (int x=0; x < ScreenWidth(); x++) {
				for (int y=0; y < ScreenHeight(); y++) {
						Draw(x, y, olc::Pixel(rand() % 256, rand() % 256, rand() % 256));
				}
			}

			return true;
		}
};

int main() {
	
	Draw_Example Draw_Demo;

	if (Draw_Demo.Construct(256, 240, 4, 4)) {
		Draw_Demo.Start();
	}

	return 0;
}

