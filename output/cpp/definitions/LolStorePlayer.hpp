#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStorePlayer_t {
    uint64_t accountId;
    int64_t ip;
    int64_t rp;
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolStorePlayer_t& v) {
    j["accountId"] = v.accountId;
    j["ip"] = v.ip;
    j["rp"] = v.rp;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolStorePlayer_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.ip = j.at("ip").get<int64_t>();
    v.rp = j.at("rp").get<int64_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
  }
}
