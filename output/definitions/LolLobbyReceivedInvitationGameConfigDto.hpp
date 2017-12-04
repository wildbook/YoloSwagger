#ifndef SWAGGER_TYPES_LolLobbyReceivedInvitationGameConfigDto_HPP
#define SWAGGER_TYPES_LolLobbyReceivedInvitationGameConfigDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyReceivedInvitationGameConfigDto {
    // 
    std::string gameMode;
    // 
    std::string gameMutator;
    // 
    std::string inviteGameType;
    // 
    int32_t mapId;
    // 
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyReceivedInvitationGameConfigDto& v) {
    j["gameMode"] = v.gameMode;
    j["gameMutator"] = v.gameMutator;
    j["inviteGameType"] = v.inviteGameType;
    j["mapId"] = v.mapId;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyReceivedInvitationGameConfigDto& v) {
    v.gameMode = j.at("gameMode").get<std::string>;
    v.gameMutator = j.at("gameMutator").get<std::string>;
    v.inviteGameType = j.at("inviteGameType").get<std::string>;
    v.mapId = j.at("mapId").get<int32_t>;
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyReceivedInvitationGameConfigDto_HPP
