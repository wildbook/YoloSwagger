#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerStatSummary_t {
    uint64_t losses;
    std::string playerStatSummaryType;
    uint64_t leaves;
    uint64_t maxRating;
    uint64_t wins;
    uint64_t rating;
  };

  inline void to_json(nlohmann::json& j, const PlayerStatSummary_t& v) {
    j["losses"] = v.losses;
    j["playerStatSummaryType"] = v.playerStatSummaryType;
    j["leaves"] = v.leaves;
    j["maxRating"] = v.maxRating;
    j["wins"] = v.wins;
    j["rating"] = v.rating;
  }

  inline void from_json(const nlohmann::json& j, PlayerStatSummary_t& v) {
    v.losses = j.at("losses").get<uint64_t>();
    v.playerStatSummaryType = j.at("playerStatSummaryType").get<std::string>();
    v.leaves = j.at("leaves").get<uint64_t>();
    v.maxRating = j.at("maxRating").get<uint64_t>();
    v.wins = j.at("wins").get<uint64_t>();
    v.rating = j.at("rating").get<uint64_t>();
  }
  inline std::string to_string(const PlayerStatSummary_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
