#ifndef SWAGGER_TYPES_LolGeoinfoGeoInfo_HPP
#define SWAGGER_TYPES_LolGeoinfoGeoInfo_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolGeoinfoGeoInfo {
    // 
    std::string city;
    // 
    std::string region;
    // 
    std::string country;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoGeoInfo& v) {
    j["city"] = v.city;
    j["region"] = v.region;
    j["country"] = v.country;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoGeoInfo& v) {
    v.city = j.at("city").get<std::string>;
    v.region = j.at("region").get<std::string>;
    v.country = j.at("country").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolGeoinfoGeoInfo_HPP
