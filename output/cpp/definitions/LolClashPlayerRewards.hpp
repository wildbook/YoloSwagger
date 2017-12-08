#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashThemeVp.hpp"
namespace leagueapi {
  struct LolClashPlayerRewards_t {
    int32_t seasonVp;
    std::vector<LolClashThemeVp_t> themeVp;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerRewards_t& v) {
    j["seasonVp"] = v.seasonVp;
    j["themeVp"] = v.themeVp;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerRewards_t& v) {
    v.seasonVp = j.at("seasonVp").get<int32_t>();
    v.themeVp = j.at("themeVp").get<std::vector<LolClashThemeVp_t>>();
  }
  inline std::string to_string(const LolClashPlayerRewards_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
