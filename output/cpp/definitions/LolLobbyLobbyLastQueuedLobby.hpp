#ifndef SWAGGER_TYPES_LolLobbyLobbyLastQueuedLobby_HPP
#define SWAGGER_TYPES_LolLobbyLobbyLastQueuedLobby_HPP
#include <json.hpp>
#include "LolLobbyLobbyLastQueuedMember.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyLastQueuedLobby {
    // 
    int32_t queueId;
    // 
    bool canPlayAgain;
    // 
    bool wasOwner;
    // 
    std::vector<LolLobbyLobbyLastQueuedMember> members;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyLastQueuedLobby& v) {
    j["queueId"] = v.queueId;
    j["canPlayAgain"] = v.canPlayAgain;
    j["wasOwner"] = v.wasOwner;
    j["members"] = v.members;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyLastQueuedLobby& v) {
    v.queueId = j.at("queueId").get<int32_t>;
    v.canPlayAgain = j.at("canPlayAgain").get<bool>;
    v.wasOwner = j.at("wasOwner").get<bool>;
    v.members = j.at("members").get<std::vector<LolLobbyLobbyLastQueuedMember>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyLastQueuedLobby_HPP
