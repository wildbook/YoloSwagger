#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsPlayerParticipant.hpp"
#include "LcdsGameMap.hpp"
namespace leagueapi {
  struct LcdsPracticeGameSearchResult_t {
    int32_t maxNumPlayers;
    std::string allowSpectators;
    int32_t team2Count;
    int32_t gameMapId;
    std::string name;
    int32_t team1Count;
    LcdsPlayerParticipant_t owner;
    std::string pickType;
    int32_t spectatorCount;
    LcdsGameMap_t gameMap;
    uint64_t id;
    bool privateGame;
    std::string gameMode;
  };

  inline void to_json(nlohmann::json& j, const LcdsPracticeGameSearchResult_t& v) {
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["allowSpectators"] = v.allowSpectators;
    j["team2Count"] = v.team2Count;
    j["gameMapId"] = v.gameMapId;
    j["name"] = v.name;
    j["team1Count"] = v.team1Count;
    j["owner"] = v.owner;
    j["pickType"] = v.pickType;
    j["spectatorCount"] = v.spectatorCount;
    j["gameMap"] = v.gameMap;
    j["id"] = v.id;
    j["privateGame"] = v.privateGame;
    j["gameMode"] = v.gameMode;
  }

  inline void from_json(const nlohmann::json& j, LcdsPracticeGameSearchResult_t& v) {
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.allowSpectators = j.at("allowSpectators").get<std::string>();
    v.team2Count = j.at("team2Count").get<int32_t>();
    v.gameMapId = j.at("gameMapId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.team1Count = j.at("team1Count").get<int32_t>();
    v.owner = j.at("owner").get<LcdsPlayerParticipant_t>();
    v.pickType = j.at("pickType").get<std::string>();
    v.spectatorCount = j.at("spectatorCount").get<int32_t>();
    v.gameMap = j.at("gameMap").get<LcdsGameMap_t>();
    v.id = j.at("id").get<uint64_t>();
    v.privateGame = j.at("privateGame").get<bool>();
    v.gameMode = j.at("gameMode").get<std::string>();
  }
}
