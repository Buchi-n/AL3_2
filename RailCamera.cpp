#include "RailCamera.h"
#include "ImGuiManager.h"


void RailCamera::Initialize(Vector3 trans, Vector3 rot) {
	
	worldTransform_.translation_ = trans;
	worldTransform_.rotation_ = rot;
	worldTransform_.Initialize();
	viewProjection_.farZ = 500;
	viewProjection_.Initialize();
	
}

void RailCamera::Update() {
	Vector3 move = {0.0f, 0.0f, 0.0f};
	Vector3 rot = {0.0f, 0.0f, 0.0f};

	worldTransform_.translation_.x += move.x;
	worldTransform_.translation_.y += move.y;
	worldTransform_.translation_.z += move.z;

	worldTransform_.rotation_.x += rot.x;
	worldTransform_.rotation_.y += rot.y;
	worldTransform_.rotation_.z += rot.z;

	worldTransform_.UpdateMatrix();
	
	viewProjection_.matView = Inverse(worldTransform_.matWorld_);
}