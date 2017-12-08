#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsPlayerParticipant.hpp"
namespace leagueapi {
  struct LcdsGameDTO_t {
    int64_t_t optimisticLock;
    int32_t_t maxNumPlayers;
    int32_t_t gameTypeConfigId;
    std::string_t name;
    std::vector<LcdsPlayerParticipant_t> teamOne;
    LcdsPlayerParticipant_t ownerSummary;
    std::vector<LcdsPlayerParticipant_t> teamTwo;
    std::string_t gameMode;
    int32_t_t mapId;
    std::string_t gameType;
    std::vector<LcdsPlayerParticipant_t> observers;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    std::string_t spectatorsAllowed;
    std::string_t gameState;
    std::string_t passbackUrl;
    std::vector<std::string> gameMutators;
    std::string_t passbackDataPacket;
    std::string_t roomName;
    std::string_t roomPassword;
    int64_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LcdsGameDTO_t& v) {
    j["optimisticLock"] = v.optimisticLock;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["name"] = v.name;
    j["teamOne"] = v.teamOne;
    j["ownerSummary"] = v.ownerSummary;
    j["teamTwo"] = v.teamTwo;
    j["gameMode"] = v.gameMode;
    j["mapId"] = v.mapId;
    j["gameType"] = v.gameType;
    j["observers"] = v.observers;
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
    j["spectatorsAllowed"] = v.spectatorsAllowed;
    j["gameState"] = v.gameState;
    j["passbackUrl"] = v.passbackUrl;
    j["gameMutators"] = v.gameMutators;
    j["passbackDataPacket"] = v.passbackDataPacket;
    j["roomName"] = v.roomName;
    j["roomPassword"] = v.roomPassword;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LcdsGameDTO_t& v) {
    v.optimisticLock = j.at("optimisticLock").get<int64_t_t>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t_t>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t_t>();
    v.name = j.at("name").get<std::string_t>();
    v.teamOne = j.at("teamOne").get<std::vector<LcdsPlayerParticipant_t>>();
    v.ownerSummary = j.at("ownerSummary").get<LcdsPlayerParticipant_t>();
    v.teamTwo = j.at("teamTwo").get<std::vector<LcdsPlayerParticipant_t>>();
    v.gameMode = j.at("gameMode").get<std::string_t>();
    v.mapId = j.at("mapId").get<int32_t_t>();
    v.gameType = j.at("gameType").get<std::string_t>();
    v.observers = j.at("observers").get<std::vector<LcdsPlayerParticipant_t>>();
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>();
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<std::string_t>();
    v.gameState = j.at("gameState").get<std::string_t>();
    v.passbackUrl = j.at("passbackUrl").get<std::string_t>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.passbackDataPacket = j.at("passbackDataPacket").get<std::string_t>();
    v.roomName = j.at("roomName").get<std::string_t>();
    v.roomPassword = j.at("roomPassword").get<std::string_t>();
    v.id = j.at("id").get<int64_t_t>();
  }
  inline std::string to_string(const LcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
