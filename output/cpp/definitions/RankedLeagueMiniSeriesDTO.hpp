#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RankedLeagueMiniSeriesDTO_t {
    std::string progress;
    uint64_t timeLeftToPlayMillis;
    uint64_t losses;
    uint64_t wins;
    uint64_t target;
  };

  inline void to_json(nlohmann::json& j, const RankedLeagueMiniSeriesDTO_t& v) {
    j["progress"] = v.progress;
    j["timeLeftToPlayMillis"] = v.timeLeftToPlayMillis;
    j["losses"] = v.losses;
    j["wins"] = v.wins;
    j["target"] = v.target;
  }

  inline void from_json(const nlohmann::json& j, RankedLeagueMiniSeriesDTO_t& v) {
    v.progress = j.at("progress").get<std::string>();
    v.timeLeftToPlayMillis = j.at("timeLeftToPlayMillis").get<uint64_t>();
    v.losses = j.at("losses").get<uint64_t>();
    v.wins = j.at("wins").get<uint64_t>();
    v.target = j.at("target").get<uint64_t>();
  }
  inline std::string to_string(const RankedLeagueMiniSeriesDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
