#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderLobbyInvitation_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderLobbyInvitation_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderLobbyInvitation {
    // 
    nlohmann::json invitationMetaData;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyInvitation& v) {
    j["invitationMetaData"] = v.invitationMetaData;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyInvitation& v) {
    v.invitationMetaData = j.at("invitationMetaData").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderLobbyInvitation_HPP
