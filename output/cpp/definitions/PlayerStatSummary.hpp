#ifndef SWAGGER_TYPES_PlayerStatSummary_HPP
#define SWAGGER_TYPES_PlayerStatSummary_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PlayerStatSummary {
    // 
    uint64_t rating;
    // 
    uint64_t wins;
    // 
    uint64_t leaves;
    // 
    uint64_t losses;
    // 
    std::string playerStatSummaryType;
    // 
    uint64_t maxRating;
  };

  inline void to_json(nlohmann::json& j, const PlayerStatSummary& v) {
    j["rating"] = v.rating;
    j["wins"] = v.wins;
    j["leaves"] = v.leaves;
    j["losses"] = v.losses;
    j["playerStatSummaryType"] = v.playerStatSummaryType;
    j["maxRating"] = v.maxRating;
  }

  inline void from_json(const nlohmann::json& j, PlayerStatSummary& v) {
    v.rating = j.at("rating").get<uint64_t>;
    v.wins = j.at("wins").get<uint64_t>;
    v.leaves = j.at("leaves").get<uint64_t>;
    v.losses = j.at("losses").get<uint64_t>;
    v.playerStatSummaryType = j.at("playerStatSummaryType").get<std::string>;
    v.maxRating = j.at("maxRating").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_PlayerStatSummary_HPP
