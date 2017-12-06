#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyLastQueuedMember.hpp"
namespace leagueapi {
  struct LolLobbyLobbyLastQueuedLobby_t {
    bool canPlayAgain;
    std::vector<LolLobbyLobbyLastQueuedMember_t> members;
    int32_t queueId;
    bool wasOwner;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyLastQueuedLobby_t& v) {
    j["canPlayAgain"] = v.canPlayAgain;
    j["members"] = v.members;
    j["queueId"] = v.queueId;
    j["wasOwner"] = v.wasOwner;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyLastQueuedLobby_t& v) {
    v.canPlayAgain = j.at("canPlayAgain").get<bool>();
    v.members = j.at("members").get<std::vector<LolLobbyLobbyLastQueuedMember_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.wasOwner = j.at("wasOwner").get<bool>();
  }
}
