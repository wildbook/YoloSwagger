#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolChatLobbyStatus_t {
    bool isPracticeTool;
    bool isLeader;
    int32_t queueId;
    bool isCustom;
    LolChatQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
  };

  inline void to_json(nlohmann::json& j, const LolChatLobbyStatus_t& v) {
    j["isPracticeTool"] = v.isPracticeTool;
    j["isLeader"] = v.isLeader;
    j["queueId"] = v.queueId;
    j["isCustom"] = v.isCustom;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
  }

  inline void from_json(const nlohmann::json& j, LolChatLobbyStatus_t& v) {
    v.isPracticeTool = j.at("isPracticeTool").get<bool>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolChatQueueCustomGameSpectatorPolicy_t>();
  }
  inline std::string to_string(const LolChatLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
