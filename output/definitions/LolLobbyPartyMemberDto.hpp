#ifndef SWAGGER_TYPES_LolLobbyPartyMemberDto_HPP
#define SWAGGER_TYPES_LolLobbyPartyMemberDto_HPP
#include <json.hpp>
#include "LolLobbyPartyMemberMetadataDto.hpp"
#include "LolLobbyPartyMemberRoleEnum.hpp"
#include "LolLobbyGameModeDto.hpp"
namespace leagueapi {
  // 
  struct LolLobbyPartyMemberDto {
    // 
    uint64_t accountId;
    // 
    bool canInvite;
    // 
    LolLobbyGameModeDto gameMode;
    // 
    uint64_t inviteTimestamp;
    // 
    uint64_t invitedBySummonerId;
    // 
    LolLobbyPartyMemberMetadataDto metadata;
    // 
    std::string partyId;
    // 
    std::string platformId;
    // 
    std::string puuid;
    // 
    bool ready;
    // 
    LolLobbyPartyMemberRoleEnum role;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyMemberDto& v) {
    j["accountId"] = v.accountId;
    j["canInvite"] = v.canInvite;
    j["gameMode"] = v.gameMode;
    j["inviteTimestamp"] = v.inviteTimestamp;
    j["invitedBySummonerId"] = v.invitedBySummonerId;
    j["metadata"] = v.metadata;
    j["partyId"] = v.partyId;
    j["platformId"] = v.platformId;
    j["puuid"] = v.puuid;
    j["ready"] = v.ready;
    j["role"] = v.role;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyMemberDto& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.canInvite = j.at("canInvite").get<bool>;
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto>;
    v.inviteTimestamp = j.at("inviteTimestamp").get<uint64_t>;
    v.invitedBySummonerId = j.at("invitedBySummonerId").get<uint64_t>;
    v.metadata = j.at("metadata").get<LolLobbyPartyMemberMetadataDto>;
    v.partyId = j.at("partyId").get<std::string>;
    v.platformId = j.at("platformId").get<std::string>;
    v.puuid = j.at("puuid").get<std::string>;
    v.ready = j.at("ready").get<bool>;
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPartyMemberDto_HPP
