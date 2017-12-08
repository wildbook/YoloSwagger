#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyMemberRoleEnum.hpp"
#include "LolLobbyGameModeDto.hpp"
#include "LolLobbyPartyMemberMetadataDto.hpp"
namespace leagueapi {
  struct LolLobbyPartyMemberDto_t {
    std::optional<uint64_t_t> inviteTimestamp;
    std::optional<uint64_t_t> invitedBySummonerId;
    std::string_t platformId;
    LolLobbyPartyMemberRoleEnum_t role;
    std::optional<LolLobbyGameModeDto_t> gameMode;
    std::optional<bool_t> ready;
    std::string_t partyId;
    std::optional<bool_t> canInvite;
    std::string_t puuid;
    uint64_t_t accountId;
    uint64_t_t summonerId;
    LolLobbyPartyMemberMetadataDto_t metadata;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyMemberDto_t& v) {
    if(v.inviteTimestamp)
      j["inviteTimestamp"] = *v.inviteTimestamp;
    if(v.invitedBySummonerId)
      j["invitedBySummonerId"] = *v.invitedBySummonerId;
    j["platformId"] = v.platformId;
    j["role"] = v.role;
    if(v.gameMode)
      j["gameMode"] = *v.gameMode;
    if(v.ready)
      j["ready"] = *v.ready;
    j["partyId"] = v.partyId;
    if(v.canInvite)
      j["canInvite"] = *v.canInvite;
    j["puuid"] = v.puuid;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["metadata"] = v.metadata;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyMemberDto_t& v) {
    if(auto it = j.find("inviteTimestamp"); it != j.end() && !it->is_null())
      v.inviteTimestamp = it->get<uint64_t_t>();
    if(auto it = j.find("invitedBySummonerId"); it != j.end() && !it->is_null())
      v.invitedBySummonerId = it->get<uint64_t_t>();
    v.platformId = j.at("platformId").get<std::string_t>();
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum_t>();
    if(auto it = j.find("gameMode"); it != j.end() && !it->is_null())
      v.gameMode = it->get<LolLobbyGameModeDto_t>();
    if(auto it = j.find("ready"); it != j.end() && !it->is_null())
      v.ready = it->get<bool_t>();
    v.partyId = j.at("partyId").get<std::string_t>();
    if(auto it = j.find("canInvite"); it != j.end() && !it->is_null())
      v.canInvite = it->get<bool_t>();
    v.puuid = j.at("puuid").get<std::string_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.metadata = j.at("metadata").get<LolLobbyPartyMemberMetadataDto_t>();
  }
  inline std::string to_string(const LolLobbyPartyMemberDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
