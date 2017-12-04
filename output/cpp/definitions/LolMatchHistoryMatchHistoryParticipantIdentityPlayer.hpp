#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipantIdentityPlayer_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipantIdentityPlayer_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryParticipantIdentityPlayer {
    // 
    std::string currentPlatformId;
    // 
    std::string summonerName;
    // 
    std::string matchHistoryUri;
    // 
    std::string platformId;
    // 
    uint64_t currentAccountId;
    // 
    int32_t profileIcon;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipantIdentityPlayer& v) {
    j["currentPlatformId"] = v.currentPlatformId;
    j["summonerName"] = v.summonerName;
    j["matchHistoryUri"] = v.matchHistoryUri;
    j["platformId"] = v.platformId;
    j["currentAccountId"] = v.currentAccountId;
    j["profileIcon"] = v.profileIcon;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipantIdentityPlayer& v) {
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.matchHistoryUri = j.at("matchHistoryUri").get<std::string>;
    v.platformId = j.at("platformId").get<std::string>;
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>;
    v.profileIcon = j.at("profileIcon").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipantIdentityPlayer_HPP
