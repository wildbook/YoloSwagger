#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct Summoner_t {
    uint64_t sumId;
    uint64_t acctId;
  };

  inline void to_json(nlohmann::json& j, const Summoner_t& v) {
    j["sumId"] = v.sumId;
    j["acctId"] = v.acctId;
  }

  inline void from_json(const nlohmann::json& j, Summoner_t& v) {
    v.sumId = j.at("sumId").get<uint64_t>();
    v.acctId = j.at("acctId").get<uint64_t>();
  }
}
