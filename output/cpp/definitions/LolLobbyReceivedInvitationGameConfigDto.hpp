#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyReceivedInvitationGameConfigDto_t {
    std::string gameMode;
    std::string gameMutator;
    std::string inviteGameType;
    int32_t mapId;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyReceivedInvitationGameConfigDto_t& v) {
    j["gameMode"] = v.gameMode;
    j["gameMutator"] = v.gameMutator;
    j["inviteGameType"] = v.inviteGameType;
    j["mapId"] = v.mapId;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyReceivedInvitationGameConfigDto_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.inviteGameType = j.at("inviteGameType").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
}
