#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyLastQueuedMember.hpp"
namespace leagueapi {
  struct LolLobbyLobbyLastQueuedLobby_t {
    int32_t_t queueId;
    bool_t canPlayAgain;
    bool_t wasOwner;
    std::vector<LolLobbyLobbyLastQueuedMember_t> members;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyLastQueuedLobby_t& v) {
    j["queueId"] = v.queueId;
    j["canPlayAgain"] = v.canPlayAgain;
    j["wasOwner"] = v.wasOwner;
    j["members"] = v.members;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyLastQueuedLobby_t& v) {
    v.queueId = j.at("queueId").get<int32_t_t>();
    v.canPlayAgain = j.at("canPlayAgain").get<bool_t>();
    v.wasOwner = j.at("wasOwner").get<bool_t>();
    v.members = j.at("members").get<std::vector<LolLobbyLobbyLastQueuedMember_t>>();
  }
  inline std::string to_string(const LolLobbyLobbyLastQueuedLobby_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
