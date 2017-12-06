#pragma once
#include <json.hpp>
#include <optional>
#include "ChampSelectLcdsPlayerChampionSelectionDTO.hpp"
#include "BannedChampion.hpp"
namespace leagueapi {
  struct ChampSelectLcdsGameDTO_t {
    std::vector<BannedChampion_t> bannedChampions;
    std::vector<std::string> gameMutators;
    std::string gameState;
    uint64_t id;
    std::string name;
    int64_t optimisticLock;
    int32_t pickTurn;
    std::vector<ChampSelectLcdsPlayerChampionSelectionDTO_t> playerChampionSelections;
    std::string queueTypeName;
    std::string roomName;
    std::string roomPassword;
    int64_t spectatorDelay;
    std::string statusOfParticipants;
    std::vector<nlohmann::json> teamOne;
    std::vector<nlohmann::json> teamTwo;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsGameDTO_t& v) {
    j["bannedChampions"] = v.bannedChampions;
    j["gameMutators"] = v.gameMutators;
    j["gameState"] = v.gameState;
    j["id"] = v.id;
    j["name"] = v.name;
    j["optimisticLock"] = v.optimisticLock;
    j["pickTurn"] = v.pickTurn;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["queueTypeName"] = v.queueTypeName;
    j["roomName"] = v.roomName;
    j["roomPassword"] = v.roomPassword;
    j["spectatorDelay"] = v.spectatorDelay;
    j["statusOfParticipants"] = v.statusOfParticipants;
    j["teamOne"] = v.teamOne;
    j["teamTwo"] = v.teamTwo;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsGameDTO_t& v) {
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion_t>>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.gameState = j.at("gameState").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.optimisticLock = j.at("optimisticLock").get<int64_t>();
    v.pickTurn = j.at("pickTurn").get<int32_t>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<ChampSelectLcdsPlayerChampionSelectionDTO_t>>();
    v.queueTypeName = j.at("queueTypeName").get<std::string>();
    v.roomName = j.at("roomName").get<std::string>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
    v.spectatorDelay = j.at("spectatorDelay").get<int64_t>();
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>();
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>();
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>();
  }
}
