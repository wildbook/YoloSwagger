#pragma once
#include <json.hpp>
#include <optional>
#include "LolMissionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolMissionsCollectionsChampionSkin_t {
    int32_t id;
    LolMissionsCollectionsOwnership_t ownership;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsCollectionsChampionSkin_t& v) {
    j["id"] = v.id;
    j["ownership"] = v.ownership;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsCollectionsChampionSkin_t& v) {
    v.id = j.at("id").get<int32_t>();
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolMissionsCollectionsChampionSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
