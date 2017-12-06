#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolLootCollectionsWardSkin_t {
    LolLootCollectionsOwnership_t ownership;
    std::string name;
    std::string wardImagePath;
    int64_t id;
    std::string wardShadowImagePath;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsWardSkin_t& v) {
    j["ownership"] = v.ownership;
    j["name"] = v.name;
    j["wardImagePath"] = v.wardImagePath;
    j["id"] = v.id;
    j["wardShadowImagePath"] = v.wardShadowImagePath;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsWardSkin_t& v) {
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership_t>();
    v.name = j.at("name").get<std::string>();
    v.wardImagePath = j.at("wardImagePath").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>();
  }
}
