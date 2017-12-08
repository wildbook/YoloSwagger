#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerStatSummary_t {
    uint64_t_t rating;
    uint64_t_t wins;
    uint64_t_t leaves;
    uint64_t_t losses;
    std::string_t playerStatSummaryType;
    uint64_t_t maxRating;
  };

  inline void to_json(nlohmann::json& j, const PlayerStatSummary_t& v) {
    j["rating"] = v.rating;
    j["wins"] = v.wins;
    j["leaves"] = v.leaves;
    j["losses"] = v.losses;
    j["playerStatSummaryType"] = v.playerStatSummaryType;
    j["maxRating"] = v.maxRating;
  }

  inline void from_json(const nlohmann::json& j, PlayerStatSummary_t& v) {
    v.rating = j.at("rating").get<uint64_t_t>();
    v.wins = j.at("wins").get<uint64_t_t>();
    v.leaves = j.at("leaves").get<uint64_t_t>();
    v.losses = j.at("losses").get<uint64_t_t>();
    v.playerStatSummaryType = j.at("playerStatSummaryType").get<std::string_t>();
    v.maxRating = j.at("maxRating").get<uint64_t_t>();
  }
  inline std::string to_string(const PlayerStatSummary_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
