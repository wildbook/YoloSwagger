#ifndef SWAGGER_TYPES_LolLobbyPartyMemberMetadataDto_HPP
#define SWAGGER_TYPES_LolLobbyPartyMemberMetadataDto_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLobbyPartyMemberMetadataDto {
'    // 
    std::vector<std::string> positionPref;
  };

  void to_json(nlohmann::json& j, const LolLobbyPartyMemberMetadataDto& v) {
    j["positionPref"] = v.positionPref;
  }

  void from_json(const nlohmann::json& j, LolLobbyPartyMemberMetadataDto& v) {
    v.positionPref = j.at("positionPref").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPartyMemberMetadataDto_HPP
