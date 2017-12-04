#ifndef SWAGGER_TYPES_LolRankedStatsPluginStatus_HPP
#define SWAGGER_TYPES_LolRankedStatsPluginStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolRankedStatsPluginStatus {
    // 
    bool ready;
  };

  void to_json(nlohmann::json& j, const LolRankedStatsPluginStatus& v) {
    j["ready"] = v.ready;
  }

  void from_json(const nlohmann::json& j, LolRankedStatsPluginStatus& v) {
    v.ready = j.at("ready").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolRankedStatsPluginStatus_HPP
