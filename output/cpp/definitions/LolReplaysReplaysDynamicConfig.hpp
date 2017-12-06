#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplaysDynamicConfig_t {
    double MinutesUntilReplayConsideredLost;
    std::string MinSupportedGameServerVersion;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplaysDynamicConfig_t& v) {
    j["MinutesUntilReplayConsideredLost"] = v.MinutesUntilReplayConsideredLost;
    j["MinSupportedGameServerVersion"] = v.MinSupportedGameServerVersion;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplaysDynamicConfig_t& v) {
    v.MinutesUntilReplayConsideredLost = j.at("MinutesUntilReplayConsideredLost").get<double>();
    v.MinSupportedGameServerVersion = j.at("MinSupportedGameServerVersion").get<std::string>();
  }
}
