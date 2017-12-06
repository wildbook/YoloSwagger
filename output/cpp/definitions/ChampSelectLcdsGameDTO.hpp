#pragma once
#include <json.hpp>
#include <optional>
#include "BannedChampion.hpp"
#include "ChampSelectLcdsPlayerChampionSelectionDTO.hpp"
namespace leagueapi {
  struct ChampSelectLcdsGameDTO_t {
    std::vector<nlohmann::json> teamOne;
    int64_t spectatorDelay;
    std::vector<ChampSelectLcdsPlayerChampionSelectionDTO_t> playerChampionSelections;
    std::string roomPassword;
    std::string name;
    std::string statusOfParticipants;
    std::string queueTypeName;
    std::string roomName;
    std::string gameState;
    std::vector<nlohmann::json> teamTwo;
    int32_t pickTurn;
    uint64_t id;
    int64_t optimisticLock;
    std::vector<BannedChampion_t> bannedChampions;
    std::vector<std::string> gameMutators;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsGameDTO_t& v) {
    j["teamOne"] = v.teamOne;
    j["spectatorDelay"] = v.spectatorDelay;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["roomPassword"] = v.roomPassword;
    j["name"] = v.name;
    j["statusOfParticipants"] = v.statusOfParticipants;
    j["queueTypeName"] = v.queueTypeName;
    j["roomName"] = v.roomName;
    j["gameState"] = v.gameState;
    j["teamTwo"] = v.teamTwo;
    j["pickTurn"] = v.pickTurn;
    j["id"] = v.id;
    j["optimisticLock"] = v.optimisticLock;
    j["bannedChampions"] = v.bannedChampions;
    j["gameMutators"] = v.gameMutators;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsGameDTO_t& v) {
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>();
    v.spectatorDelay = j.at("spectatorDelay").get<int64_t>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<ChampSelectLcdsPlayerChampionSelectionDTO_t>>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>();
    v.queueTypeName = j.at("queueTypeName").get<std::string>();
    v.roomName = j.at("roomName").get<std::string>();
    v.gameState = j.at("gameState").get<std::string>();
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>();
    v.pickTurn = j.at("pickTurn").get<int32_t>();
    v.id = j.at("id").get<uint64_t>();
    v.optimisticLock = j.at("optimisticLock").get<int64_t>();
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion_t>>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
  }
}
