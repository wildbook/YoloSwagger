#pragma once
#include <json.hpp>
#include <optional>
#include "LolMissionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolMissionsCollectionsChampionSkin_t {
    int32_t championId;
    int32_t id;
    LolMissionsCollectionsOwnership_t ownership;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsCollectionsChampionSkin_t& v) {
    j["championId"] = v.championId;
    j["id"] = v.id;
    j["ownership"] = v.ownership;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsCollectionsChampionSkin_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.id = j.at("id").get<int32_t>();
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership_t>();
  }
  inline std::string to_string(const LolMissionsCollectionsChampionSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
