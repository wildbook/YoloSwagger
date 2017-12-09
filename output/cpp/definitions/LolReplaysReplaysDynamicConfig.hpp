#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplaysDynamicConfig_t {
    std::string MinSupportedGameServerVersion;
    double MinutesUntilReplayConsideredLost;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplaysDynamicConfig_t& v) {
    j["MinSupportedGameServerVersion"] = v.MinSupportedGameServerVersion;
    j["MinutesUntilReplayConsideredLost"] = v.MinutesUntilReplayConsideredLost;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplaysDynamicConfig_t& v) {
    v.MinSupportedGameServerVersion = j.at("MinSupportedGameServerVersion").get<std::string>();
    v.MinutesUntilReplayConsideredLost = j.at("MinutesUntilReplayConsideredLost").get<double>();
  }
  inline std::string to_string(const LolReplaysReplaysDynamicConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
