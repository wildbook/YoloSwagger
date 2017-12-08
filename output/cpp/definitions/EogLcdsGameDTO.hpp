#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerParticipant.hpp"
#include "BannedChampion.hpp"
namespace leagueapi {
  struct EogLcdsGameDTO_t {
    std::vector<PlayerParticipant_t> teamTwo;
    std::string_t gameState;
    uint64_t_t id;
    std::vector<PlayerParticipant_t> teamOne;
    std::vector<BannedChampion_t> bannedChampions;
  };

  inline void to_json(nlohmann::json& j, const EogLcdsGameDTO_t& v) {
    j["teamTwo"] = v.teamTwo;
    j["gameState"] = v.gameState;
    j["id"] = v.id;
    j["teamOne"] = v.teamOne;
    j["bannedChampions"] = v.bannedChampions;
  }

  inline void from_json(const nlohmann::json& j, EogLcdsGameDTO_t& v) {
    v.teamTwo = j.at("teamTwo").get<std::vector<PlayerParticipant_t>>();
    v.gameState = j.at("gameState").get<std::string_t>();
    v.id = j.at("id").get<uint64_t_t>();
    v.teamOne = j.at("teamOne").get<std::vector<PlayerParticipant_t>>();
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion_t>>();
  }
  inline std::string to_string(const EogLcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
