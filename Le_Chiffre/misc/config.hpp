#ifndef CONFIG_HPP
#define CONFIG_HPP
#pragma once
#include <string>
#include "xor.hpp"

namespace {
	const ::std::string CHEAT_VERSION = XorStr("v1.1.7");
	const wchar_t* HOST = L"api.github.com";
	const wchar_t* PATH = L"/repos/blaumaus/le_chiffre/tags?per_page=1";
	const wchar_t* TARGET = L"csgo.exe";
	const wchar_t* CLIENT_DLL = L"client.dll";
	const wchar_t* ENGINE_DLL = L"engine.dll";
	LPCSTR WINDOW_NAME = "Counter-Strike: Global Offensive";

	struct coords_vector {
		float x, y, z;
	};

	struct hacks_coords {
		COORD no_flash, activate_trigger, use_trigger, enemy_wh, radar_hack, bunny_hop, aimbot, process, game, version, language;
	};
}
#endif