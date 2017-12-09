#pragma once
#include <json.hpp>
#include <optional>
#include "LolMissionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolMissionsCollectionsWardSkin_t {
    LolMissionsCollectionsOwnership_t ownership;
    int64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsCollectionsWardSkin_t& v) {
    j["ownership"] = v.ownership;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsCollectionsWardSkin_t& v) {
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership_t>();
    v.id = j.at("id").get<int64_t>();
  }
  inline std::string to_string(const LolMissionsCollectionsWardSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
