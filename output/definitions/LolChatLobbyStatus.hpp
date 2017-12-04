#ifndef SWAGGER_TYPES_LolChatLobbyStatus_HPP
#define SWAGGER_TYPES_LolChatLobbyStatus_HPP
#include <json.hpp>
#include "LolChatQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  // 
  struct LolChatLobbyStatus {
    // 
    LolChatQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    // 
    bool isCustom;
    // 
    bool isLeader;
    // 
    bool isPracticeTool;
    // 
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolChatLobbyStatus& v) {
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["isCustom"] = v.isCustom;
    j["isLeader"] = v.isLeader;
    j["isPracticeTool"] = v.isPracticeTool;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolChatLobbyStatus& v) {
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolChatQueueCustomGameSpectatorPolicy>;
    v.isCustom = j.at("isCustom").get<bool>;
    v.isLeader = j.at("isLeader").get<bool>;
    v.isPracticeTool = j.at("isPracticeTool").get<bool>;
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolChatLobbyStatus_HPP
