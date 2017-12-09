#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyReceivedInvitationGameConfigDto_t {
    int32_t mapId;
    std::string gameMode;
    std::string gameMutator;
    std::string inviteGameType;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyReceivedInvitationGameConfigDto_t& v) {
    j["mapId"] = v.mapId;
    j["gameMode"] = v.gameMode;
    j["gameMutator"] = v.gameMutator;
    j["inviteGameType"] = v.inviteGameType;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyReceivedInvitationGameConfigDto_t& v) {
    v.mapId = j.at("mapId").get<int32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.inviteGameType = j.at("inviteGameType").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyReceivedInvitationGameConfigDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
