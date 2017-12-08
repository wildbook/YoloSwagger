#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct Summoner_t {
    uint64_t_t acctId;
    uint64_t_t sumId;
  };

  inline void to_json(nlohmann::json& j, const Summoner_t& v) {
    j["acctId"] = v.acctId;
    j["sumId"] = v.sumId;
  }

  inline void from_json(const nlohmann::json& j, Summoner_t& v) {
    v.acctId = j.at("acctId").get<uint64_t_t>();
    v.sumId = j.at("sumId").get<uint64_t_t>();
  }
  inline std::string to_string(const Summoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
