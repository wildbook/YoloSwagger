#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LeaguesLcdsMiniSeriesDTO_t {
    uint64_t timeLeftToPlayMillis;
    uint64_t target;
    uint64_t wins;
    std::string progress;
    uint64_t losses;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsMiniSeriesDTO_t& v) {
    j["timeLeftToPlayMillis"] = v.timeLeftToPlayMillis;
    j["target"] = v.target;
    j["wins"] = v.wins;
    j["progress"] = v.progress;
    j["losses"] = v.losses;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsMiniSeriesDTO_t& v) {
    v.timeLeftToPlayMillis = j.at("timeLeftToPlayMillis").get<uint64_t>();
    v.target = j.at("target").get<uint64_t>();
    v.wins = j.at("wins").get<uint64_t>();
    v.progress = j.at("progress").get<std::string>();
    v.losses = j.at("losses").get<uint64_t>();
  }
}
