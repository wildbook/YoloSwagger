#pragma once
#include <json.hpp>
#include <optional>
#include "ChampSelectLcdsPlayerChampionSelectionDTO.hpp"
#include "BannedChampion.hpp"
namespace leagueapi {
  struct ChampSelectLcdsGameDTO_t {
    std::string statusOfParticipants;
    std::vector<BannedChampion_t> bannedChampions;
    std::string roomPassword;
    std::string roomName;
    std::vector<std::string> gameMutators;
    uint64_t id;
    int64_t optimisticLock;
    std::string queueTypeName;
    std::string gameState;
    std::string name;
    std::vector<ChampSelectLcdsPlayerChampionSelectionDTO_t> playerChampionSelections;
    std::vector<nlohmann::json> teamOne;
    int32_t pickTurn;
    std::vector<nlohmann::json> teamTwo;
    int64_t spectatorDelay;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsGameDTO_t& v) {
    j["statusOfParticipants"] = v.statusOfParticipants;
    j["bannedChampions"] = v.bannedChampions;
    j["roomPassword"] = v.roomPassword;
    j["roomName"] = v.roomName;
    j["gameMutators"] = v.gameMutators;
    j["id"] = v.id;
    j["optimisticLock"] = v.optimisticLock;
    j["queueTypeName"] = v.queueTypeName;
    j["gameState"] = v.gameState;
    j["name"] = v.name;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["teamOne"] = v.teamOne;
    j["pickTurn"] = v.pickTurn;
    j["teamTwo"] = v.teamTwo;
    j["spectatorDelay"] = v.spectatorDelay;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsGameDTO_t& v) {
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>();
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion_t>>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
    v.roomName = j.at("roomName").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.id = j.at("id").get<uint64_t>();
    v.optimisticLock = j.at("optimisticLock").get<int64_t>();
    v.queueTypeName = j.at("queueTypeName").get<std::string>();
    v.gameState = j.at("gameState").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<ChampSelectLcdsPlayerChampionSelectionDTO_t>>();
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>();
    v.pickTurn = j.at("pickTurn").get<int32_t>();
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>();
    v.spectatorDelay = j.at("spectatorDelay").get<int64_t>();
  }
  inline std::string to_string(const ChampSelectLcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
