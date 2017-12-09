#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyChatDto.hpp"
#include "LolLobbyPartyMemberDto.hpp"
#include "LolLobbyQueueRestrictionDto.hpp"
#include "LolLobbyGameModeDto.hpp"
namespace leagueapi {
  struct LolLobbyPartyDto_t {
    int64_t eligibilityHash;
    uint64_t version;
    LolLobbyPartyChatDto_t chat;
    LolLobbyGameModeDto_t gameMode;
    std::string platformId;
    std::vector<LolLobbyPartyMemberDto_t> players;
    uint64_t activityStartedUtcMillis;
    std::string partyId;
    std::string partyType;
    uint64_t activityResumeUtcMillis;
    LolLobbyQueueRestrictionDto_t activeRestrictions;
    bool activityLocked;
    int32_t maxPartySize;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyDto_t& v) {
    j["eligibilityHash"] = v.eligibilityHash;
    j["version"] = v.version;
    j["chat"] = v.chat;
    j["gameMode"] = v.gameMode;
    j["platformId"] = v.platformId;
    j["players"] = v.players;
    j["activityStartedUtcMillis"] = v.activityStartedUtcMillis;
    j["partyId"] = v.partyId;
    j["partyType"] = v.partyType;
    j["activityResumeUtcMillis"] = v.activityResumeUtcMillis;
    j["activeRestrictions"] = v.activeRestrictions;
    j["activityLocked"] = v.activityLocked;
    j["maxPartySize"] = v.maxPartySize;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyDto_t& v) {
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>();
    v.version = j.at("version").get<uint64_t>();
    v.chat = j.at("chat").get<LolLobbyPartyChatDto_t>();
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto_t>();
    v.platformId = j.at("platformId").get<std::string>();
    v.players = j.at("players").get<std::vector<LolLobbyPartyMemberDto_t>>();
    v.activityStartedUtcMillis = j.at("activityStartedUtcMillis").get<uint64_t>();
    v.partyId = j.at("partyId").get<std::string>();
    v.partyType = j.at("partyType").get<std::string>();
    v.activityResumeUtcMillis = j.at("activityResumeUtcMillis").get<uint64_t>();
    v.activeRestrictions = j.at("activeRestrictions").get<LolLobbyQueueRestrictionDto_t>();
    v.activityLocked = j.at("activityLocked").get<bool>();
    v.maxPartySize = j.at("maxPartySize").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyPartyDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
