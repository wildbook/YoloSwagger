#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreSummoner_t {
    uint64_t sumId;
    uint64_t acctId;
  };

  inline void to_json(nlohmann::json& j, const LolStoreSummoner_t& v) {
    j["sumId"] = v.sumId;
    j["acctId"] = v.acctId;
  }

  inline void from_json(const nlohmann::json& j, LolStoreSummoner_t& v) {
    v.sumId = j.at("sumId").get<uint64_t>();
    v.acctId = j.at("acctId").get<uint64_t>();
  }
}
