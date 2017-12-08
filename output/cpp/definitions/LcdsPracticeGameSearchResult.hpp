#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsGameMap.hpp"
#include "LcdsPlayerParticipant.hpp"
namespace leagueapi {
  struct LcdsPracticeGameSearchResult_t {
    std::string gameMode;
    LcdsPlayerParticipant_t owner;
    LcdsGameMap_t gameMap;
    std::string allowSpectators;
    std::string pickType;
    bool privateGame;
    int32_t maxNumPlayers;
    int32_t spectatorCount;
    uint64_t id;
    int32_t team1Count;
    int32_t gameMapId;
    std::string name;
    int32_t team2Count;
  };

  inline void to_json(nlohmann::json& j, const LcdsPracticeGameSearchResult_t& v) {
    j["gameMode"] = v.gameMode;
    j["owner"] = v.owner;
    j["gameMap"] = v.gameMap;
    j["allowSpectators"] = v.allowSpectators;
    j["pickType"] = v.pickType;
    j["privateGame"] = v.privateGame;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["spectatorCount"] = v.spectatorCount;
    j["id"] = v.id;
    j["team1Count"] = v.team1Count;
    j["gameMapId"] = v.gameMapId;
    j["name"] = v.name;
    j["team2Count"] = v.team2Count;
  }

  inline void from_json(const nlohmann::json& j, LcdsPracticeGameSearchResult_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.owner = j.at("owner").get<LcdsPlayerParticipant_t>();
    v.gameMap = j.at("gameMap").get<LcdsGameMap_t>();
    v.allowSpectators = j.at("allowSpectators").get<std::string>();
    v.pickType = j.at("pickType").get<std::string>();
    v.privateGame = j.at("privateGame").get<bool>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.spectatorCount = j.at("spectatorCount").get<int32_t>();
    v.id = j.at("id").get<uint64_t>();
    v.team1Count = j.at("team1Count").get<int32_t>();
    v.gameMapId = j.at("gameMapId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.team2Count = j.at("team2Count").get<int32_t>();
  }
  inline std::string to_string(const LcdsPracticeGameSearchResult_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
