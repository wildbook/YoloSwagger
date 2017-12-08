#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyQueueGameTypeConfig_t {
    bool allowTrades;
    bool battleBoost;
    int32_t maxAllowableBans;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyQueueGameTypeConfig_t& v) {
    j["allowTrades"] = v.allowTrades;
    j["battleBoost"] = v.battleBoost;
    j["maxAllowableBans"] = v.maxAllowableBans;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyQueueGameTypeConfig_t& v) {
    v.allowTrades = j.at("allowTrades").get<bool>();
    v.battleBoost = j.at("battleBoost").get<bool>();
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyQueueGameTypeConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
