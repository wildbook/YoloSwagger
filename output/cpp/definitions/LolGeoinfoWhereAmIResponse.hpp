#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGeoinfoWhereAmIResponse_t {
    std::string region;
    std::string city;
    std::string country;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoWhereAmIResponse_t& v) {
    j["region"] = v.region;
    j["city"] = v.city;
    j["country"] = v.country;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoWhereAmIResponse_t& v) {
    v.region = j.at("region").get<std::string>();
    v.city = j.at("city").get<std::string>();
    v.country = j.at("country").get<std::string>();
  }
  inline std::string to_string(const LolGeoinfoWhereAmIResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
