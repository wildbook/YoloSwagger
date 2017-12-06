#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashThemeVp.hpp"
namespace leagueapi {
  struct LolClashPlayerRewards_t {
    std::vector<LolClashThemeVp_t> themeVp;
    int32_t seasonVp;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerRewards_t& v) {
    j["themeVp"] = v.themeVp;
    j["seasonVp"] = v.seasonVp;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerRewards_t& v) {
    v.themeVp = j.at("themeVp").get<std::vector<LolClashThemeVp_t>>();
    v.seasonVp = j.at("seasonVp").get<int32_t>();
  }
}
