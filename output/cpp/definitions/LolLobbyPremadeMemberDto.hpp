#ifndef SWAGGER_TYPES_LolLobbyPremadeMemberDto_HPP
#define SWAGGER_TYPES_LolLobbyPremadeMemberDto_HPP
#include <json.hpp>
#include "LolLobbyPartyMemberRoleEnum.hpp"
namespace leagueapi {
  // 
  struct LolLobbyPremadeMemberDto {
    // 
    std::string puuid;
    // 
    LolLobbyPartyMemberRoleEnum role;
    // 
    std::string partyId;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPremadeMemberDto& v) {
    j["puuid"] = v.puuid;
    j["role"] = v.role;
    j["partyId"] = v.partyId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPremadeMemberDto& v) {
    v.puuid = j.at("puuid").get<std::string>;
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum>;
    v.partyId = j.at("partyId").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPremadeMemberDto_HPP
