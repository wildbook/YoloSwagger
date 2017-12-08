#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueRestrictionDto.hpp"
#include "LolLobbyGameModeDto.hpp"
#include "LolLobbyPartyChatDto.hpp"
#include "LolLobbyPartyMemberDto.hpp"
namespace leagueapi {
  struct LolLobbyPartyDto_t {
    int32_t_t maxPartySize;
    bool_t activityLocked;
    std::string_t platformId;
    LolLobbyGameModeDto_t gameMode;
    uint64_t_t activityResumeUtcMillis;
    uint64_t_t activityStartedUtcMillis;
    LolLobbyQueueRestrictionDto_t activeRestrictions;
    std::vector<LolLobbyPartyMemberDto_t> players;
    uint64_t_t version;
    std::string_t partyId;
    LolLobbyPartyChatDto_t chat;
    int64_t_t eligibilityHash;
    std::string_t partyType;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyDto_t& v) {
    j["maxPartySize"] = v.maxPartySize;
    j["activityLocked"] = v.activityLocked;
    j["platformId"] = v.platformId;
    j["gameMode"] = v.gameMode;
    j["activityResumeUtcMillis"] = v.activityResumeUtcMillis;
    j["activityStartedUtcMillis"] = v.activityStartedUtcMillis;
    j["activeRestrictions"] = v.activeRestrictions;
    j["players"] = v.players;
    j["version"] = v.version;
    j["partyId"] = v.partyId;
    j["chat"] = v.chat;
    j["eligibilityHash"] = v.eligibilityHash;
    j["partyType"] = v.partyType;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyDto_t& v) {
    v.maxPartySize = j.at("maxPartySize").get<int32_t_t>();
    v.activityLocked = j.at("activityLocked").get<bool_t>();
    v.platformId = j.at("platformId").get<std::string_t>();
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto_t>();
    v.activityResumeUtcMillis = j.at("activityResumeUtcMillis").get<uint64_t_t>();
    v.activityStartedUtcMillis = j.at("activityStartedUtcMillis").get<uint64_t_t>();
    v.activeRestrictions = j.at("activeRestrictions").get<LolLobbyQueueRestrictionDto_t>();
    v.players = j.at("players").get<std::vector<LolLobbyPartyMemberDto_t>>();
    v.version = j.at("version").get<uint64_t_t>();
    v.partyId = j.at("partyId").get<std::string_t>();
    v.chat = j.at("chat").get<LolLobbyPartyChatDto_t>();
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t_t>();
    v.partyType = j.at("partyType").get<std::string_t>();
  }
  inline std::string to_string(const LolLobbyPartyDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
