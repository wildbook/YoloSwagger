#ifndef SWAGGER_TYPES_LolLobbyPlayerDto_HPP
#define SWAGGER_TYPES_LolLobbyPlayerDto_HPP
#include <json.hpp>
#include "LolLobbyPartyDto.hpp"
#include "LolLobbyPartyMemberDto.hpp"
namespace leagueapi {
  // 
  struct LolLobbyPlayerDto {
    // 
    std::string accountToken;
    // 
    std::string inventoryToken;
    // 
    std::string leaguesToken;
    // 
    std::string platformId;
    // 
    LolLobbyPartyDto currentParty;
    // 
    std::string summonerToken;
    // 
    uint64_t version;
    // 
    std::string puuid;
    // 
    std::vector<LolLobbyPartyMemberDto> parties;
    // 
    int64_t eligibilityHash;
    // 
    uint64_t summonerId;
    // 
    uint64_t createdAt;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPlayerDto& v) {
    j["accountToken"] = v.accountToken;
    j["inventoryToken"] = v.inventoryToken;
    j["leaguesToken"] = v.leaguesToken;
    j["platformId"] = v.platformId;
    j["currentParty"] = v.currentParty;
    j["summonerToken"] = v.summonerToken;
    j["version"] = v.version;
    j["puuid"] = v.puuid;
    j["parties"] = v.parties;
    j["eligibilityHash"] = v.eligibilityHash;
    j["summonerId"] = v.summonerId;
    j["createdAt"] = v.createdAt;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPlayerDto& v) {
    v.accountToken = j.at("accountToken").get<std::string>;
    v.inventoryToken = j.at("inventoryToken").get<std::string>;
    v.leaguesToken = j.at("leaguesToken").get<std::string>;
    v.platformId = j.at("platformId").get<std::string>;
    v.currentParty = j.at("currentParty").get<LolLobbyPartyDto>;
    v.summonerToken = j.at("summonerToken").get<std::string>;
    v.version = j.at("version").get<uint64_t>;
    v.puuid = j.at("puuid").get<std::string>;
    v.parties = j.at("parties").get<std::vector<LolLobbyPartyMemberDto>>;
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.createdAt = j.at("createdAt").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPlayerDto_HPP
