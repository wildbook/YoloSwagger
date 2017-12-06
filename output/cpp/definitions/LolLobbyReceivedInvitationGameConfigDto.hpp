#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyReceivedInvitationGameConfigDto_t {
    std::string gameMutator;
    std::string gameMode;
    int32_t queueId;
    int32_t mapId;
    std::string inviteGameType;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyReceivedInvitationGameConfigDto_t& v) {
    j["gameMutator"] = v.gameMutator;
    j["gameMode"] = v.gameMode;
    j["queueId"] = v.queueId;
    j["mapId"] = v.mapId;
    j["inviteGameType"] = v.inviteGameType;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyReceivedInvitationGameConfigDto_t& v) {
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.inviteGameType = j.at("inviteGameType").get<std::string>();
  }
}
