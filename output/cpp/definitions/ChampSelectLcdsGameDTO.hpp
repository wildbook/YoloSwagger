#pragma once
#include <json.hpp>
#include <optional>
#include "ChampSelectLcdsPlayerChampionSelectionDTO.hpp"
#include "BannedChampion.hpp"
namespace leagueapi {
  struct ChampSelectLcdsGameDTO_t {
    std::vector<nlohmann::json> teamOne;
    std::string gameState;
    std::string roomName;
    std::string queueTypeName;
    std::string name;
    int64_t spectatorDelay;
    std::vector<nlohmann::json> teamTwo;
    std::vector<ChampSelectLcdsPlayerChampionSelectionDTO_t> playerChampionSelections;
    uint64_t id;
    std::string roomPassword;
    int64_t optimisticLock;
    std::string statusOfParticipants;
    std::vector<BannedChampion_t> bannedChampions;
    std::vector<std::string> gameMutators;
    int32_t pickTurn;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsGameDTO_t& v) {
    j["teamOne"] = v.teamOne;
    j["gameState"] = v.gameState;
    j["roomName"] = v.roomName;
    j["queueTypeName"] = v.queueTypeName;
    j["name"] = v.name;
    j["spectatorDelay"] = v.spectatorDelay;
    j["teamTwo"] = v.teamTwo;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["id"] = v.id;
    j["roomPassword"] = v.roomPassword;
    j["optimisticLock"] = v.optimisticLock;
    j["statusOfParticipants"] = v.statusOfParticipants;
    j["bannedChampions"] = v.bannedChampions;
    j["gameMutators"] = v.gameMutators;
    j["pickTurn"] = v.pickTurn;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsGameDTO_t& v) {
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>();
    v.gameState = j.at("gameState").get<std::string>();
    v.roomName = j.at("roomName").get<std::string>();
    v.queueTypeName = j.at("queueTypeName").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.spectatorDelay = j.at("spectatorDelay").get<int64_t>();
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<ChampSelectLcdsPlayerChampionSelectionDTO_t>>();
    v.id = j.at("id").get<uint64_t>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
    v.optimisticLock = j.at("optimisticLock").get<int64_t>();
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>();
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion_t>>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.pickTurn = j.at("pickTurn").get<int32_t>();
  }
  inline std::string to_string(const ChampSelectLcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
