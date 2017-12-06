#pragma once
#include <json.hpp>
#include <optional>
#include "LolMissionsCollectionsOwnership.hpp"
#include "LolMissionsCollectionsChampionSkin.hpp"
namespace leagueapi {
  struct LolMissionsCollectionsChampion_t {
    LolMissionsCollectionsOwnership_t ownership;
    bool freeToPlay;
    int32_t id;
    std::vector<LolMissionsCollectionsChampionSkin_t> skins;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsCollectionsChampion_t& v) {
    j["ownership"] = v.ownership;
    j["freeToPlay"] = v.freeToPlay;
    j["id"] = v.id;
    j["skins"] = v.skins;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsCollectionsChampion_t& v) {
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership_t>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.skins = j.at("skins").get<std::vector<LolMissionsCollectionsChampionSkin_t>>();
  }
}
