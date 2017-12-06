#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyMemberRoleEnum.hpp"
namespace leagueapi {
  struct LolLobbyPremadeMemberDto_t {
    std::string partyId;
    LolLobbyPartyMemberRoleEnum_t role;
    uint64_t summonerId;
    std::string puuid;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPremadeMemberDto_t& v) {
    j["partyId"] = v.partyId;
    j["role"] = v.role;
    j["summonerId"] = v.summonerId;
    j["puuid"] = v.puuid;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPremadeMemberDto_t& v) {
    v.partyId = j.at("partyId").get<std::string>();
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.puuid = j.at("puuid").get<std::string>();
  }
}
