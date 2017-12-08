#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGeoinfoGeoInfo_t {
    std::string_t city;
    std::string_t region;
    std::string_t country;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoGeoInfo_t& v) {
    j["city"] = v.city;
    j["region"] = v.region;
    j["country"] = v.country;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoGeoInfo_t& v) {
    v.city = j.at("city").get<std::string_t>();
    v.region = j.at("region").get<std::string_t>();
    v.country = j.at("country").get<std::string_t>();
  }
  inline std::string to_string(const LolGeoinfoGeoInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
