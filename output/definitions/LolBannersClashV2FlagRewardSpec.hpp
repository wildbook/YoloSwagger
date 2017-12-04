#ifndef SWAGGER_TYPES_LolBannersClashV2FlagRewardSpec_HPP
#define SWAGGER_TYPES_LolBannersClashV2FlagRewardSpec_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolBannersClashV2FlagRewardSpec {
    // 
    std::string level;
    // 
    std::string seasonId;
    // 
    std::string theme;
  };

  inline void to_json(nlohmann::json& j, const LolBannersClashV2FlagRewardSpec& v) {
    j["level"] = v.level;
    j["seasonId"] = v.seasonId;
    j["theme"] = v.theme;
  }

  inline void from_json(const nlohmann::json& j, LolBannersClashV2FlagRewardSpec& v) {
    v.level = j.at("level").get<std::string>;
    v.seasonId = j.at("seasonId").get<std::string>;
    v.theme = j.at("theme").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolBannersClashV2FlagRewardSpec_HPP
