#ifndef SWAGGER_TYPES_LolClashPlayerRewards_HPP
#define SWAGGER_TYPES_LolClashPlayerRewards_HPP
#include <json.hpp>
#include "LolClashThemeVp.hpp"
namespace leagueapi {
  // 
  struct LolClashPlayerRewards {
    // 
    int32_t seasonVp;
    // 
    std::vector<LolClashThemeVp> themeVp;
  };

  void to_json(nlohmann::json& j, const LolClashPlayerRewards& v) {
    j["seasonVp"] = v.seasonVp;
    j["themeVp"] = v.themeVp;
  }

  void from_json(const nlohmann::json& j, LolClashPlayerRewards& v) {
    v.seasonVp = j.at("seasonVp").get<int32_t>;
    v.themeVp = j.at("themeVp").get<std::vector<LolClashThemeVp>>;
  }

}
#endif // SWAGGER_TYPES_LolClashPlayerRewards_HPP
