#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGeoinfoGeoInfo_t {
    std::string city;
    std::string region;
    std::string country;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoGeoInfo_t& v) {
    j["city"] = v.city;
    j["region"] = v.region;
    j["country"] = v.country;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoGeoInfo_t& v) {
    v.city = j.at("city").get<std::string>();
    v.region = j.at("region").get<std::string>();
    v.country = j.at("country").get<std::string>();
  }
  inline std::string to_string(const LolGeoinfoGeoInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
