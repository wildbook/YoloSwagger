#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashRosterPlayerAggregatedStats_t {
    std::map<std::string, int32_t> rawStatsMax;
    std::map<std::string, int32_t> rawStatsSum;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterPlayerAggregatedStats_t& v) {
    j["rawStatsMax"] = v.rawStatsMax;
    j["rawStatsSum"] = v.rawStatsSum;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterPlayerAggregatedStats_t& v) {
    v.rawStatsMax = j.at("rawStatsMax").get<std::map<std::string, int32_t>>();
    v.rawStatsSum = j.at("rawStatsSum").get<std::map<std::string, int32_t>>();
  }
  inline std::string to_string(const LolClashRosterPlayerAggregatedStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
