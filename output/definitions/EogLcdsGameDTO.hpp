#ifndef SWAGGER_TYPES_EogLcdsGameDTO_HPP
#define SWAGGER_TYPES_EogLcdsGameDTO_HPP
#include <json.hpp>
#include "BannedChampion.hpp"
#include "PlayerParticipant.hpp"
namespace test {
  // 
  struct EogLcdsGameDTO {
'    // 
    std::vector<BannedChampion> bannedChampions;
    // 
    std::string gameState;
    // 
    uint64_t id;
    // 
    std::vector<PlayerParticipant> teamOne;
    // 
    std::vector<PlayerParticipant> teamTwo;
  };

  void to_json(nlohmann::json& j, const EogLcdsGameDTO& v) {
    j["bannedChampions"] = v.bannedChampions;
    j["gameState"] = v.gameState;
    j["id"] = v.id;
    j["teamOne"] = v.teamOne;
    j["teamTwo"] = v.teamTwo;
  }

  void from_json(const nlohmann::json& j, EogLcdsGameDTO& v) {
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion>>;
    v.gameState = j.at("gameState").get<std::string>;
    v.id = j.at("id").get<uint64_t>;
    v.teamOne = j.at("teamOne").get<std::vector<PlayerParticipant>>;
    v.teamTwo = j.at("teamTwo").get<std::vector<PlayerParticipant>>;
  }

}
#endif // SWAGGER_TYPES_EogLcdsGameDTO_HPP
