#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashRosterPlayerAggregatedStats_t {
    std::map<std::string, int32_t> rawStatsSum;
    std::map<std::string, int32_t> rawStatsMax;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterPlayerAggregatedStats_t& v) {
    j["rawStatsSum"] = v.rawStatsSum;
    j["rawStatsMax"] = v.rawStatsMax;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterPlayerAggregatedStats_t& v) {
    v.rawStatsSum = j.at("rawStatsSum").get<std::map<std::string, int32_t>>();
    v.rawStatsMax = j.at("rawStatsMax").get<std::map<std::string, int32_t>>();
  }
  inline std::string to_string(const LolClashRosterPlayerAggregatedStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
