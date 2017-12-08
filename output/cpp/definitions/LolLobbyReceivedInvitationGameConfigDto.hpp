#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyReceivedInvitationGameConfigDto_t {
    int32_t queueId;
    std::string gameMutator;
    std::string gameMode;
    int32_t mapId;
    std::string inviteGameType;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyReceivedInvitationGameConfigDto_t& v) {
    j["queueId"] = v.queueId;
    j["gameMutator"] = v.gameMutator;
    j["gameMode"] = v.gameMode;
    j["mapId"] = v.mapId;
    j["inviteGameType"] = v.inviteGameType;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyReceivedInvitationGameConfigDto_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.inviteGameType = j.at("inviteGameType").get<std::string>();
  }
  inline std::string to_string(const LolLobbyReceivedInvitationGameConfigDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
