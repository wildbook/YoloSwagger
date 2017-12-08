#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashRosterDetails_t {
    int32_t_t iconColorId;
    int32_t_t iconId;
    std::string_t shortName;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterDetails_t& v) {
    j["iconColorId"] = v.iconColorId;
    j["iconId"] = v.iconId;
    j["shortName"] = v.shortName;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterDetails_t& v) {
    v.iconColorId = j.at("iconColorId").get<int32_t_t>();
    v.iconId = j.at("iconId").get<int32_t_t>();
    v.shortName = j.at("shortName").get<std::string_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolClashRosterDetails_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
