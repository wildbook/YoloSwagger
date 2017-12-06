#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyMemberMetadataDto.hpp"
#include "LolLobbyGameModeDto.hpp"
#include "LolLobbyPartyMemberRoleEnum.hpp"
namespace leagueapi {
  struct LolLobbyPartyMemberDto_t {
    uint64_t accountId;
    std::optional<bool> canInvite;
    std::optional<LolLobbyGameModeDto_t> gameMode;
    std::optional<uint64_t> inviteTimestamp;
    std::optional<uint64_t> invitedBySummonerId;
    LolLobbyPartyMemberMetadataDto_t metadata;
    std::string partyId;
    std::string platformId;
    std::string puuid;
    std::optional<bool> ready;
    LolLobbyPartyMemberRoleEnum_t role;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyMemberDto_t& v) {
    j["accountId"] = v.accountId;
    if(v.canInvite)
      j["canInvite"] = *v.canInvite;
    if(v.gameMode)
      j["gameMode"] = *v.gameMode;
    if(v.inviteTimestamp)
      j["inviteTimestamp"] = *v.inviteTimestamp;
    if(v.invitedBySummonerId)
      j["invitedBySummonerId"] = *v.invitedBySummonerId;
    j["metadata"] = v.metadata;
    j["partyId"] = v.partyId;
    j["platformId"] = v.platformId;
    j["puuid"] = v.puuid;
    if(v.ready)
      j["ready"] = *v.ready;
    j["role"] = v.role;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyMemberDto_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    if(auto it = j.find("canInvite"); it != j.end() !it->is_null())
      v.canInvite = it->get<bool>();
    if(auto it = j.find("gameMode"); it != j.end() !it->is_null())
      v.gameMode = it->get<LolLobbyGameModeDto_t>();
    if(auto it = j.find("inviteTimestamp"); it != j.end() !it->is_null())
      v.inviteTimestamp = it->get<uint64_t>();
    if(auto it = j.find("invitedBySummonerId"); it != j.end() !it->is_null())
      v.invitedBySummonerId = it->get<uint64_t>();
    v.metadata = j.at("metadata").get<LolLobbyPartyMemberMetadataDto_t>();
    v.partyId = j.at("partyId").get<std::string>();
    v.platformId = j.at("platformId").get<std::string>();
    v.puuid = j.at("puuid").get<std::string>();
    if(auto it = j.find("ready"); it != j.end() !it->is_null())
      v.ready = it->get<bool>();
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
