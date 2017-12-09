#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsPlayerParticipant.hpp"
#include "LcdsGameMap.hpp"
namespace leagueapi {
  struct LcdsPracticeGameSearchResult_t {
    std::string gameMode;
    std::string allowSpectators;
    bool privateGame;
    LcdsGameMap_t gameMap;
    int32_t team2Count;
    int32_t gameMapId;
    int32_t team1Count;
    std::string pickType;
    LcdsPlayerParticipant_t owner;
    int32_t maxNumPlayers;
    int32_t spectatorCount;
    std::string name;
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LcdsPracticeGameSearchResult_t& v) {
    j["gameMode"] = v.gameMode;
    j["allowSpectators"] = v.allowSpectators;
    j["privateGame"] = v.privateGame;
    j["gameMap"] = v.gameMap;
    j["team2Count"] = v.team2Count;
    j["gameMapId"] = v.gameMapId;
    j["team1Count"] = v.team1Count;
    j["pickType"] = v.pickType;
    j["owner"] = v.owner;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["spectatorCount"] = v.spectatorCount;
    j["name"] = v.name;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LcdsPracticeGameSearchResult_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.allowSpectators = j.at("allowSpectators").get<std::string>();
    v.privateGame = j.at("privateGame").get<bool>();
    v.gameMap = j.at("gameMap").get<LcdsGameMap_t>();
    v.team2Count = j.at("team2Count").get<int32_t>();
    v.gameMapId = j.at("gameMapId").get<int32_t>();
    v.team1Count = j.at("team1Count").get<int32_t>();
    v.pickType = j.at("pickType").get<std::string>();
    v.owner = j.at("owner").get<LcdsPlayerParticipant_t>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.spectatorCount = j.at("spectatorCount").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
  }
  inline std::string to_string(const LcdsPracticeGameSearchResult_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
