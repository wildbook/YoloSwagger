#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyMemberRoleEnum.hpp"
namespace leagueapi {
  struct LolLobbyPremadeMemberDto_t {
    std::string partyId;
    std::string puuid;
    LolLobbyPartyMemberRoleEnum_t role;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPremadeMemberDto_t& v) {
    j["partyId"] = v.partyId;
    j["puuid"] = v.puuid;
    j["role"] = v.role;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPremadeMemberDto_t& v) {
    v.partyId = j.at("partyId").get<std::string>();
    v.puuid = j.at("puuid").get<std::string>();
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
