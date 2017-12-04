#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderLobbyInvitation_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderLobbyInvitation_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLobbyTeamBuilderLobbyInvitation {
'    // 
    nlohmann::json invitationMetaData;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyInvitation& v) {
    j["invitationMetaData"] = v.invitationMetaData;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyInvitation& v) {
    v.invitationMetaData = j.at("invitationMetaData").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderLobbyInvitation_HPP
