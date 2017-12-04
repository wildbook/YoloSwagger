#ifndef SWAGGER_TYPES_LolCollectionsGameDataSplashMetadata_HPP
#define SWAGGER_TYPES_LolCollectionsGameDataSplashMetadata_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsGameDataSplashMetadata {
    // 
    std::string CalculatedColor;
    // 
    std::string OverrideColor;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsGameDataSplashMetadata& v) {
    j["CalculatedColor"] = v.CalculatedColor;
    j["OverrideColor"] = v.OverrideColor;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsGameDataSplashMetadata& v) {
    v.CalculatedColor = j.at("CalculatedColor").get<std::string>;
    v.OverrideColor = j.at("OverrideColor").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsGameDataSplashMetadata_HPP
