#ifndef SWAGGER_TYPES_LolChampSelectLegacyQueueGameTypeConfig_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyQueueGameTypeConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectLegacyQueueGameTypeConfig {
    // 
    bool allowTrades;
    // 
    bool battleBoost;
    // 
    int32_t maxAllowableBans;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyQueueGameTypeConfig& v) {
    j["allowTrades"] = v.allowTrades;
    j["battleBoost"] = v.battleBoost;
    j["maxAllowableBans"] = v.maxAllowableBans;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyQueueGameTypeConfig& v) {
    v.allowTrades = j.at("allowTrades").get<bool>;
    v.battleBoost = j.at("battleBoost").get<bool>;
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyQueueGameTypeConfig_HPP
