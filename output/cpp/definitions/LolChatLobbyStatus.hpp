#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolChatLobbyStatus_t {
    LolChatQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    bool isCustom;
    bool isLeader;
    bool isPracticeTool;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolChatLobbyStatus_t& v) {
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["isCustom"] = v.isCustom;
    j["isLeader"] = v.isLeader;
    j["isPracticeTool"] = v.isPracticeTool;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolChatLobbyStatus_t& v) {
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolChatQueueCustomGameSpectatorPolicy_t>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.isPracticeTool = j.at("isPracticeTool").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
}
