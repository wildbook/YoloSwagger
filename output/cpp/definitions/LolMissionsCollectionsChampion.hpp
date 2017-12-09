#pragma once
#include <json.hpp>
#include <optional>
#include "LolMissionsCollectionsChampionSkin.hpp"
#include "LolMissionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolMissionsCollectionsChampion_t {
    int32_t id;
    bool freeToPlay;
    LolMissionsCollectionsOwnership_t ownership;
    std::vector<LolMissionsCollectionsChampionSkin_t> skins;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsCollectionsChampion_t& v) {
    j["id"] = v.id;
    j["freeToPlay"] = v.freeToPlay;
    j["ownership"] = v.ownership;
    j["skins"] = v.skins;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsCollectionsChampion_t& v) {
    v.id = j.at("id").get<int32_t>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership_t>();
    v.skins = j.at("skins").get<std::vector<LolMissionsCollectionsChampionSkin_t>>();
  }
  inline std::string to_string(const LolMissionsCollectionsChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
