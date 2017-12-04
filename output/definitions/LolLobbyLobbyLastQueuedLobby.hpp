#ifndef SWAGGER_TYPES_LolLobbyLobbyLastQueuedLobby_HPP
#define SWAGGER_TYPES_LolLobbyLobbyLastQueuedLobby_HPP
#include <json.hpp>
#include "LolLobbyLobbyLastQueuedMember.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyLastQueuedLobby {
    // 
    bool canPlayAgain;
    // 
    std::vector<LolLobbyLobbyLastQueuedMember> members;
    // 
    int32_t queueId;
    // 
    bool wasOwner;
  };

  void to_json(nlohmann::json& j, const LolLobbyLobbyLastQueuedLobby& v) {
    j["canPlayAgain"] = v.canPlayAgain;
    j["members"] = v.members;
    j["queueId"] = v.queueId;
    j["wasOwner"] = v.wasOwner;
  }

  void from_json(const nlohmann::json& j, LolLobbyLobbyLastQueuedLobby& v) {
    v.canPlayAgain = j.at("canPlayAgain").get<bool>;
    v.members = j.at("members").get<std::vector<LolLobbyLobbyLastQueuedMember>>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.wasOwner = j.at("wasOwner").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyLastQueuedLobby_HPP
