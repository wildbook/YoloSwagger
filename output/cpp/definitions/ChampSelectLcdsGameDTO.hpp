#pragma once
#include <json.hpp>
#include <optional>
#include "BannedChampion.hpp"
#include "ChampSelectLcdsPlayerChampionSelectionDTO.hpp"
namespace leagueapi {
  struct ChampSelectLcdsGameDTO_t {
    std::vector<nlohmann::json> teamTwo;
    std::vector<nlohmann::json> teamOne;
    int32_t pickTurn;
    std::string statusOfParticipants;
    std::vector<ChampSelectLcdsPlayerChampionSelectionDTO_t> playerChampionSelections;
    int64_t optimisticLock;
    std::string roomName;
    std::vector<BannedChampion_t> bannedChampions;
    int64_t spectatorDelay;
    std::string roomPassword;
    std::string queueTypeName;
    std::string gameState;
    std::vector<std::string> gameMutators;
    std::string name;
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsGameDTO_t& v) {
    j["teamTwo"] = v.teamTwo;
    j["teamOne"] = v.teamOne;
    j["pickTurn"] = v.pickTurn;
    j["statusOfParticipants"] = v.statusOfParticipants;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["optimisticLock"] = v.optimisticLock;
    j["roomName"] = v.roomName;
    j["bannedChampions"] = v.bannedChampions;
    j["spectatorDelay"] = v.spectatorDelay;
    j["roomPassword"] = v.roomPassword;
    j["queueTypeName"] = v.queueTypeName;
    j["gameState"] = v.gameState;
    j["gameMutators"] = v.gameMutators;
    j["name"] = v.name;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsGameDTO_t& v) {
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>();
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>();
    v.pickTurn = j.at("pickTurn").get<int32_t>();
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<ChampSelectLcdsPlayerChampionSelectionDTO_t>>();
    v.optimisticLock = j.at("optimisticLock").get<int64_t>();
    v.roomName = j.at("roomName").get<std::string>();
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion_t>>();
    v.spectatorDelay = j.at("spectatorDelay").get<int64_t>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
    v.queueTypeName = j.at("queueTypeName").get<std::string>();
    v.gameState = j.at("gameState").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
  }
  inline std::string to_string(const ChampSelectLcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
