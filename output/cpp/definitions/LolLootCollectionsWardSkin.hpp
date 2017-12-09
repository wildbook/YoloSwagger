#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolLootCollectionsWardSkin_t {
    std::string name;
    LolLootCollectionsOwnership_t ownership;
    std::string wardImagePath;
    std::string wardShadowImagePath;
    int64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsWardSkin_t& v) {
    j["name"] = v.name;
    j["ownership"] = v.ownership;
    j["wardImagePath"] = v.wardImagePath;
    j["wardShadowImagePath"] = v.wardShadowImagePath;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsWardSkin_t& v) {
    v.name = j.at("name").get<std::string>();
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership_t>();
    v.wardImagePath = j.at("wardImagePath").get<std::string>();
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>();
    v.id = j.at("id").get<int64_t>();
  }
  inline std::string to_string(const LolLootCollectionsWardSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
