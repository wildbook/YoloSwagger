#ifndef SWAGGER_TYPES_LolStorePlayer_HPP
#define SWAGGER_TYPES_LolStorePlayer_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolStorePlayer {
    // 
    uint64_t accountId;
    // 
    int64_t ip;
    // 
    int64_t rp;
    // 
    uint32_t summonerLevel;
  };

  void to_json(nlohmann::json& j, const LolStorePlayer& v) {
    j["accountId"] = v.accountId;
    j["ip"] = v.ip;
    j["rp"] = v.rp;
    j["summonerLevel"] = v.summonerLevel;
  }

  void from_json(const nlohmann::json& j, LolStorePlayer& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.ip = j.at("ip").get<int64_t>;
    v.rp = j.at("rp").get<int64_t>;
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolStorePlayer_HPP
