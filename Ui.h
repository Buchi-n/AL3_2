#pragma once
#include <Sprite.h>
#include <ImGuiManager.h>
#include <Model.h>

class Ui {
public:
	void Initialize();

	~Ui();

	void Draw();

private:
	Sprite* spriteTitle_ = nullptr;
};
