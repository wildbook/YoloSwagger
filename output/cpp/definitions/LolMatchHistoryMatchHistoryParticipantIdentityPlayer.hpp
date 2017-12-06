#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t {
    int32_t profileIcon;
    std::string matchHistoryUri;
    std::string currentPlatformId;
    uint64_t accountId;
    uint64_t currentAccountId;
    uint64_t summonerId;
    std::string summonerName;
    std::string platformId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t& v) {
    j["profileIcon"] = v.profileIcon;
    j["matchHistoryUri"] = v.matchHistoryUri;
    j["currentPlatformId"] = v.currentPlatformId;
    j["accountId"] = v.accountId;
    j["currentAccountId"] = v.currentAccountId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["platformId"] = v.platformId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t& v) {
    v.profileIcon = j.at("profileIcon").get<int32_t>();
    v.matchHistoryUri = j.at("matchHistoryUri").get<std::string>();
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.platformId = j.at("platformId").get<std::string>();
  }
}
