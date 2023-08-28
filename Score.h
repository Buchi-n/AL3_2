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
	/// <summary>
	/// スコア描画:６桁まで
	/// </summary>
	/// <param name="score">対象のスコア</param>
	void Draw(int score);
	/// <summary>
	/// スコア加算
	/// </summary>
	/// <param name="addVal">加算するスコア</param>
	void AddScore(int addVal) { val_ += addVal; }
	/// <summary>
	/// スコアセッター:6桁まで
	/// </summary>
	/// <param name="score">セットするスコア</param>
	void SetScore(int score) { val_ = score; }
	/// <summary>
	/// スコアゲッター
	/// </summary>
	/// <returns></returns>
	int GetScore() { return val_; }

	void DrawUI();

private:
	int val_;
	Sprite* sprite2DNum_;
};