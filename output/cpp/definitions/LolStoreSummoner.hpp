#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreSummoner_t {
    uint64_t acctId;
    uint64_t sumId;
  };

  inline void to_json(nlohmann::json& j, const LolStoreSummoner_t& v) {
    j["acctId"] = v.acctId;
    j["sumId"] = v.sumId;
  }

  inline void from_json(const nlohmann::json& j, LolStoreSummoner_t& v) {
    v.acctId = j.at("acctId").get<uint64_t>();
    v.sumId = j.at("sumId").get<uint64_t>();
  }
  inline std::string to_string(const LolStoreSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
