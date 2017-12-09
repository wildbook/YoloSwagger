#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyMemberRoleEnum.hpp"
namespace leagueapi {
  struct LolLobbyPremadeMemberDto_t {
    uint64_t summonerId;
    std::string partyId;
    LolLobbyPartyMemberRoleEnum_t role;
    std::string puuid;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPremadeMemberDto_t& v) {
    j["summonerId"] = v.summonerId;
    j["partyId"] = v.partyId;
    j["role"] = v.role;
    j["puuid"] = v.puuid;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPremadeMemberDto_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.partyId = j.at("partyId").get<std::string>();
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum_t>();
    v.puuid = j.at("puuid").get<std::string>();
  }
  inline std::string to_string(const LolLobbyPremadeMemberDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
