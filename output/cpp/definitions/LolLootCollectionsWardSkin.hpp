#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolLootCollectionsWardSkin_t {
    std::string_t wardImagePath;
    std::string_t wardShadowImagePath;
    int64_t_t id;
    LolLootCollectionsOwnership_t ownership;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsWardSkin_t& v) {
    j["wardImagePath"] = v.wardImagePath;
    j["wardShadowImagePath"] = v.wardShadowImagePath;
    j["id"] = v.id;
    j["ownership"] = v.ownership;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsWardSkin_t& v) {
    v.wardImagePath = j.at("wardImagePath").get<std::string_t>();
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string_t>();
    v.id = j.at("id").get<int64_t_t>();
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolLootCollectionsWardSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
