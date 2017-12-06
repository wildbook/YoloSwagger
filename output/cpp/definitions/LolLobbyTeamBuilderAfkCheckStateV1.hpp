#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderTbdInventory.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderAfkCheckStateV1_t {
    bool afkReady;
    LolLobbyTeamBuilderTbdInventory_t inventoryDraft;
    uint32_t maxAfkMillis;
    int32_t remainingAfkMillis;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderAfkCheckStateV1_t& v) {
    j["afkReady"] = v.afkReady;
    j["inventoryDraft"] = v.inventoryDraft;
    j["maxAfkMillis"] = v.maxAfkMillis;
    j["remainingAfkMillis"] = v.remainingAfkMillis;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderAfkCheckStateV1_t& v) {
    v.afkReady = j.at("afkReady").get<bool>();
    v.inventoryDraft = j.at("inventoryDraft").get<LolLobbyTeamBuilderTbdInventory_t>();
    v.maxAfkMillis = j.at("maxAfkMillis").get<uint32_t>();
    v.remainingAfkMillis = j.at("remainingAfkMillis").get<int32_t>();
  }
}
