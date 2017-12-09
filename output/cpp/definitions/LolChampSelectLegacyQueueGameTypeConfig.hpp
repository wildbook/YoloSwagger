#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyQueueGameTypeConfig_t {
    bool battleBoost;
    int32_t maxAllowableBans;
    bool allowTrades;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyQueueGameTypeConfig_t& v) {
    j["battleBoost"] = v.battleBoost;
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["allowTrades"] = v.allowTrades;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyQueueGameTypeConfig_t& v) {
    v.battleBoost = j.at("battleBoost").get<bool>();
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>();
    v.allowTrades = j.at("allowTrades").get<bool>();
  }
  inline std::string to_string(const LolChampSelectLegacyQueueGameTypeConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
