#ifndef SWAGGER_TYPES_RecentGames_HPP
#define SWAGGER_TYPES_RecentGames_HPP
#include <json.hpp>
#include "PlayerGameStats.hpp"
namespace test {
  // 
  struct RecentGames {
'    // 
    std::vector<PlayerGameStats> gameStatistics;
    // 
    uint64_t userId;
  };

  void to_json(nlohmann::json& j, const RecentGames& v) {
    j["gameStatistics"] = v.gameStatistics;
    j["userId"] = v.userId;
  }

  void from_json(const nlohmann::json& j, RecentGames& v) {
    v.gameStatistics = j.at("gameStatistics").get<std::vector<PlayerGameStats>>;
    v.userId = j.at("userId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_RecentGames_HPP
