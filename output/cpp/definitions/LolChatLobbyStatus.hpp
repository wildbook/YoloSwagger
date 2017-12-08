#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolChatLobbyStatus_t {
    bool_t isCustom;
    int32_t_t queueId;
    bool_t isLeader;
    bool_t isPracticeTool;
    LolChatQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
  };

  inline void to_json(nlohmann::json& j, const LolChatLobbyStatus_t& v) {
    j["isCustom"] = v.isCustom;
    j["queueId"] = v.queueId;
    j["isLeader"] = v.isLeader;
    j["isPracticeTool"] = v.isPracticeTool;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
  }

  inline void from_json(const nlohmann::json& j, LolChatLobbyStatus_t& v) {
    v.isCustom = j.at("isCustom").get<bool_t>();
    v.queueId = j.at("queueId").get<int32_t_t>();
    v.isLeader = j.at("isLeader").get<bool_t>();
    v.isPracticeTool = j.at("isPracticeTool").get<bool_t>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolChatQueueCustomGameSpectatorPolicy_t>();
  }
  inline std::string to_string(const LolChatLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
