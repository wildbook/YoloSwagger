#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsWardSkin_t {
    int64_t id;
    std::string wardShadowImagePath;
    std::string description;
    std::string name;
    LolCollectionsCollectionsOwnership_t ownership;
    std::string wardImagePath;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsWardSkin_t& v) {
    j["id"] = v.id;
    j["wardShadowImagePath"] = v.wardShadowImagePath;
    j["description"] = v.description;
    j["name"] = v.name;
    j["ownership"] = v.ownership;
    j["wardImagePath"] = v.wardImagePath;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsWardSkin_t& v) {
    v.id = j.at("id").get<int64_t>();
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership_t>();
    v.wardImagePath = j.at("wardImagePath").get<std::string>();
  }
  inline std::string to_string(const LolCollectionsCollectionsWardSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
