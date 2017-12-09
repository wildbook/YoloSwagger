#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t {
    std::string matchHistoryUri;
    uint64_t accountId;
    std::string platformId;
    uint64_t currentAccountId;
    uint64_t summonerId;
    std::string summonerName;
    std::string currentPlatformId;
    int32_t profileIcon;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t& v) {
    j["matchHistoryUri"] = v.matchHistoryUri;
    j["accountId"] = v.accountId;
    j["platformId"] = v.platformId;
    j["currentAccountId"] = v.currentAccountId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["currentPlatformId"] = v.currentPlatformId;
    j["profileIcon"] = v.profileIcon;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t& v) {
    v.matchHistoryUri = j.at("matchHistoryUri").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.platformId = j.at("platformId").get<std::string>();
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>();
    v.profileIcon = j.at("profileIcon").get<int32_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
