#ifndef SWAGGER_TYPES_LolReplaysReplaysDynamicConfig_HPP
#define SWAGGER_TYPES_LolReplaysReplaysDynamicConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolReplaysReplaysDynamicConfig {
    // 
    double MinutesUntilReplayConsideredLost;
    // 
    std::string MinSupportedGameServerVersion;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplaysDynamicConfig& v) {
    j["MinutesUntilReplayConsideredLost"] = v.MinutesUntilReplayConsideredLost;
    j["MinSupportedGameServerVersion"] = v.MinSupportedGameServerVersion;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplaysDynamicConfig& v) {
    v.MinutesUntilReplayConsideredLost = j.at("MinutesUntilReplayConsideredLost").get<double>;
    v.MinSupportedGameServerVersion = j.at("MinSupportedGameServerVersion").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolReplaysReplaysDynamicConfig_HPP
