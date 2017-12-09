#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t {
    uint64_t accountId;
    uint64_t summonerId;
    std::string currentPlatformId;
    std::string platformId;
    std::string summonerName;
    uint64_t currentAccountId;
    std::string matchHistoryUri;
    int32_t profileIcon;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["currentPlatformId"] = v.currentPlatformId;
    j["platformId"] = v.platformId;
    j["summonerName"] = v.summonerName;
    j["currentAccountId"] = v.currentAccountId;
    j["matchHistoryUri"] = v.matchHistoryUri;
    j["profileIcon"] = v.profileIcon;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>();
    v.platformId = j.at("platformId").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>();
    v.matchHistoryUri = j.at("matchHistoryUri").get<std::string>();
    v.profileIcon = j.at("profileIcon").get<int32_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
