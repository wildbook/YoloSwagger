#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ThemeVp_t {
    int32_t_t themeVp;
    int32_t_t themeId;
  };

  inline void to_json(nlohmann::json& j, const ThemeVp_t& v) {
    j["themeVp"] = v.themeVp;
    j["themeId"] = v.themeId;
  }

  inline void from_json(const nlohmann::json& j, ThemeVp_t& v) {
    v.themeVp = j.at("themeVp").get<int32_t_t>();
    v.themeId = j.at("themeId").get<int32_t_t>();
  }
  inline std::string to_string(const ThemeVp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
