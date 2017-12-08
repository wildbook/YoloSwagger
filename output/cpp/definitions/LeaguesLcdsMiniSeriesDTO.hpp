#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LeaguesLcdsMiniSeriesDTO_t {
    std::string progress;
    uint64_t timeLeftToPlayMillis;
    uint64_t target;
    uint64_t wins;
    uint64_t losses;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsMiniSeriesDTO_t& v) {
    j["progress"] = v.progress;
    j["timeLeftToPlayMillis"] = v.timeLeftToPlayMillis;
    j["target"] = v.target;
    j["wins"] = v.wins;
    j["losses"] = v.losses;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsMiniSeriesDTO_t& v) {
    v.progress = j.at("progress").get<std::string>();
    v.timeLeftToPlayMillis = j.at("timeLeftToPlayMillis").get<uint64_t>();
    v.target = j.at("target").get<uint64_t>();
    v.wins = j.at("wins").get<uint64_t>();
    v.losses = j.at("losses").get<uint64_t>();
  }
  inline std::string to_string(const LeaguesLcdsMiniSeriesDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
