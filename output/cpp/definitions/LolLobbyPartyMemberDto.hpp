#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyGameModeDto.hpp"
#include "LolLobbyPartyMemberMetadataDto.hpp"
#include "LolLobbyPartyMemberRoleEnum.hpp"
namespace leagueapi {
  struct LolLobbyPartyMemberDto_t {
    LolLobbyPartyMemberMetadataDto_t metadata;
    LolLobbyPartyMemberRoleEnum_t role;
    std::optional<bool> canInvite;
    std::string puuid;
    uint64_t accountId;
    std::optional<LolLobbyGameModeDto_t> gameMode;
    std::optional<bool> ready;
    std::string platformId;
    std::optional<uint64_t> inviteTimestamp;
    std::string partyId;
    std::optional<uint64_t> invitedBySummonerId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyMemberDto_t& v) {
    j["metadata"] = v.metadata;
    j["role"] = v.role;
    if(v.canInvite)
      j["canInvite"] = *v.canInvite;
    j["puuid"] = v.puuid;
    j["accountId"] = v.accountId;
    if(v.gameMode)
      j["gameMode"] = *v.gameMode;
    if(v.ready)
      j["ready"] = *v.ready;
    j["platformId"] = v.platformId;
    if(v.inviteTimestamp)
      j["inviteTimestamp"] = *v.inviteTimestamp;
    j["partyId"] = v.partyId;
    if(v.invitedBySummonerId)
      j["invitedBySummonerId"] = *v.invitedBySummonerId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyMemberDto_t& v) {
    v.metadata = j.at("metadata").get<LolLobbyPartyMemberMetadataDto_t>();
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum_t>();
    if(auto it = j.find("canInvite"); it != j.end() !it->is_null())
      v.canInvite = it->get<bool>();
    v.puuid = j.at("puuid").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    if(auto it = j.find("gameMode"); it != j.end() !it->is_null())
      v.gameMode = it->get<LolLobbyGameModeDto_t>();
    if(auto it = j.find("ready"); it != j.end() !it->is_null())
      v.ready = it->get<bool>();
    v.platformId = j.at("platformId").get<std::string>();
    if(auto it = j.find("inviteTimestamp"); it != j.end() !it->is_null())
      v.inviteTimestamp = it->get<uint64_t>();
    v.partyId = j.at("partyId").get<std::string>();
    if(auto it = j.find("invitedBySummonerId"); it != j.end() !it->is_null())
      v.invitedBySummonerId = it->get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
