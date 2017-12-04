#ifndef SWAGGER_TYPES_LolLobbyPartyMemberDto_HPP
#define SWAGGER_TYPES_LolLobbyPartyMemberDto_HPP
#include <json.hpp>
#include "LolLobbyPartyMemberRoleEnum.hpp"
#include "LolLobbyGameModeDto.hpp"
#include "LolLobbyPartyMemberMetadataDto.hpp"
namespace leagueapi {
  // 
  struct LolLobbyPartyMemberDto {
    // 
    uint64_t inviteTimestamp;
    // 
    uint64_t invitedBySummonerId;
    // 
    std::string platformId;
    // 
    LolLobbyPartyMemberRoleEnum role;
    // 
    LolLobbyGameModeDto gameMode;
    // 
    bool ready;
    // 
    std::string partyId;
    // 
    bool canInvite;
    // 
    std::string puuid;
    // 
    uint64_t accountId;
    // 
    uint64_t summonerId;
    // 
    LolLobbyPartyMemberMetadataDto metadata;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyMemberDto& v) {
    j["inviteTimestamp"] = v.inviteTimestamp;
    j["invitedBySummonerId"] = v.invitedBySummonerId;
    j["platformId"] = v.platformId;
    j["role"] = v.role;
    j["gameMode"] = v.gameMode;
    j["ready"] = v.ready;
    j["partyId"] = v.partyId;
    j["canInvite"] = v.canInvite;
    j["puuid"] = v.puuid;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["metadata"] = v.metadata;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyMemberDto& v) {
    v.inviteTimestamp = j.at("inviteTimestamp").get<uint64_t>;
    v.invitedBySummonerId = j.at("invitedBySummonerId").get<uint64_t>;
    v.platformId = j.at("platformId").get<std::string>;
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum>;
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto>;
    v.ready = j.at("ready").get<bool>;
    v.partyId = j.at("partyId").get<std::string>;
    v.canInvite = j.at("canInvite").get<bool>;
    v.puuid = j.at("puuid").get<std::string>;
    v.accountId = j.at("accountId").get<uint64_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.metadata = j.at("metadata").get<LolLobbyPartyMemberMetadataDto>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPartyMemberDto_HPP
