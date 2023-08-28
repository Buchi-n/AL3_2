#include "Score.h"
#include <stdio.h>

void Score::Initialize() {
	val_ = 0;
	//for (int i = 0; i < 9; i++) {
		sprite2DNum_ = nullptr;
	//};
	uint32_t textureNum = TextureManager::Load("num/1.png");

	sprite2DNum_ = Sprite::Create(textureNum, {100, 100}, {1, 1, 1, 1}, {(0.0f), (0.0f)});

}

Score::~Score() { delete sprite2DNum_; }

void Score::Draw(int score) {
	int aa[6];
	int bb;
	for (int i = 0; i < 6; i++) {
		if (i == 0) {
			bb = 100000;
		}
		aa[i] = score / bb;
		score -= aa[i] * bb;
		bb /= 10;
	}
	// 描画処理
	// printf("%d ", num[0]);//100000の位
	// printf("%d ", num[1]);//10000の位
	// printf("%d ", num[2]);//1000の位
	// printf("%d ", num[3]);//100の位
	// printf("%d ", num[4]);//10の位
	// printf("%d", num[5]);//1の位
}
void Score::DrawUI() { sprite2DNum_->Draw(); }
