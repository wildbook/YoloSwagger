#ifndef SWAGGER_TYPES_LolStorePlayer_HPP
#define SWAGGER_TYPES_LolStorePlayer_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolStorePlayer {
    // 
    int64_t ip;
    // 
    uint32_t summonerLevel;
    // 
    int64_t rp;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolStorePlayer& v) {
    j["ip"] = v.ip;
    j["summonerLevel"] = v.summonerLevel;
    j["rp"] = v.rp;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolStorePlayer& v) {
    v.ip = j.at("ip").get<int64_t>;
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
    v.rp = j.at("rp").get<int64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolStorePlayer_HPP
