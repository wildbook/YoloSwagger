#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyLastQueuedMember.hpp"
namespace leagueapi {
  struct LolLobbyLobbyLastQueuedLobby_t {
    int32_t queueId;
    bool wasOwner;
    bool canPlayAgain;
    std::vector<LolLobbyLobbyLastQueuedMember_t> members;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyLastQueuedLobby_t& v) {
    j["queueId"] = v.queueId;
    j["wasOwner"] = v.wasOwner;
    j["canPlayAgain"] = v.canPlayAgain;
    j["members"] = v.members;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyLastQueuedLobby_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    v.wasOwner = j.at("wasOwner").get<bool>();
    v.canPlayAgain = j.at("canPlayAgain").get<bool>();
    v.members = j.at("members").get<std::vector<LolLobbyLobbyLastQueuedMember_t>>();
  }
}
