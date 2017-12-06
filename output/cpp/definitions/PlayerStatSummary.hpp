#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerStatSummary_t {
    uint64_t leaves;
    uint64_t losses;
    uint64_t maxRating;
    std::string playerStatSummaryType;
    uint64_t rating;
    uint64_t wins;
  };

  inline void to_json(nlohmann::json& j, const PlayerStatSummary_t& v) {
    j["leaves"] = v.leaves;
    j["losses"] = v.losses;
    j["maxRating"] = v.maxRating;
    j["playerStatSummaryType"] = v.playerStatSummaryType;
    j["rating"] = v.rating;
    j["wins"] = v.wins;
  }

  inline void from_json(const nlohmann::json& j, PlayerStatSummary_t& v) {
    v.leaves = j.at("leaves").get<uint64_t>();
    v.losses = j.at("losses").get<uint64_t>();
    v.maxRating = j.at("maxRating").get<uint64_t>();
    v.playerStatSummaryType = j.at("playerStatSummaryType").get<std::string>();
    v.rating = j.at("rating").get<uint64_t>();
    v.wins = j.at("wins").get<uint64_t>();
  }
}
