#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsPlayerParticipant.hpp"
#include "LcdsGameMap.hpp"
namespace leagueapi {
  struct LcdsPracticeGameSearchResult_t {
    std::string allowSpectators;
    LcdsGameMap_t gameMap;
    int32_t gameMapId;
    std::string gameMode;
    uint64_t id;
    int32_t maxNumPlayers;
    std::string name;
    LcdsPlayerParticipant_t owner;
    std::string pickType;
    bool privateGame;
    int32_t spectatorCount;
    int32_t team1Count;
    int32_t team2Count;
  };

  inline void to_json(nlohmann::json& j, const LcdsPracticeGameSearchResult_t& v) {
    j["allowSpectators"] = v.allowSpectators;
    j["gameMap"] = v.gameMap;
    j["gameMapId"] = v.gameMapId;
    j["gameMode"] = v.gameMode;
    j["id"] = v.id;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["name"] = v.name;
    j["owner"] = v.owner;
    j["pickType"] = v.pickType;
    j["privateGame"] = v.privateGame;
    j["spectatorCount"] = v.spectatorCount;
    j["team1Count"] = v.team1Count;
    j["team2Count"] = v.team2Count;
  }

  inline void from_json(const nlohmann::json& j, LcdsPracticeGameSearchResult_t& v) {
    v.allowSpectators = j.at("allowSpectators").get<std::string>();
    v.gameMap = j.at("gameMap").get<LcdsGameMap_t>();
    v.gameMapId = j.at("gameMapId").get<int32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.owner = j.at("owner").get<LcdsPlayerParticipant_t>();
    v.pickType = j.at("pickType").get<std::string>();
    v.privateGame = j.at("privateGame").get<bool>();
    v.spectatorCount = j.at("spectatorCount").get<int32_t>();
    v.team1Count = j.at("team1Count").get<int32_t>();
    v.team2Count = j.at("team2Count").get<int32_t>();
  }
}
