#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolLootCollectionsWardSkin_t {
    std::string wardShadowImagePath;
    int64_t id;
    LolLootCollectionsOwnership_t ownership;
    std::string name;
    std::string wardImagePath;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsWardSkin_t& v) {
    j["wardShadowImagePath"] = v.wardShadowImagePath;
    j["id"] = v.id;
    j["ownership"] = v.ownership;
    j["name"] = v.name;
    j["wardImagePath"] = v.wardImagePath;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsWardSkin_t& v) {
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership_t>();
    v.name = j.at("name").get<std::string>();
    v.wardImagePath = j.at("wardImagePath").get<std::string>();
  }
  inline std::string to_string(const LolLootCollectionsWardSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
