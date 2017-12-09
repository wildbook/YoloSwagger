#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsGameMap.hpp"
#include "LcdsPlayerParticipant.hpp"
namespace leagueapi {
  struct LcdsPracticeGameSearchResult_t {
    int32_t team2Count;
    bool privateGame;
    LcdsGameMap_t gameMap;
    int32_t gameMapId;
    uint64_t id;
    int32_t spectatorCount;
    int32_t team1Count;
    std::string gameMode;
    std::string name;
    int32_t maxNumPlayers;
    LcdsPlayerParticipant_t owner;
    std::string pickType;
    std::string allowSpectators;
  };

  inline void to_json(nlohmann::json& j, const LcdsPracticeGameSearchResult_t& v) {
    j["team2Count"] = v.team2Count;
    j["privateGame"] = v.privateGame;
    j["gameMap"] = v.gameMap;
    j["gameMapId"] = v.gameMapId;
    j["id"] = v.id;
    j["spectatorCount"] = v.spectatorCount;
    j["team1Count"] = v.team1Count;
    j["gameMode"] = v.gameMode;
    j["name"] = v.name;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["owner"] = v.owner;
    j["pickType"] = v.pickType;
    j["allowSpectators"] = v.allowSpectators;
  }

  inline void from_json(const nlohmann::json& j, LcdsPracticeGameSearchResult_t& v) {
    v.team2Count = j.at("team2Count").get<int32_t>();
    v.privateGame = j.at("privateGame").get<bool>();
    v.gameMap = j.at("gameMap").get<LcdsGameMap_t>();
    v.gameMapId = j.at("gameMapId").get<int32_t>();
    v.id = j.at("id").get<uint64_t>();
    v.spectatorCount = j.at("spectatorCount").get<int32_t>();
    v.team1Count = j.at("team1Count").get<int32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.owner = j.at("owner").get<LcdsPlayerParticipant_t>();
    v.pickType = j.at("pickType").get<std::string>();
    v.allowSpectators = j.at("allowSpectators").get<std::string>();
  }
  inline std::string to_string(const LcdsPracticeGameSearchResult_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
