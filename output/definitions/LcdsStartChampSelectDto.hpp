#ifndef SWAGGER_TYPES_LcdsStartChampSelectDto_HPP
#define SWAGGER_TYPES_LcdsStartChampSelectDto_HPP
#include <json.hpp>
#include "LcdsFailedJoinPlayer.hpp"
namespace leagueapi {
  // 
  struct LcdsStartChampSelectDto {
    // 
    std::vector<LcdsFailedJoinPlayer> invalidPlayers;
  };

  void to_json(nlohmann::json& j, const LcdsStartChampSelectDto& v) {
    j["invalidPlayers"] = v.invalidPlayers;
  }

  void from_json(const nlohmann::json& j, LcdsStartChampSelectDto& v) {
    v.invalidPlayers = j.at("invalidPlayers").get<std::vector<LcdsFailedJoinPlayer>>;
  }

}
#endif // SWAGGER_TYPES_LcdsStartChampSelectDto_HPP
