#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashThemeVp_t {
    int32_t vp;
    int32_t themeId;
  };

  inline void to_json(nlohmann::json& j, const LolClashThemeVp_t& v) {
    j["vp"] = v.vp;
    j["themeId"] = v.themeId;
  }

  inline void from_json(const nlohmann::json& j, LolClashThemeVp_t& v) {
    v.vp = j.at("vp").get<int32_t>();
    v.themeId = j.at("themeId").get<int32_t>();
  }
  inline std::string to_string(const LolClashThemeVp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
