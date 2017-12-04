#ifndef SWAGGER_TYPES_LolLobbyLeague_HPP
#define SWAGGER_TYPES_LolLobbyLeague_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyLeague {
    // 
    std::string leagueTier;
    // 
    std::string queueType;
  };

  void to_json(nlohmann::json& j, const LolLobbyLeague& v) {
    j["leagueTier"] = v.leagueTier;
    j["queueType"] = v.queueType;
  }

  void from_json(const nlohmann::json& j, LolLobbyLeague& v) {
    v.leagueTier = j.at("leagueTier").get<std::string>;
    v.queueType = j.at("queueType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLeague_HPP
