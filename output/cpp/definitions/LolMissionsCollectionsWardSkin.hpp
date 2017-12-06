#pragma once
#include <json.hpp>
#include <optional>
#include "LolMissionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolMissionsCollectionsWardSkin_t {
    int64_t id;
    LolMissionsCollectionsOwnership_t ownership;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsCollectionsWardSkin_t& v) {
    j["id"] = v.id;
    j["ownership"] = v.ownership;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsCollectionsWardSkin_t& v) {
    v.id = j.at("id").get<int64_t>();
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership_t>();
  }
}
