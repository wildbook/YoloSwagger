#pragma once
#include <json.hpp>
#include <optional>
#include "BannedChampion.hpp"
#include "PlayerParticipant.hpp"
namespace leagueapi {
  struct EogLcdsGameDTO_t {
    uint64_t id;
    std::vector<PlayerParticipant_t> teamOne;
    std::vector<BannedChampion_t> bannedChampions;
    std::string gameState;
    std::vector<PlayerParticipant_t> teamTwo;
  };

  inline void to_json(nlohmann::json& j, const EogLcdsGameDTO_t& v) {
    j["id"] = v.id;
    j["teamOne"] = v.teamOne;
    j["bannedChampions"] = v.bannedChampions;
    j["gameState"] = v.gameState;
    j["teamTwo"] = v.teamTwo;
  }

  inline void from_json(const nlohmann::json& j, EogLcdsGameDTO_t& v) {
    v.id = j.at("id").get<uint64_t>();
    v.teamOne = j.at("teamOne").get<std::vector<PlayerParticipant_t>>();
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion_t>>();
    v.gameState = j.at("gameState").get<std::string>();
    v.teamTwo = j.at("teamTwo").get<std::vector<PlayerParticipant_t>>();
  }
}
