#ifndef SWAGGER_TYPES_LolGeoinfoGeoInfoConfig_HPP
#define SWAGGER_TYPES_LolGeoinfoGeoInfoConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolGeoinfoGeoInfoConfig {
    // 
    bool Enabled;
  };

  void to_json(nlohmann::json& j, const LolGeoinfoGeoInfoConfig& v) {
    j["Enabled"] = v.Enabled;
  }

  void from_json(const nlohmann::json& j, LolGeoinfoGeoInfoConfig& v) {
    v.Enabled = j.at("Enabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolGeoinfoGeoInfoConfig_HPP
