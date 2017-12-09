#pragma once
#include <json.hpp>
#include <optional>
#include "BannedChampion.hpp"
#include "PlayerParticipant.hpp"
namespace leagueapi {
  struct EogLcdsGameDTO_t {
    std::string gameState;
    std::vector<BannedChampion_t> bannedChampions;
    std::vector<PlayerParticipant_t> teamOne;
    std::vector<PlayerParticipant_t> teamTwo;
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const EogLcdsGameDTO_t& v) {
    j["gameState"] = v.gameState;
    j["bannedChampions"] = v.bannedChampions;
    j["teamOne"] = v.teamOne;
    j["teamTwo"] = v.teamTwo;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, EogLcdsGameDTO_t& v) {
    v.gameState = j.at("gameState").get<std::string>();
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion_t>>();
    v.teamOne = j.at("teamOne").get<std::vector<PlayerParticipant_t>>();
    v.teamTwo = j.at("teamTwo").get<std::vector<PlayerParticipant_t>>();
    v.id = j.at("id").get<uint64_t>();
  }
  inline std::string to_string(const EogLcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
