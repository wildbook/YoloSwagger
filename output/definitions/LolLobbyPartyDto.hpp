#ifndef SWAGGER_TYPES_LolLobbyPartyDto_HPP
#define SWAGGER_TYPES_LolLobbyPartyDto_HPP
#include <json.hpp>
#include "LolLobbyQueueRestrictionDto.hpp"
#include "LolLobbyPartyChatDto.hpp"
#include "LolLobbyGameModeDto.hpp"
#include "LolLobbyPartyMemberDto.hpp"
namespace leagueapi {
  // 
  struct LolLobbyPartyDto {
    // 
    LolLobbyQueueRestrictionDto activeRestrictions;
    // 
    bool activityLocked;
    // 
    uint64_t activityResumeUtcMillis;
    // 
    uint64_t activityStartedUtcMillis;
    // 
    LolLobbyPartyChatDto chat;
    // 
    int64_t eligibilityHash;
    // 
    LolLobbyGameModeDto gameMode;
    // 
    int32_t maxPartySize;
    // 
    std::string partyId;
    // 
    std::string partyType;
    // 
    std::string platformId;
    // 
    std::vector<LolLobbyPartyMemberDto> players;
    // 
    uint64_t version;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyDto& v) {
    j["activeRestrictions"] = v.activeRestrictions;
    j["activityLocked"] = v.activityLocked;
    j["activityResumeUtcMillis"] = v.activityResumeUtcMillis;
    j["activityStartedUtcMillis"] = v.activityStartedUtcMillis;
    j["chat"] = v.chat;
    j["eligibilityHash"] = v.eligibilityHash;
    j["gameMode"] = v.gameMode;
    j["maxPartySize"] = v.maxPartySize;
    j["partyId"] = v.partyId;
    j["partyType"] = v.partyType;
    j["platformId"] = v.platformId;
    j["players"] = v.players;
    j["version"] = v.version;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyDto& v) {
    v.activeRestrictions = j.at("activeRestrictions").get<LolLobbyQueueRestrictionDto>;
    v.activityLocked = j.at("activityLocked").get<bool>;
    v.activityResumeUtcMillis = j.at("activityResumeUtcMillis").get<uint64_t>;
    v.activityStartedUtcMillis = j.at("activityStartedUtcMillis").get<uint64_t>;
    v.chat = j.at("chat").get<LolLobbyPartyChatDto>;
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>;
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto>;
    v.maxPartySize = j.at("maxPartySize").get<int32_t>;
    v.partyId = j.at("partyId").get<std::string>;
    v.partyType = j.at("partyType").get<std::string>;
    v.platformId = j.at("platformId").get<std::string>;
    v.players = j.at("players").get<std::vector<LolLobbyPartyMemberDto>>;
    v.version = j.at("version").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPartyDto_HPP
