#ifndef SWAGGER_TYPES_PlayerStatSummary_HPP
#define SWAGGER_TYPES_PlayerStatSummary_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PlayerStatSummary {
    // 
    uint64_t leaves;
    // 
    uint64_t losses;
    // 
    uint64_t maxRating;
    // 
    std::string playerStatSummaryType;
    // 
    uint64_t rating;
    // 
    uint64_t wins;
  };

  void to_json(nlohmann::json& j, const PlayerStatSummary& v) {
    j["leaves"] = v.leaves;
    j["losses"] = v.losses;
    j["maxRating"] = v.maxRating;
    j["playerStatSummaryType"] = v.playerStatSummaryType;
    j["rating"] = v.rating;
    j["wins"] = v.wins;
  }

  void from_json(const nlohmann::json& j, PlayerStatSummary& v) {
    v.leaves = j.at("leaves").get<uint64_t>;
    v.losses = j.at("losses").get<uint64_t>;
    v.maxRating = j.at("maxRating").get<uint64_t>;
    v.playerStatSummaryType = j.at("playerStatSummaryType").get<std::string>;
    v.rating = j.at("rating").get<uint64_t>;
    v.wins = j.at("wins").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_PlayerStatSummary_HPP
