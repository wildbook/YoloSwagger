#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGeoinfoWhereAmIResponse_t {
    std::string region;
    std::string country;
    std::string city;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoWhereAmIResponse_t& v) {
    j["region"] = v.region;
    j["country"] = v.country;
    j["city"] = v.city;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoWhereAmIResponse_t& v) {
    v.region = j.at("region").get<std::string>();
    v.country = j.at("country").get<std::string>();
    v.city = j.at("city").get<std::string>();
  }
  inline std::string to_string(const LolGeoinfoWhereAmIResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
