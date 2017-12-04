#ifndef SWAGGER_TYPES_SummonerOrTeamAvailabilty_HPP
#define SWAGGER_TYPES_SummonerOrTeamAvailabilty_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SummonerOrTeamAvailabilty {
    // 
    std::vector<std::string> availableForWatching;
  };

  void to_json(nlohmann::json& j, const SummonerOrTeamAvailabilty& v) {
    j["availableForWatching"] = v.availableForWatching;
  }

  void from_json(const nlohmann::json& j, SummonerOrTeamAvailabilty& v) {
    v.availableForWatching = j.at("availableForWatching").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_SummonerOrTeamAvailabilty_HPP
