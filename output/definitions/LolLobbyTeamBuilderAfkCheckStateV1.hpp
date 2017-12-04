#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderAfkCheckStateV1_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderAfkCheckStateV1_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderTbdInventory.hpp"
namespace test {
  // 
  struct LolLobbyTeamBuilderAfkCheckStateV1 {
'    // 
    bool afkReady;
    // 
    LolLobbyTeamBuilderTbdInventory inventoryDraft;
    // 
    uint32_t maxAfkMillis;
    // 
    int32_t remainingAfkMillis;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderAfkCheckStateV1& v) {
    j["afkReady"] = v.afkReady;
    j["inventoryDraft"] = v.inventoryDraft;
    j["maxAfkMillis"] = v.maxAfkMillis;
    j["remainingAfkMillis"] = v.remainingAfkMillis;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderAfkCheckStateV1& v) {
    v.afkReady = j.at("afkReady").get<bool>;
    v.inventoryDraft = j.at("inventoryDraft").get<LolLobbyTeamBuilderTbdInventory>;
    v.maxAfkMillis = j.at("maxAfkMillis").get<uint32_t>;
    v.remainingAfkMillis = j.at("remainingAfkMillis").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderAfkCheckStateV1_HPP
