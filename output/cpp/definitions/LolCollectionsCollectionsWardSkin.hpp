#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsWardSkin_t {
    std::string_t wardShadowImagePath;
    std::string_t description;
    std::string_t wardImagePath;
    LolCollectionsCollectionsOwnership_t ownership;
    int64_t_t id;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsWardSkin_t& v) {
    j["wardShadowImagePath"] = v.wardShadowImagePath;
    j["description"] = v.description;
    j["wardImagePath"] = v.wardImagePath;
    j["ownership"] = v.ownership;
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsWardSkin_t& v) {
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string_t>();
    v.description = j.at("description").get<std::string_t>();
    v.wardImagePath = j.at("wardImagePath").get<std::string_t>();
    v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership_t>();
    v.id = j.at("id").get<int64_t_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsWardSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
