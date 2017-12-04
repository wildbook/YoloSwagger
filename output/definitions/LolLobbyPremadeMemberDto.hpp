#ifndef SWAGGER_TYPES_LolLobbyPremadeMemberDto_HPP
#define SWAGGER_TYPES_LolLobbyPremadeMemberDto_HPP
#include <json.hpp>
#include "LolLobbyPartyMemberRoleEnum.hpp"
namespace test {
  // 
  struct LolLobbyPremadeMemberDto {
'    // 
    std::string partyId;
    // 
    std::string puuid;
    // 
    LolLobbyPartyMemberRoleEnum role;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolLobbyPremadeMemberDto& v) {
    j["partyId"] = v.partyId;
    j["puuid"] = v.puuid;
    j["role"] = v.role;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolLobbyPremadeMemberDto& v) {
    v.partyId = j.at("partyId").get<std::string>;
    v.puuid = j.at("puuid").get<std::string>;
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPremadeMemberDto_HPP
