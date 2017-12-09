#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStorePlayer_t {
    uint32_t summonerLevel;
    uint64_t accountId;
    int64_t ip;
    int64_t rp;
  };

  inline void to_json(nlohmann::json& j, const LolStorePlayer_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["accountId"] = v.accountId;
    j["ip"] = v.ip;
    j["rp"] = v.rp;
  }

  inline void from_json(const nlohmann::json& j, LolStorePlayer_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.ip = j.at("ip").get<int64_t>();
    v.rp = j.at("rp").get<int64_t>();
  }
  inline std::string to_string(const LolStorePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
