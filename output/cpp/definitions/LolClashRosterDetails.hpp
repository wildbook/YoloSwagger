#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashRosterDetails_t {
    std::string shortName;
    int32_t iconColorId;
    std::string name;
    int32_t iconId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterDetails_t& v) {
    j["shortName"] = v.shortName;
    j["iconColorId"] = v.iconColorId;
    j["name"] = v.name;
    j["iconId"] = v.iconId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterDetails_t& v) {
    v.shortName = j.at("shortName").get<std::string>();
    v.iconColorId = j.at("iconColorId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.iconId = j.at("iconId").get<int32_t>();
  }
}
