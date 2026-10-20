#include <Geode/Geode.hpp>

using namespace geode::prelude;

class $modify(PlayerObject) {
    void playerDestroyed(bool p0) {
        if (m_isHolding) {
            return;
        }

        PlayerObject::playerDestroyed(p0);
    }
};