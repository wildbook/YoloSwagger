#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolLootCollectionsWardSkin_t {
    int64_t id;
    std::string name;
    LolLootCollectionsOwnership_t ownership;
    std::string wardShadowImagePath;
    std::string wardImagePath;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsWardSkin_t& v) {
    j["id"] = v.id;
    j["name"] = v.name;
    j["ownership"] = v.ownership;
    j["wardShadowImagePath"] = v.wardShadowImagePath;
    j["wardImagePath"] = v.wardImagePath;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsWardSkin_t& v) {
    v.id = j.at("id").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership_t>();
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>();
    v.wardImagePath = j.at("wardImagePath").get<std::string>();
  }
  inline std::string to_string(const LolLootCollectionsWardSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
