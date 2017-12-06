#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolChatLobbyStatus_t {
    bool isLeader;
    bool isCustom;
    int32_t queueId;
    bool isPracticeTool;
    LolChatQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
  };

  inline void to_json(nlohmann::json& j, const LolChatLobbyStatus_t& v) {
    j["isLeader"] = v.isLeader;
    j["isCustom"] = v.isCustom;
    j["queueId"] = v.queueId;
    j["isPracticeTool"] = v.isPracticeTool;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
  }

  inline void from_json(const nlohmann::json& j, LolChatLobbyStatus_t& v) {
    v.isLeader = j.at("isLeader").get<bool>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.isPracticeTool = j.at("isPracticeTool").get<bool>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolChatQueueCustomGameSpectatorPolicy_t>();
  }
}
