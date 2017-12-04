#ifndef SWAGGER_TYPES_LolChatLobbyStatus_HPP
#define SWAGGER_TYPES_LolChatLobbyStatus_HPP
#include <json.hpp>
#include "LolChatQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  // 
  struct LolChatLobbyStatus {
    // 
    bool isCustom;
    // 
    int32_t queueId;
    // 
    bool isLeader;
    // 
    bool isPracticeTool;
    // 
    LolChatQueueCustomGameSpectatorPolicy customSpectatorPolicy;
  };

  inline void to_json(nlohmann::json& j, const LolChatLobbyStatus& v) {
    j["isCustom"] = v.isCustom;
    j["queueId"] = v.queueId;
    j["isLeader"] = v.isLeader;
    j["isPracticeTool"] = v.isPracticeTool;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
  }

  inline void from_json(const nlohmann::json& j, LolChatLobbyStatus& v) {
    v.isCustom = j.at("isCustom").get<bool>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.isLeader = j.at("isLeader").get<bool>;
    v.isPracticeTool = j.at("isPracticeTool").get<bool>;
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolChatQueueCustomGameSpectatorPolicy>;
  }

}
#endif // SWAGGER_TYPES_LolChatLobbyStatus_HPP
