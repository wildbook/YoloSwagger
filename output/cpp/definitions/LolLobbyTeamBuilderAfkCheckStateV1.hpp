#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderTbdInventory.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderAfkCheckStateV1_t {
    bool afkReady;
    int32_t remainingAfkMillis;
    uint32_t maxAfkMillis;
    LolLobbyTeamBuilderTbdInventory_t inventoryDraft;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderAfkCheckStateV1_t& v) {
    j["afkReady"] = v.afkReady;
    j["remainingAfkMillis"] = v.remainingAfkMillis;
    j["maxAfkMillis"] = v.maxAfkMillis;
    j["inventoryDraft"] = v.inventoryDraft;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderAfkCheckStateV1_t& v) {
    v.afkReady = j.at("afkReady").get<bool>();
    v.remainingAfkMillis = j.at("remainingAfkMillis").get<int32_t>();
    v.maxAfkMillis = j.at("maxAfkMillis").get<uint32_t>();
    v.inventoryDraft = j.at("inventoryDraft").get<LolLobbyTeamBuilderTbdInventory_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderAfkCheckStateV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
