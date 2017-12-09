#pragma once
#include <json.hpp>
#include <optional>
#include "ChampSelectLcdsPlayerChampionSelectionDTO.hpp"
#include "BannedChampion.hpp"
namespace leagueapi {
  struct ChampSelectLcdsGameDTO_t {
    std::string queueTypeName;
    int64_t spectatorDelay;
    std::vector<BannedChampion_t> bannedChampions;
    std::vector<nlohmann::json> teamTwo;
    std::vector<ChampSelectLcdsPlayerChampionSelectionDTO_t> playerChampionSelections;
    std::vector<nlohmann::json> teamOne;
    int64_t optimisticLock;
    std::string gameState;
    std::vector<std::string> gameMutators;
    std::string statusOfParticipants;
    uint64_t id;
    std::string name;
    std::string roomPassword;
    std::string roomName;
    int32_t pickTurn;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsGameDTO_t& v) {
    j["queueTypeName"] = v.queueTypeName;
    j["spectatorDelay"] = v.spectatorDelay;
    j["bannedChampions"] = v.bannedChampions;
    j["teamTwo"] = v.teamTwo;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["teamOne"] = v.teamOne;
    j["optimisticLock"] = v.optimisticLock;
    j["gameState"] = v.gameState;
    j["gameMutators"] = v.gameMutators;
    j["statusOfParticipants"] = v.statusOfParticipants;
    j["id"] = v.id;
    j["name"] = v.name;
    j["roomPassword"] = v.roomPassword;
    j["roomName"] = v.roomName;
    j["pickTurn"] = v.pickTurn;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsGameDTO_t& v) {
    v.queueTypeName = j.at("queueTypeName").get<std::string>();
    v.spectatorDelay = j.at("spectatorDelay").get<int64_t>();
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion_t>>();
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<ChampSelectLcdsPlayerChampionSelectionDTO_t>>();
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>();
    v.optimisticLock = j.at("optimisticLock").get<int64_t>();
    v.gameState = j.at("gameState").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
    v.roomName = j.at("roomName").get<std::string>();
    v.pickTurn = j.at("pickTurn").get<int32_t>();
  }
  inline std::string to_string(const ChampSelectLcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
