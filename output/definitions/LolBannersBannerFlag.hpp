#ifndef SWAGGER_TYPES_LolBannersBannerFlag_HPP
#define SWAGGER_TYPES_LolBannersBannerFlag_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolBannersBannerFlag {
    // 
    std::string level;
    // 
    std::string theme;
  };

  inline void to_json(nlohmann::json& j, const LolBannersBannerFlag& v) {
    j["level"] = v.level;
    j["theme"] = v.theme;
  }

  inline void from_json(const nlohmann::json& j, LolBannersBannerFlag& v) {
    v.level = j.at("level").get<std::string>;
    v.theme = j.at("theme").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolBannersBannerFlag_HPP
