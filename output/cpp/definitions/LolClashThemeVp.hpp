#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashThemeVp_t {
    int32_t themeId;
    int32_t vp;
  };

  inline void to_json(nlohmann::json& j, const LolClashThemeVp_t& v) {
    j["themeId"] = v.themeId;
    j["vp"] = v.vp;
  }

  inline void from_json(const nlohmann::json& j, LolClashThemeVp_t& v) {
    v.themeId = j.at("themeId").get<int32_t>();
    v.vp = j.at("vp").get<int32_t>();
  }
  inline std::string to_string(const LolClashThemeVp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
