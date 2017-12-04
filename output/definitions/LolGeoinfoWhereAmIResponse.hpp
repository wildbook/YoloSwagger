#ifndef SWAGGER_TYPES_LolGeoinfoWhereAmIResponse_HPP
#define SWAGGER_TYPES_LolGeoinfoWhereAmIResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolGeoinfoWhereAmIResponse {
    // 
    std::string city;
    // 
    std::string country;
    // 
    std::string region;
  };

  void to_json(nlohmann::json& j, const LolGeoinfoWhereAmIResponse& v) {
    j["city"] = v.city;
    j["country"] = v.country;
    j["region"] = v.region;
  }

  void from_json(const nlohmann::json& j, LolGeoinfoWhereAmIResponse& v) {
    v.city = j.at("city").get<std::string>;
    v.country = j.at("country").get<std::string>;
    v.region = j.at("region").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolGeoinfoWhereAmIResponse_HPP
