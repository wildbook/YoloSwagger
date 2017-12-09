#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashRosterDetails_t {
    int32_t iconColorId;
    std::string name;
    int32_t iconId;
    std::string shortName;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterDetails_t& v) {
    j["iconColorId"] = v.iconColorId;
    j["name"] = v.name;
    j["iconId"] = v.iconId;
    j["shortName"] = v.shortName;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterDetails_t& v) {
    v.iconColorId = j.at("iconColorId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.iconId = j.at("iconId").get<int32_t>();
    v.shortName = j.at("shortName").get<std::string>();
  }
  inline std::string to_string(const LolClashRosterDetails_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
