#include "Main.h"
#include "Manager.h"
#include "Renderer.h"
#include "Model.h"
#include "Input.h"
#include "Title.h"
#include "TitleStartButton.h"
#include "TitleLogo.h"
#include "TitleGround.h"
#include "Polygon2D.h"
#include "Fade.h"
#include "Game.h"


void Title::Init()
{
	AddGameObject<Fade>(3);
	AddGameObject<TitleLogo>(2);
	AddGameObject<TitleStartButton>(2);
	AddGameObject<TitleGround>(1);
	m_TitleCount = 0.0f;

	start = false;
}

void Title::Uninit()
{
	Scene::Uninit();
}

void Title::Update()
{
	Scene::Update();
	float m_TitleCountMax = 700;
	if (m_TitleCount > m_TitleCountMax)
	{
		
	}
	if (Input::GetKeyTrigger(VK_RETURN))
	{
		Manager::SetScene<Game>();
		
		
	}
	
}

void Title::Draw()
{
	Scene::Draw();
}