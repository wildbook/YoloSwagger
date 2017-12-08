#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyMemberRoleEnum.hpp"
namespace leagueapi {
  struct LolLobbyPremadeMemberDto_t {
    std::string_t puuid;
    LolLobbyPartyMemberRoleEnum_t role;
    std::string_t partyId;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPremadeMemberDto_t& v) {
    j["puuid"] = v.puuid;
    j["role"] = v.role;
    j["partyId"] = v.partyId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPremadeMemberDto_t& v) {
    v.puuid = j.at("puuid").get<std::string_t>();
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum_t>();
    v.partyId = j.at("partyId").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolLobbyPremadeMemberDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
