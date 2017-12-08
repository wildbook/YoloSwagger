#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStorePlayer_t {
    int64_t ip;
    uint32_t summonerLevel;
    int64_t rp;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolStorePlayer_t& v) {
    j["ip"] = v.ip;
    j["summonerLevel"] = v.summonerLevel;
    j["rp"] = v.rp;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolStorePlayer_t& v) {
    v.ip = j.at("ip").get<int64_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.rp = j.at("rp").get<int64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LolStorePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
