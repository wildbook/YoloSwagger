#ifndef SWAGGER_TYPES_ThemeVp_HPP
#define SWAGGER_TYPES_ThemeVp_HPP
#include <json.hpp>
namespace test {
  // 
  struct ThemeVp {
'    // 
    int32_t themeId;
    // 
    int32_t themeVp;
  };

  void to_json(nlohmann::json& j, const ThemeVp& v) {
    j["themeId"] = v.themeId;
    j["themeVp"] = v.themeVp;
  }

  void from_json(const nlohmann::json& j, ThemeVp& v) {
    v.themeId = j.at("themeId").get<int32_t>;
    v.themeVp = j.at("themeVp").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_ThemeVp_HPP
