#ifndef SWAGGER_TYPES_LolGameflowRegionLocale_HPP
#define SWAGGER_TYPES_LolGameflowRegionLocale_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolGameflowRegionLocale {
    // 
    std::string locale;
    // 
    std::string region;
  };

  void to_json(nlohmann::json& j, const LolGameflowRegionLocale& v) {
    j["locale"] = v.locale;
    j["region"] = v.region;
  }

  void from_json(const nlohmann::json& j, LolGameflowRegionLocale& v) {
    v.locale = j.at("locale").get<std::string>;
    v.region = j.at("region").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowRegionLocale_HPP
