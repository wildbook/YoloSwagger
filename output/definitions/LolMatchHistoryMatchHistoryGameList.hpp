#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryGameList_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryGameList_HPP
#include <json.hpp>
#include "LolMatchHistoryMatchHistoryGame.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryGameList {
    // 
    std::string gameBeginDate;
    // 
    uint64_t gameCount;
    // 
    std::string gameEndDate;
    // 
    uint64_t gameIndexBegin;
    // 
    uint64_t gameIndexEnd;
    // 
    std::vector<LolMatchHistoryMatchHistoryGame> games;
  };

  void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryGameList& v) {
    j["gameBeginDate"] = v.gameBeginDate;
    j["gameCount"] = v.gameCount;
    j["gameEndDate"] = v.gameEndDate;
    j["gameIndexBegin"] = v.gameIndexBegin;
    j["gameIndexEnd"] = v.gameIndexEnd;
    j["games"] = v.games;
  }

  void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryGameList& v) {
    v.gameBeginDate = j.at("gameBeginDate").get<std::string>;
    v.gameCount = j.at("gameCount").get<uint64_t>;
    v.gameEndDate = j.at("gameEndDate").get<std::string>;
    v.gameIndexBegin = j.at("gameIndexBegin").get<uint64_t>;
    v.gameIndexEnd = j.at("gameIndexEnd").get<uint64_t>;
    v.games = j.at("games").get<std::vector<LolMatchHistoryMatchHistoryGame>>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryGameList_HPP
