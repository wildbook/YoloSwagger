#ifndef SWAGGER_TYPES_ThemeVp_HPP
#define SWAGGER_TYPES_ThemeVp_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ThemeVp {
    // 
    int32_t themeVp;
    // 
    int32_t themeId;
  };

  inline void to_json(nlohmann::json& j, const ThemeVp& v) {
    j["themeVp"] = v.themeVp;
    j["themeId"] = v.themeId;
  }

  inline void from_json(const nlohmann::json& j, ThemeVp& v) {
    v.themeVp = j.at("themeVp").get<int32_t>;
    v.themeId = j.at("themeId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_ThemeVp_HPP
