#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyMemberMetadataDto.hpp"
#include "LolLobbyPartyMemberRoleEnum.hpp"
#include "LolLobbyGameModeDto.hpp"
namespace leagueapi {
  struct LolLobbyPartyMemberDto_t {
    uint64_t summonerId;
    std::optional<LolLobbyGameModeDto_t> gameMode;
    LolLobbyPartyMemberRoleEnum_t role;
    std::string puuid;
    std::optional<bool> ready;
    std::optional<uint64_t> inviteTimestamp;
    uint64_t accountId;
    std::string platformId;
    std::string partyId;
    std::optional<uint64_t> invitedBySummonerId;
    std::optional<bool> canInvite;
    LolLobbyPartyMemberMetadataDto_t metadata;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyMemberDto_t& v) {
    j["summonerId"] = v.summonerId;
    if(v.gameMode)
      j["gameMode"] = *v.gameMode;
    j["role"] = v.role;
    j["puuid"] = v.puuid;
    if(v.ready)
      j["ready"] = *v.ready;
    if(v.inviteTimestamp)
      j["inviteTimestamp"] = *v.inviteTimestamp;
    j["accountId"] = v.accountId;
    j["platformId"] = v.platformId;
    j["partyId"] = v.partyId;
    if(v.invitedBySummonerId)
      j["invitedBySummonerId"] = *v.invitedBySummonerId;
    if(v.canInvite)
      j["canInvite"] = *v.canInvite;
    j["metadata"] = v.metadata;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyMemberDto_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    if(auto it = j.find("gameMode"); it != j.end() && !it->is_null())
      v.gameMode = it->get<LolLobbyGameModeDto_t>();
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum_t>();
    v.puuid = j.at("puuid").get<std::string>();
    if(auto it = j.find("ready"); it != j.end() && !it->is_null())
      v.ready = it->get<bool>();
    if(auto it = j.find("inviteTimestamp"); it != j.end() && !it->is_null())
      v.inviteTimestamp = it->get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.platformId = j.at("platformId").get<std::string>();
    v.partyId = j.at("partyId").get<std::string>();
    if(auto it = j.find("invitedBySummonerId"); it != j.end() && !it->is_null())
      v.invitedBySummonerId = it->get<uint64_t>();
    if(auto it = j.find("canInvite"); it != j.end() && !it->is_null())
      v.canInvite = it->get<bool>();
    v.metadata = j.at("metadata").get<LolLobbyPartyMemberMetadataDto_t>();
  }
  inline std::string to_string(const LolLobbyPartyMemberDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
