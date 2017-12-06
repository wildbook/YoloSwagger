#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t {
    uint64_t accountId;
    uint64_t currentAccountId;
    std::string currentPlatformId;
    std::string matchHistoryUri;
    std::string platformId;
    int32_t profileIcon;
    uint64_t summonerId;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t& v) {
    j["accountId"] = v.accountId;
    j["currentAccountId"] = v.currentAccountId;
    j["currentPlatformId"] = v.currentPlatformId;
    j["matchHistoryUri"] = v.matchHistoryUri;
    j["platformId"] = v.platformId;
    j["profileIcon"] = v.profileIcon;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>();
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>();
    v.matchHistoryUri = j.at("matchHistoryUri").get<std::string>();
    v.platformId = j.at("platformId").get<std::string>();
    v.profileIcon = j.at("profileIcon").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
}
