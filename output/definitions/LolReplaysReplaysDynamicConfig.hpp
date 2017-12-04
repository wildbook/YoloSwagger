#ifndef SWAGGER_TYPES_LolReplaysReplaysDynamicConfig_HPP
#define SWAGGER_TYPES_LolReplaysReplaysDynamicConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolReplaysReplaysDynamicConfig {
    // 
    std::string MinSupportedGameServerVersion;
    // 
    double MinutesUntilReplayConsideredLost;
  };

  void to_json(nlohmann::json& j, const LolReplaysReplaysDynamicConfig& v) {
    j["MinSupportedGameServerVersion"] = v.MinSupportedGameServerVersion;
    j["MinutesUntilReplayConsideredLost"] = v.MinutesUntilReplayConsideredLost;
  }

  void from_json(const nlohmann::json& j, LolReplaysReplaysDynamicConfig& v) {
    v.MinSupportedGameServerVersion = j.at("MinSupportedGameServerVersion").get<std::string>;
    v.MinutesUntilReplayConsideredLost = j.at("MinutesUntilReplayConsideredLost").get<double>;
  }

}
#endif // SWAGGER_TYPES_LolReplaysReplaysDynamicConfig_HPP
