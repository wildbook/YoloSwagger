#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyLastQueuedMember.hpp"
namespace leagueapi {
  struct LolLobbyLobbyLastQueuedLobby_t {
    bool wasOwner;
    int32_t queueId;
    std::vector<LolLobbyLobbyLastQueuedMember_t> members;
    bool canPlayAgain;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyLastQueuedLobby_t& v) {
    j["wasOwner"] = v.wasOwner;
    j["queueId"] = v.queueId;
    j["members"] = v.members;
    j["canPlayAgain"] = v.canPlayAgain;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyLastQueuedLobby_t& v) {
    v.wasOwner = j.at("wasOwner").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.members = j.at("members").get<std::vector<LolLobbyLobbyLastQueuedMember_t>>();
    v.canPlayAgain = j.at("canPlayAgain").get<bool>();
  }
  inline std::string to_string(const LolLobbyLobbyLastQueuedLobby_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
