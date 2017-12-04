#ifndef SWAGGER_TYPES_LolLobbyPartyDto_HPP
#define SWAGGER_TYPES_LolLobbyPartyDto_HPP
#include <json.hpp>
#include "LolLobbyQueueRestrictionDto.hpp"
#include "LolLobbyGameModeDto.hpp"
#include "LolLobbyPartyChatDto.hpp"
#include "LolLobbyPartyMemberDto.hpp"
namespace leagueapi {
  // 
  struct LolLobbyPartyDto {
    // 
    int32_t maxPartySize;
    // 
    bool activityLocked;
    // 
    std::string platformId;
    // 
    LolLobbyGameModeDto gameMode;
    // 
    uint64_t activityResumeUtcMillis;
    // 
    uint64_t activityStartedUtcMillis;
    // 
    LolLobbyQueueRestrictionDto activeRestrictions;
    // 
    std::vector<LolLobbyPartyMemberDto> players;
    // 
    uint64_t version;
    // 
    std::string partyId;
    // 
    LolLobbyPartyChatDto chat;
    // 
    int64_t eligibilityHash;
    // 
    std::string partyType;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyDto& v) {
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

  inline void from_json(const nlohmann::json& j, LolLobbyPartyDto& v) {
    v.maxPartySize = j.at("maxPartySize").get<int32_t>;
    v.activityLocked = j.at("activityLocked").get<bool>;
    v.platformId = j.at("platformId").get<std::string>;
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto>;
    v.activityResumeUtcMillis = j.at("activityResumeUtcMillis").get<uint64_t>;
    v.activityStartedUtcMillis = j.at("activityStartedUtcMillis").get<uint64_t>;
    v.activeRestrictions = j.at("activeRestrictions").get<LolLobbyQueueRestrictionDto>;
    v.players = j.at("players").get<std::vector<LolLobbyPartyMemberDto>>;
    v.version = j.at("version").get<uint64_t>;
    v.partyId = j.at("partyId").get<std::string>;
    v.chat = j.at("chat").get<LolLobbyPartyChatDto>;
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>;
    v.partyType = j.at("partyType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPartyDto_HPP
