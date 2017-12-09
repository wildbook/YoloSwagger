#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyChatDto.hpp"
#include "LolLobbyQueueRestrictionDto.hpp"
#include "LolLobbyGameModeDto.hpp"
#include "LolLobbyPartyMemberDto.hpp"
namespace leagueapi {
  struct LolLobbyPartyDto_t {
    int32_t maxPartySize;
    int64_t eligibilityHash;
    LolLobbyGameModeDto_t gameMode;
    uint64_t activityStartedUtcMillis;
    LolLobbyQueueRestrictionDto_t activeRestrictions;
    uint64_t version;
    std::string platformId;
    std::string partyId;
    uint64_t activityResumeUtcMillis;
    bool activityLocked;
    LolLobbyPartyChatDto_t chat;
    std::string partyType;
    std::vector<LolLobbyPartyMemberDto_t> players;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyDto_t& v) {
    j["maxPartySize"] = v.maxPartySize;
    j["eligibilityHash"] = v.eligibilityHash;
    j["gameMode"] = v.gameMode;
    j["activityStartedUtcMillis"] = v.activityStartedUtcMillis;
    j["activeRestrictions"] = v.activeRestrictions;
    j["version"] = v.version;
    j["platformId"] = v.platformId;
    j["partyId"] = v.partyId;
    j["activityResumeUtcMillis"] = v.activityResumeUtcMillis;
    j["activityLocked"] = v.activityLocked;
    j["chat"] = v.chat;
    j["partyType"] = v.partyType;
    j["players"] = v.players;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyDto_t& v) {
    v.maxPartySize = j.at("maxPartySize").get<int32_t>();
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>();
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto_t>();
    v.activityStartedUtcMillis = j.at("activityStartedUtcMillis").get<uint64_t>();
    v.activeRestrictions = j.at("activeRestrictions").get<LolLobbyQueueRestrictionDto_t>();
    v.version = j.at("version").get<uint64_t>();
    v.platformId = j.at("platformId").get<std::string>();
    v.partyId = j.at("partyId").get<std::string>();
    v.activityResumeUtcMillis = j.at("activityResumeUtcMillis").get<uint64_t>();
    v.activityLocked = j.at("activityLocked").get<bool>();
    v.chat = j.at("chat").get<LolLobbyPartyChatDto_t>();
    v.partyType = j.at("partyType").get<std::string>();
    v.players = j.at("players").get<std::vector<LolLobbyPartyMemberDto_t>>();
  }
  inline std::string to_string(const LolLobbyPartyDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
