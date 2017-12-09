#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsWardSkin_t {
    LolCollectionsCollectionsOwnership_t ownership;
    std::string wardShadowImagePath;
    std::string wardImagePath;
    std::string description;
    int64_t id;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsWardSkin_t& v) {
    j["ownership"] = v.ownership;
    j["wardShadowImagePath"] = v.wardShadowImagePath;
    j["wardImagePath"] = v.wardImagePath;
    j["description"] = v.description;
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsWardSkin_t& v) {
    v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership_t>();
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>();
    v.wardImagePath = j.at("wardImagePath").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolCollectionsCollectionsWardSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
