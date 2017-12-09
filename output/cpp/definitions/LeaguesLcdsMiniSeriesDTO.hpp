#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LeaguesLcdsMiniSeriesDTO_t {
    uint64_t losses;
    uint64_t timeLeftToPlayMillis;
    std::string progress;
    uint64_t target;
    uint64_t wins;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsMiniSeriesDTO_t& v) {
    j["losses"] = v.losses;
    j["timeLeftToPlayMillis"] = v.timeLeftToPlayMillis;
    j["progress"] = v.progress;
    j["target"] = v.target;
    j["wins"] = v.wins;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsMiniSeriesDTO_t& v) {
    v.losses = j.at("losses").get<uint64_t>();
    v.timeLeftToPlayMillis = j.at("timeLeftToPlayMillis").get<uint64_t>();
    v.progress = j.at("progress").get<std::string>();
    v.target = j.at("target").get<uint64_t>();
    v.wins = j.at("wins").get<uint64_t>();
  }
  inline std::string to_string(const LeaguesLcdsMiniSeriesDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
