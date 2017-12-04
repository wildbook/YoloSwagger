#ifndef SWAGGER_TYPES_LolClashThemeVp_HPP
#define SWAGGER_TYPES_LolClashThemeVp_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolClashThemeVp {
'    // 
    int32_t themeId;
    // 
    int32_t vp;
  };

  void to_json(nlohmann::json& j, const LolClashThemeVp& v) {
    j["themeId"] = v.themeId;
    j["vp"] = v.vp;
  }

  void from_json(const nlohmann::json& j, LolClashThemeVp& v) {
    v.themeId = j.at("themeId").get<int32_t>;
    v.vp = j.at("vp").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashThemeVp_HPP
