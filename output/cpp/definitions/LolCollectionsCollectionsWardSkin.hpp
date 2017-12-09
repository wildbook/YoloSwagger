#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsWardSkin_t {
    std::string description;
    std::string name;
    std::string wardShadowImagePath;
    std::string wardImagePath;
    int64_t id;
    LolCollectionsCollectionsOwnership_t ownership;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsWardSkin_t& v) {
    j["description"] = v.description;
    j["name"] = v.name;
    j["wardShadowImagePath"] = v.wardShadowImagePath;
    j["wardImagePath"] = v.wardImagePath;
    j["id"] = v.id;
    j["ownership"] = v.ownership;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsWardSkin_t& v) {
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>();
    v.wardImagePath = j.at("wardImagePath").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsWardSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
