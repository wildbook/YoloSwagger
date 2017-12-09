#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyQueueGameTypeConfig_t {
    int32_t maxAllowableBans;
    bool allowTrades;
    bool battleBoost;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyQueueGameTypeConfig_t& v) {
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["allowTrades"] = v.allowTrades;
    j["battleBoost"] = v.battleBoost;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyQueueGameTypeConfig_t& v) {
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>();
    v.allowTrades = j.at("allowTrades").get<bool>();
    v.battleBoost = j.at("battleBoost").get<bool>();
  }
  inline std::string to_string(const LolChampSelectLegacyQueueGameTypeConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
