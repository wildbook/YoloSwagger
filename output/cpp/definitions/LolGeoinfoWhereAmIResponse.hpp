#ifndef SWAGGER_TYPES_LolGeoinfoWhereAmIResponse_HPP
#define SWAGGER_TYPES_LolGeoinfoWhereAmIResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolGeoinfoWhereAmIResponse {
    // 
    std::string city;
    // 
    std::string region;
    // 
    std::string country;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoWhereAmIResponse& v) {
    j["city"] = v.city;
    j["region"] = v.region;
    j["country"] = v.country;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoWhereAmIResponse& v) {
    v.city = j.at("city").get<std::string>;
    v.region = j.at("region").get<std::string>;
    v.country = j.at("country").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolGeoinfoWhereAmIResponse_HPP
