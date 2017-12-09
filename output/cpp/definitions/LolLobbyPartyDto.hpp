#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueRestrictionDto.hpp"
#include "LolLobbyGameModeDto.hpp"
#include "LolLobbyPartyMemberDto.hpp"
#include "LolLobbyPartyChatDto.hpp"
namespace leagueapi {
  struct LolLobbyPartyDto_t {
    std::string platformId;
    uint64_t version;
    std::string partyType;
    std::vector<LolLobbyPartyMemberDto_t> players;
    LolLobbyQueueRestrictionDto_t activeRestrictions;
    uint64_t activityResumeUtcMillis;
    LolLobbyGameModeDto_t gameMode;
    int32_t maxPartySize;
    std::string partyId;
    int64_t eligibilityHash;
    uint64_t activityStartedUtcMillis;
    LolLobbyPartyChatDto_t chat;
    bool activityLocked;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyDto_t& v) {
    j["platformId"] = v.platformId;
    j["version"] = v.version;
    j["partyType"] = v.partyType;
    j["players"] = v.players;
    j["activeRestrictions"] = v.activeRestrictions;
    j["activityResumeUtcMillis"] = v.activityResumeUtcMillis;
    j["gameMode"] = v.gameMode;
    j["maxPartySize"] = v.maxPartySize;
    j["partyId"] = v.partyId;
    j["eligibilityHash"] = v.eligibilityHash;
    j["activityStartedUtcMillis"] = v.activityStartedUtcMillis;
    j["chat"] = v.chat;
    j["activityLocked"] = v.activityLocked;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyDto_t& v) {
    v.platformId = j.at("platformId").get<std::string>();
    v.version = j.at("version").get<uint64_t>();
    v.partyType = j.at("partyType").get<std::string>();
    v.players = j.at("players").get<std::vector<LolLobbyPartyMemberDto_t>>();
    v.activeRestrictions = j.at("activeRestrictions").get<LolLobbyQueueRestrictionDto_t>();
    v.activityResumeUtcMillis = j.at("activityResumeUtcMillis").get<uint64_t>();
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto_t>();
    v.maxPartySize = j.at("maxPartySize").get<int32_t>();
    v.partyId = j.at("partyId").get<std::string>();
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>();
    v.activityStartedUtcMillis = j.at("activityStartedUtcMillis").get<uint64_t>();
    v.chat = j.at("chat").get<LolLobbyPartyChatDto_t>();
    v.activityLocked = j.at("activityLocked").get<bool>();
  }
  inline std::string to_string(const LolLobbyPartyDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
