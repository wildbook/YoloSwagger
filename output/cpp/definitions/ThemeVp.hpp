#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ThemeVp_t {
    int32_t themeId;
    int32_t themeVp;
  };

  inline void to_json(nlohmann::json& j, const ThemeVp_t& v) {
    j["themeId"] = v.themeId;
    j["themeVp"] = v.themeVp;
  }

  inline void from_json(const nlohmann::json& j, ThemeVp_t& v) {
    v.themeId = j.at("themeId").get<int32_t>();
    v.themeVp = j.at("themeVp").get<int32_t>();
  }
}
