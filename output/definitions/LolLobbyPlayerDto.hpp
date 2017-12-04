#ifndef SWAGGER_TYPES_LolLobbyPlayerDto_HPP
#define SWAGGER_TYPES_LolLobbyPlayerDto_HPP
#include <json.hpp>
#include "LolLobbyPartyDto.hpp"
#include "LolLobbyPartyMemberDto.hpp"
namespace leagueapi {
  // 
  struct LolLobbyPlayerDto {
    // 
    uint64_t accountId;
    // 
    std::string accountToken;
    // 
    uint64_t createdAt;
    // 
    LolLobbyPartyDto currentParty;
    // 
    int64_t eligibilityHash;
    // 
    std::string inventoryToken;
    // 
    std::string leaguesToken;
    // 
    std::vector<LolLobbyPartyMemberDto> parties;
    // 
    std::string platformId;
    // 
    std::string puuid;
    // 
    uint64_t summonerId;
    // 
    std::string summonerToken;
    // 
    uint64_t version;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPlayerDto& v) {
    j["accountId"] = v.accountId;
    j["accountToken"] = v.accountToken;
    j["createdAt"] = v.createdAt;
    j["currentParty"] = v.currentParty;
    j["eligibilityHash"] = v.eligibilityHash;
    j["inventoryToken"] = v.inventoryToken;
    j["leaguesToken"] = v.leaguesToken;
    j["parties"] = v.parties;
    j["platformId"] = v.platformId;
    j["puuid"] = v.puuid;
    j["summonerId"] = v.summonerId;
    j["summonerToken"] = v.summonerToken;
    j["version"] = v.version;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPlayerDto& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.accountToken = j.at("accountToken").get<std::string>;
    v.createdAt = j.at("createdAt").get<uint64_t>;
    v.currentParty = j.at("currentParty").get<LolLobbyPartyDto>;
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>;
    v.inventoryToken = j.at("inventoryToken").get<std::string>;
    v.leaguesToken = j.at("leaguesToken").get<std::string>;
    v.parties = j.at("parties").get<std::vector<LolLobbyPartyMemberDto>>;
    v.platformId = j.at("platformId").get<std::string>;
    v.puuid = j.at("puuid").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerToken = j.at("summonerToken").get<std::string>;
    v.version = j.at("version").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPlayerDto_HPP
