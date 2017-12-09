#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsWardSkin_t {
    LolCollectionsCollectionsOwnership_t ownership;
    std::string description;
    std::string wardImagePath;
    std::string name;
    int64_t id;
    std::string wardShadowImagePath;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsWardSkin_t& v) {
    j["ownership"] = v.ownership;
    j["description"] = v.description;
    j["wardImagePath"] = v.wardImagePath;
    j["name"] = v.name;
    j["id"] = v.id;
    j["wardShadowImagePath"] = v.wardShadowImagePath;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsWardSkin_t& v) {
    v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership_t>();
    v.description = j.at("description").get<std::string>();
    v.wardImagePath = j.at("wardImagePath").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>();
  }
  inline std::string to_string(const LolCollectionsCollectionsWardSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
