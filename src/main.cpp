#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/GameManager.hpp>
#include <Geode/modify/GameStatsManager.hpp>
class $modify(GameManager) {
	bool isColorUnlocked(int id, UnlockType type) {
		return true;
	}

	bool isIconUnlocked(int id, IconType type) {
		return true;
	}
};

class $modify(GameStatsManager) {
	bool isItemUnlocked(UnlockType type, int id) {
		return true;
	}
};