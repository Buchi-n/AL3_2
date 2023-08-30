#pragma once
#include <Sprite.h>
#include <Model.h>

class Score {
public:
	/// <summary>
	/// initialize
	/// </summary>
	void Initialize();
	/// <summary>
	/// デストラクタ
	/// </summary>
	~Score();

	void DrawScoreUI(int score);

	void DrawScoreUIResult(int score);

private:
	Sprite* sprite2DNum_[6][10];
	Sprite* sprite2DNumResult_[6][10];
};