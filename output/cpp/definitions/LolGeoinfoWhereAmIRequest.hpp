#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGeoinfoWhereAmIRequest_t {
    std::string ipAddress;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoWhereAmIRequest_t& v) {
    j["ipAddress"] = v.ipAddress;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoWhereAmIRequest_t& v) {
    v.ipAddress = j.at("ipAddress").get<std::string>();
  }
}
