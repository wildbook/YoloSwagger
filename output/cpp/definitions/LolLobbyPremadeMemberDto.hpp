#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyMemberRoleEnum.hpp"
namespace leagueapi {
  struct LolLobbyPremadeMemberDto_t {
    std::string partyId;
    uint64_t summonerId;
    LolLobbyPartyMemberRoleEnum_t role;
    std::string puuid;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPremadeMemberDto_t& v) {
    j["partyId"] = v.partyId;
    j["summonerId"] = v.summonerId;
    j["role"] = v.role;
    j["puuid"] = v.puuid;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPremadeMemberDto_t& v) {
    v.partyId = j.at("partyId").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum_t>();
    v.puuid = j.at("puuid").get<std::string>();
  }
  inline std::string to_string(const LolLobbyPremadeMemberDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
