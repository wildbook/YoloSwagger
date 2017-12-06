#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RankedLeagueMiniSeriesDTO_t {
    uint64_t losses;
    std::string progress;
    uint64_t target;
    uint64_t timeLeftToPlayMillis;
    uint64_t wins;
  };

  inline void to_json(nlohmann::json& j, const RankedLeagueMiniSeriesDTO_t& v) {
    j["losses"] = v.losses;
    j["progress"] = v.progress;
    j["target"] = v.target;
    j["timeLeftToPlayMillis"] = v.timeLeftToPlayMillis;
    j["wins"] = v.wins;
  }

  inline void from_json(const nlohmann::json& j, RankedLeagueMiniSeriesDTO_t& v) {
    v.losses = j.at("losses").get<uint64_t>();
    v.progress = j.at("progress").get<std::string>();
    v.target = j.at("target").get<uint64_t>();
    v.timeLeftToPlayMillis = j.at("timeLeftToPlayMillis").get<uint64_t>();
    v.wins = j.at("wins").get<uint64_t>();
  }
}
