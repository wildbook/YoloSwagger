#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyReceivedInvitationGameConfigDto_t {
    std::string gameMode;
    int32_t queueId;
    std::string inviteGameType;
    std::string gameMutator;
    int32_t mapId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyReceivedInvitationGameConfigDto_t& v) {
    j["gameMode"] = v.gameMode;
    j["queueId"] = v.queueId;
    j["inviteGameType"] = v.inviteGameType;
    j["gameMutator"] = v.gameMutator;
    j["mapId"] = v.mapId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyReceivedInvitationGameConfigDto_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.inviteGameType = j.at("inviteGameType").get<std::string>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyReceivedInvitationGameConfigDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
