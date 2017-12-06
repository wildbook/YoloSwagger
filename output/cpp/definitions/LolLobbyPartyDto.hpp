#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyGameModeDto.hpp"
#include "LolLobbyPartyMemberDto.hpp"
#include "LolLobbyQueueRestrictionDto.hpp"
#include "LolLobbyPartyChatDto.hpp"
namespace leagueapi {
  struct LolLobbyPartyDto_t {
    LolLobbyPartyChatDto_t chat;
    std::string partyType;
    uint64_t version;
    LolLobbyQueueRestrictionDto_t activeRestrictions;
    std::vector<LolLobbyPartyMemberDto_t> players;
    LolLobbyGameModeDto_t gameMode;
    std::string platformId;
    int32_t maxPartySize;
    uint64_t activityStartedUtcMillis;
    uint64_t activityResumeUtcMillis;
    std::string partyId;
    int64_t eligibilityHash;
    bool activityLocked;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyDto_t& v) {
    j["chat"] = v.chat;
    j["partyType"] = v.partyType;
    j["version"] = v.version;
    j["activeRestrictions"] = v.activeRestrictions;
    j["players"] = v.players;
    j["gameMode"] = v.gameMode;
    j["platformId"] = v.platformId;
    j["maxPartySize"] = v.maxPartySize;
    j["activityStartedUtcMillis"] = v.activityStartedUtcMillis;
    j["activityResumeUtcMillis"] = v.activityResumeUtcMillis;
    j["partyId"] = v.partyId;
    j["eligibilityHash"] = v.eligibilityHash;
    j["activityLocked"] = v.activityLocked;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyDto_t& v) {
    v.chat = j.at("chat").get<LolLobbyPartyChatDto_t>();
    v.partyType = j.at("partyType").get<std::string>();
    v.version = j.at("version").get<uint64_t>();
    v.activeRestrictions = j.at("activeRestrictions").get<LolLobbyQueueRestrictionDto_t>();
    v.players = j.at("players").get<std::vector<LolLobbyPartyMemberDto_t>>();
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto_t>();
    v.platformId = j.at("platformId").get<std::string>();
    v.maxPartySize = j.at("maxPartySize").get<int32_t>();
    v.activityStartedUtcMillis = j.at("activityStartedUtcMillis").get<uint64_t>();
    v.activityResumeUtcMillis = j.at("activityResumeUtcMillis").get<uint64_t>();
    v.partyId = j.at("partyId").get<std::string>();
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>();
    v.activityLocked = j.at("activityLocked").get<bool>();
  }
}
