#ifndef SWAGGER_TYPES_LolCollectionsGameDataSplashMetadata_HPP
#define SWAGGER_TYPES_LolCollectionsGameDataSplashMetadata_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsGameDataSplashMetadata {
    // 
    std::string OverrideColor;
    // 
    std::string CalculatedColor;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsGameDataSplashMetadata& v) {
    j["OverrideColor"] = v.OverrideColor;
    j["CalculatedColor"] = v.CalculatedColor;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsGameDataSplashMetadata& v) {
    v.OverrideColor = j.at("OverrideColor").get<std::string>;
    v.CalculatedColor = j.at("CalculatedColor").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsGameDataSplashMetadata_HPP
