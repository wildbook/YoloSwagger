#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerPlatformDelta_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerPlatformDelta_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryPlayerPlatformDelta {
    // 
    uint64_t ipDelta;
    // 
    bool compensationModeEnabled;
    // 
    uint64_t xpDelta;
    // 
    uint64_t timestamp;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerPlatformDelta& v) {
    j["ipDelta"] = v.ipDelta;
    j["compensationModeEnabled"] = v.compensationModeEnabled;
    j["xpDelta"] = v.xpDelta;
    j["timestamp"] = v.timestamp;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerPlatformDelta& v) {
    v.ipDelta = j.at("ipDelta").get<uint64_t>;
    v.compensationModeEnabled = j.at("compensationModeEnabled").get<bool>;
    v.xpDelta = j.at("xpDelta").get<uint64_t>;
    v.timestamp = j.at("timestamp").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerPlatformDelta_HPP
