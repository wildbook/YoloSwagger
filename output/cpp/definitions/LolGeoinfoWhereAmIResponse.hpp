#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGeoinfoWhereAmIResponse_t {
    std::string country;
    std::string city;
    std::string region;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoWhereAmIResponse_t& v) {
    j["country"] = v.country;
    j["city"] = v.city;
    j["region"] = v.region;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoWhereAmIResponse_t& v) {
    v.country = j.at("country").get<std::string>();
    v.city = j.at("city").get<std::string>();
    v.region = j.at("region").get<std::string>();
  }
  inline std::string to_string(const LolGeoinfoWhereAmIResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
