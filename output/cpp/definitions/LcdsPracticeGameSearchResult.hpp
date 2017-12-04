#ifndef SWAGGER_TYPES_LcdsPracticeGameSearchResult_HPP
#define SWAGGER_TYPES_LcdsPracticeGameSearchResult_HPP
#include <json.hpp>
#include "LcdsGameMap.hpp"
#include "LcdsPlayerParticipant.hpp"
namespace leagueapi {
  // 
  struct LcdsPracticeGameSearchResult {
    // 
    int32_t maxNumPlayers;
    // 
    std::string name;
    // 
    int32_t team1Count;
    // 
    std::string allowSpectators;
    // 
    std::string gameMode;
    // 
    int32_t team2Count;
    // 
    bool privateGame;
    // 
    int32_t gameMapId;
    // 
    LcdsGameMap gameMap;
    // 
    int32_t spectatorCount;
    // 
    LcdsPlayerParticipant owner;
    // 
    uint64_t id;
    // 
    std::string pickType;
  };

  inline void to_json(nlohmann::json& j, const LcdsPracticeGameSearchResult& v) {
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["name"] = v.name;
    j["team1Count"] = v.team1Count;
    j["allowSpectators"] = v.allowSpectators;
    j["gameMode"] = v.gameMode;
    j["team2Count"] = v.team2Count;
    j["privateGame"] = v.privateGame;
    j["gameMapId"] = v.gameMapId;
    j["gameMap"] = v.gameMap;
    j["spectatorCount"] = v.spectatorCount;
    j["owner"] = v.owner;
    j["id"] = v.id;
    j["pickType"] = v.pickType;
  }

  inline void from_json(const nlohmann::json& j, LcdsPracticeGameSearchResult& v) {
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>;
    v.name = j.at("name").get<std::string>;
    v.team1Count = j.at("team1Count").get<int32_t>;
    v.allowSpectators = j.at("allowSpectators").get<std::string>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.team2Count = j.at("team2Count").get<int32_t>;
    v.privateGame = j.at("privateGame").get<bool>;
    v.gameMapId = j.at("gameMapId").get<int32_t>;
    v.gameMap = j.at("gameMap").get<LcdsGameMap>;
    v.spectatorCount = j.at("spectatorCount").get<int32_t>;
    v.owner = j.at("owner").get<LcdsPlayerParticipant>;
    v.id = j.at("id").get<uint64_t>;
    v.pickType = j.at("pickType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LcdsPracticeGameSearchResult_HPP