#ifndef SWAGGER_TYPES_LolBannersBannerFlag_HPP
#define SWAGGER_TYPES_LolBannersBannerFlag_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolBannersBannerFlag {
    // 
    std::string theme;
    // 
    std::string level;
  };

  inline void to_json(nlohmann::json& j, const LolBannersBannerFlag& v) {
    j["theme"] = v.theme;
    j["level"] = v.level;
  }

  inline void from_json(const nlohmann::json& j, LolBannersBannerFlag& v) {
    v.theme = j.at("theme").get<std::string>;
    v.level = j.at("level").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolBannersBannerFlag_HPP
