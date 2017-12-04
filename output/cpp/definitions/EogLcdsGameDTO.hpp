#ifndef SWAGGER_TYPES_EogLcdsGameDTO_HPP
#define SWAGGER_TYPES_EogLcdsGameDTO_HPP
#include <json.hpp>
#include "PlayerParticipant.hpp"
#include "BannedChampion.hpp"
namespace leagueapi {
  // 
  struct EogLcdsGameDTO {
    // 
    std::vector<PlayerParticipant> teamTwo;
    // 
    std::string gameState;
    // 
    uint64_t id;
    // 
    std::vector<PlayerParticipant> teamOne;
    // 
    std::vector<BannedChampion> bannedChampions;
  };

  inline void to_json(nlohmann::json& j, const EogLcdsGameDTO& v) {
    j["teamTwo"] = v.teamTwo;
    j["gameState"] = v.gameState;
    j["id"] = v.id;
    j["teamOne"] = v.teamOne;
    j["bannedChampions"] = v.bannedChampions;
  }

  inline void from_json(const nlohmann::json& j, EogLcdsGameDTO& v) {
    v.teamTwo = j.at("teamTwo").get<std::vector<PlayerParticipant>>;
    v.gameState = j.at("gameState").get<std::string>;
    v.id = j.at("id").get<uint64_t>;
    v.teamOne = j.at("teamOne").get<std::vector<PlayerParticipant>>;
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion>>;
  }

}
#endif // SWAGGER_TYPES_EogLcdsGameDTO_HPP
