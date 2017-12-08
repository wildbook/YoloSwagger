#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t {
    std::string summonerName;
    uint64_t accountId;
    std::string platformId;
    int32_t profileIcon;
    uint64_t currentAccountId;
    std::string currentPlatformId;
    std::string matchHistoryUri;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t& v) {
    j["summonerName"] = v.summonerName;
    j["accountId"] = v.accountId;
    j["platformId"] = v.platformId;
    j["profileIcon"] = v.profileIcon;
    j["currentAccountId"] = v.currentAccountId;
    j["currentPlatformId"] = v.currentPlatformId;
    j["matchHistoryUri"] = v.matchHistoryUri;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.platformId = j.at("platformId").get<std::string>();
    v.profileIcon = j.at("profileIcon").get<int32_t>();
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>();
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>();
    v.matchHistoryUri = j.at("matchHistoryUri").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
