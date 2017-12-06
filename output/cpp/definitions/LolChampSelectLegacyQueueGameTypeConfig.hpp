#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyQueueGameTypeConfig_t {
    int32_t maxAllowableBans;
    bool battleBoost;
    bool allowTrades;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyQueueGameTypeConfig_t& v) {
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["battleBoost"] = v.battleBoost;
    j["allowTrades"] = v.allowTrades;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyQueueGameTypeConfig_t& v) {
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>();
    v.battleBoost = j.at("battleBoost").get<bool>();
    v.allowTrades = j.at("allowTrades").get<bool>();
  }
}
