#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LeaguesLcdsMiniSeriesDTO_t {
    uint64_t_t wins;
    std::string_t progress;
    uint64_t_t losses;
    uint64_t_t target;
    uint64_t_t timeLeftToPlayMillis;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsMiniSeriesDTO_t& v) {
    j["wins"] = v.wins;
    j["progress"] = v.progress;
    j["losses"] = v.losses;
    j["target"] = v.target;
    j["timeLeftToPlayMillis"] = v.timeLeftToPlayMillis;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsMiniSeriesDTO_t& v) {
    v.wins = j.at("wins").get<uint64_t_t>();
    v.progress = j.at("progress").get<std::string_t>();
    v.losses = j.at("losses").get<uint64_t_t>();
    v.target = j.at("target").get<uint64_t_t>();
    v.timeLeftToPlayMillis = j.at("timeLeftToPlayMillis").get<uint64_t_t>();
  }
  inline std::string to_string(const LeaguesLcdsMiniSeriesDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
