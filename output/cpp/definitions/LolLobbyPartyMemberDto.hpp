#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyGameModeDto.hpp"
#include "LolLobbyPartyMemberMetadataDto.hpp"
#include "LolLobbyPartyMemberRoleEnum.hpp"
namespace leagueapi {
  struct LolLobbyPartyMemberDto_t {
    std::optional<LolLobbyGameModeDto_t> gameMode;
    std::string platformId;
    std::optional<uint64_t> inviteTimestamp;
    std::optional<uint64_t> invitedBySummonerId;
    std::string partyId;
    LolLobbyPartyMemberMetadataDto_t metadata;
    uint64_t summonerId;
    std::string puuid;
    uint64_t accountId;
    std::optional<bool> ready;
    std::optional<bool> canInvite;
    LolLobbyPartyMemberRoleEnum_t role;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyMemberDto_t& v) {
    if(v.gameMode)
      j["gameMode"] = *v.gameMode;
    j["platformId"] = v.platformId;
    if(v.inviteTimestamp)
      j["inviteTimestamp"] = *v.inviteTimestamp;
    if(v.invitedBySummonerId)
      j["invitedBySummonerId"] = *v.invitedBySummonerId;
    j["partyId"] = v.partyId;
    j["metadata"] = v.metadata;
    j["summonerId"] = v.summonerId;
    j["puuid"] = v.puuid;
    j["accountId"] = v.accountId;
    if(v.ready)
      j["ready"] = *v.ready;
    if(v.canInvite)
      j["canInvite"] = *v.canInvite;
    j["role"] = v.role;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyMemberDto_t& v) {
    if(auto it = j.find("gameMode"); it != j.end() && !it->is_null())
      v.gameMode = it->get<LolLobbyGameModeDto_t>();
    v.platformId = j.at("platformId").get<std::string>();
    if(auto it = j.find("inviteTimestamp"); it != j.end() && !it->is_null())
      v.inviteTimestamp = it->get<uint64_t>();
    if(auto it = j.find("invitedBySummonerId"); it != j.end() && !it->is_null())
      v.invitedBySummonerId = it->get<uint64_t>();
    v.partyId = j.at("partyId").get<std::string>();
    v.metadata = j.at("metadata").get<LolLobbyPartyMemberMetadataDto_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    if(auto it = j.find("ready"); it != j.end() && !it->is_null())
      v.ready = it->get<bool>();
    if(auto it = j.find("canInvite"); it != j.end() && !it->is_null())
      v.canInvite = it->get<bool>();
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum_t>();
  }
  inline std::string to_string(const LolLobbyPartyMemberDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
