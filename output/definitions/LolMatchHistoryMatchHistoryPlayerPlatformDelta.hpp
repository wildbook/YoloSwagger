#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerPlatformDelta_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerPlatformDelta_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryPlayerPlatformDelta {
    // 
    bool compensationModeEnabled;
    // 
    uint64_t ipDelta;
    // 
    uint64_t timestamp;
    // 
    uint64_t xpDelta;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerPlatformDelta& v) {
    j["compensationModeEnabled"] = v.compensationModeEnabled;
    j["ipDelta"] = v.ipDelta;
    j["timestamp"] = v.timestamp;
    j["xpDelta"] = v.xpDelta;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerPlatformDelta& v) {
    v.compensationModeEnabled = j.at("compensationModeEnabled").get<bool>;
    v.ipDelta = j.at("ipDelta").get<uint64_t>;
    v.timestamp = j.at("timestamp").get<uint64_t>;
    v.xpDelta = j.at("xpDelta").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerPlatformDelta_HPP
