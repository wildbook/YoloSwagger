#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyMemberDto.hpp"
#include "LolLobbyGameModeDto.hpp"
#include "LolLobbyQueueRestrictionDto.hpp"
#include "LolLobbyPartyChatDto.hpp"
namespace leagueapi {
  struct LolLobbyPartyDto_t {
    LolLobbyPartyChatDto_t chat;
    int64_t eligibilityHash;
    uint64_t activityResumeUtcMillis;
    std::string platformId;
    uint64_t activityStartedUtcMillis;
    std::string partyId;
    std::vector<LolLobbyPartyMemberDto_t> players;
    LolLobbyQueueRestrictionDto_t activeRestrictions;
    uint64_t version;
    int32_t maxPartySize;
    std::string partyType;
    bool activityLocked;
    LolLobbyGameModeDto_t gameMode;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyDto_t& v) {
    j["chat"] = v.chat;
    j["eligibilityHash"] = v.eligibilityHash;
    j["activityResumeUtcMillis"] = v.activityResumeUtcMillis;
    j["platformId"] = v.platformId;
    j["activityStartedUtcMillis"] = v.activityStartedUtcMillis;
    j["partyId"] = v.partyId;
    j["players"] = v.players;
    j["activeRestrictions"] = v.activeRestrictions;
    j["version"] = v.version;
    j["maxPartySize"] = v.maxPartySize;
    j["partyType"] = v.partyType;
    j["activityLocked"] = v.activityLocked;
    j["gameMode"] = v.gameMode;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyDto_t& v) {
    v.chat = j.at("chat").get<LolLobbyPartyChatDto_t>();
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>();
    v.activityResumeUtcMillis = j.at("activityResumeUtcMillis").get<uint64_t>();
    v.platformId = j.at("platformId").get<std::string>();
    v.activityStartedUtcMillis = j.at("activityStartedUtcMillis").get<uint64_t>();
    v.partyId = j.at("partyId").get<std::string>();
    v.players = j.at("players").get<std::vector<LolLobbyPartyMemberDto_t>>();
    v.activeRestrictions = j.at("activeRestrictions").get<LolLobbyQueueRestrictionDto_t>();
    v.version = j.at("version").get<uint64_t>();
    v.maxPartySize = j.at("maxPartySize").get<int32_t>();
    v.partyType = j.at("partyType").get<std::string>();
    v.activityLocked = j.at("activityLocked").get<bool>();
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto_t>();
  }
  inline std::string to_string(const LolLobbyPartyDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
