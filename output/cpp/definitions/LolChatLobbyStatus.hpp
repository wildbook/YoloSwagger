#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolChatLobbyStatus_t {
    LolChatQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    bool isLeader;
    bool isCustom;
    int32_t queueId;
    bool isPracticeTool;
  };

  inline void to_json(nlohmann::json& j, const LolChatLobbyStatus_t& v) {
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["isLeader"] = v.isLeader;
    j["isCustom"] = v.isCustom;
    j["queueId"] = v.queueId;
    j["isPracticeTool"] = v.isPracticeTool;
  }

  inline void from_json(const nlohmann::json& j, LolChatLobbyStatus_t& v) {
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolChatQueueCustomGameSpectatorPolicy_t>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.isPracticeTool = j.at("isPracticeTool").get<bool>();
  }
  inline std::string to_string(const LolChatLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
