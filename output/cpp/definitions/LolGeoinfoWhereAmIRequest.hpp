#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGeoinfoWhereAmIRequest_t {
    std::string_t ipAddress;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoWhereAmIRequest_t& v) {
    j["ipAddress"] = v.ipAddress;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoWhereAmIRequest_t& v) {
    v.ipAddress = j.at("ipAddress").get<std::string_t>();
  }
  inline std::string to_string(const LolGeoinfoWhereAmIRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
