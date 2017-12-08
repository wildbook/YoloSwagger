#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyQueueGameTypeConfig_t {
    bool_t battleBoost;
    bool_t allowTrades;
    int32_t_t maxAllowableBans;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyQueueGameTypeConfig_t& v) {
    j["battleBoost"] = v.battleBoost;
    j["allowTrades"] = v.allowTrades;
    j["maxAllowableBans"] = v.maxAllowableBans;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyQueueGameTypeConfig_t& v) {
    v.battleBoost = j.at("battleBoost").get<bool_t>();
    v.allowTrades = j.at("allowTrades").get<bool_t>();
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyQueueGameTypeConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
